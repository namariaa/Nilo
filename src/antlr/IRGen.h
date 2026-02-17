#include "NiloScriptVisitor.h"
#include <stdlib.h>
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/NoFolder.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "errorResponse.cpp"

using namespace std;

unique_ptr<llvm::LLVMContext> Conteiner;
unique_ptr<llvm::Module> Executable;
unique_ptr<llvm::IRBuilder<llvm::ConstantFolder>> Builder;
map<string,map<string,llvm::AllocaInst*>> SymbolTable;
map<string, vector<string>> argsFunctions;
string lastVar;


class IRGen : public NiloScriptVisitor{
    private:
        llvm::Function *CurrentFunction;
        llvm::BasicBlock *CurrentBasicBlock;
        string CurrentVar;
        map<string,int> CurrentVarSize;
        llvm::Value* dPrint;
        llvm::Value* fPrint;
        llvm::Value* cPrint;
        llvm::Value* sPrint;
        llvm::Value* dScanf;
        llvm::Value* fScanf;
        llvm::Value* cScanf;
        llvm::Value* sScanf;

    public:
        IRGen(NiloScriptParser::ProgramContext* tree){
            Conteiner = make_unique<llvm::LLVMContext>();
            Executable = make_unique<llvm::Module>("NiloScriptModule", *Conteiner);
            Builder = make_unique<llvm::IRBuilder<llvm::ConstantFolder>>(*Conteiner);

            //Adiciona informações de configurações para executável
            Executable->setDataLayout(llvm::DataLayout("e-m:e-i64:64-f80:128-n8:16:32:64-S128"));
            Executable->setModuleIdentifier("Executável");
            Executable->setTargetTriple("x86_64-unknown-linux-gnu");

            //Cria função
            llvm::FunctionType *MAINTYPE = llvm::FunctionType::get(llvm::Type::getInt32Ty(*Conteiner), false);
            CurrentFunction = llvm::Function::Create(MAINTYPE, llvm::Function::ExternalLinkage, "main", Executable.get());
            CurrentBasicBlock = llvm::BasicBlock::Create(*Conteiner, "entrada", CurrentFunction);
            Builder->SetInsertPoint(CurrentBasicBlock);

            //Cria utilitários de scanf e printf
            dPrint = Builder->CreateGlobalStringPtr("%d\n", "dPrint");
            fPrint = Builder->CreateGlobalStringPtr("%f\n", "fPrint");
            cPrint = Builder->CreateGlobalStringPtr("%c\n", "cPrint");
            sPrint = Builder->CreateGlobalStringPtr("%s\n", "sPrint");

            dScanf = Builder->CreateGlobalStringPtr("%d", "dScanf");
            fScanf = Builder->CreateGlobalStringPtr("%f", "fScanf");
            cScanf = Builder->CreateGlobalStringPtr("%c", "cScanf");
            sScanf = Builder->CreateGlobalStringPtr("%s", "sScanf");

            //Cria Função Print
            llvm::FunctionCallee Print = Executable->getOrInsertFunction("printf",
            llvm::FunctionType::get(llvm::IntegerType::getInt32Ty(*Conteiner), {llvm::PointerType::get(llvm::Type::getInt8Ty(*Conteiner), 0)}, true));
                
            //Cria Função Input
            llvm::FunctionCallee Input = Executable->getOrInsertFunction("scanf",
            llvm::FunctionType::get(llvm::IntegerType::getInt32Ty(*Conteiner), {llvm::PointerType::get(llvm::Type::getInt8Ty(*Conteiner), 0)}, true));
            
            //Inicia visitação da árvore para gerar executável 
            visitProgram(tree);
            
            //Cria o retorno do IR
            Builder->CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner),0));

            //Print the executable file 
            llvm::verifyFunction(*CurrentFunction);
            Executable->print(llvm::outs(), nullptr);

            //Cria o arquivo .ll
            std::error_code errorCode;
            llvm::raw_fd_ostream out("executavel.ll", errorCode);
            Executable->print(out, nullptr);
            out.flush();
        }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        cout << "CHEGOU NO PROGRAM" << endl;
        for(NiloScriptParser::StmtContext *stm : context->stmt()){
            visitStmt(stm);
            cout << "OUT OF PROGRAM "  << context->children.size()<< endl;
        }
        cout << "SAIU" << endl;
        return any{};
    };

    virtual std::any visitStmt(NiloScriptParser::StmtContext *context) override {
        //Verifica se a pessoa colocou o ; para dá um feedback adequado
        if (context->assignment() && !context->assignment()->RETURN_TYPE()){
            errorResponse("Error. O tipo da variável não existe!");
            exit(1);
        }

        if ((context->print() != nullptr || context->assignment() != nullptr || context->functionCall() != nullptr || context->list() != nullptr || context->expression() != nullptr) && context->SC()->getText() == "<missing ';'>"){
            errorResponse("Error. É necessário colocar ; em todo fim de expressão!");
            exit(1);
        }
        else{
            cout << "NO STMT " << context->getText() << endl;
    
            if (context->print() != nullptr){
                any x = visitPrint(context->print());
                cout << "RESULT OD PRGRAM " << x.type().name() << endl;
                return x;
            }
            else if (context->assignment() != nullptr){
                any x = visitAssignment(context->assignment());
                cout << "RESULT OD PRGRAM " << x.type().name() << endl;
                return x;
            }
            else if (context->loop() != nullptr){
                return visitLoop(context->loop());
            }
            else if (context->inCase() != nullptr){
                return visitInCase(context->inCase());
            }
            else if (context->function() != nullptr){
                return visitFunction(context->function());
            }
            else if (context->functionCall() != nullptr){
                return visitFunctionCall(context->functionCall());
            }
            else if (context->list() != nullptr){
                return visitList(context->list());
            }
            else if (context->expression() != nullptr){
                return visitExpression(context->expression());
            }
            else if (context->COMMENT() != nullptr){
                return nullptr;
            }
            else{
                errorResponse("Error. Expressão não reconhecida!");
                exit(1);
            }
        }
    };

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {
        string var = context->VAR()->getText();
        lastVar = var;

        //Usando a função alloca para alocar um espaço de memória dependendo do tipo para salvarmos na nossa tabela.
        llvm::AllocaInst* alloca= nullptr;
        llvm::Type* type;
    
        if (context->RETURN_TYPE()->getText() == "inteiro"){
            alloca = Builder->CreateAlloca(llvm::Type::getInt32Ty(*Conteiner),nullptr,var);
            type = llvm::Type::getInt32Ty(*Conteiner);
        }
        else if (context->RETURN_TYPE()->getText() == "flutuante"){
            alloca = Builder->CreateAlloca(llvm::Type::getFloatTy(*Conteiner),nullptr,var);
            type = llvm::Type::getFloatTy(*Conteiner);
        }
        else if (context->RETURN_TYPE()->getText() == "caracter"){
            CurrentVar = var;
            type = llvm::Type::getInt8Ty(*Conteiner);
        }
        else if (context->RETURN_TYPE()->getText() == "bool"){
            alloca = Builder->CreateAlloca(llvm::Type::getInt1Ty(*Conteiner),nullptr,var);
            type = llvm::Type::getInt1Ty(*Conteiner);
        }
        else {
            errorResponse("Error. Tipo não reconhecido!");
            exit(1);
        }

        //Guardando na tabela para ser útil em momentos como input
        string nameCurrentFunction = CurrentFunction->getName().str();
        if (context->RETURN_TYPE()->getText() != "caracter"){
            SymbolTable[nameCurrentFunction][var] = alloca;
        }
        CurrentVar = var;

        //Pega o value
        llvm::Value *value;
        if (context->term() != nullptr) value = any_cast<llvm::Value *>(visitTerm(context->term()));
        else if (context->input() != nullptr) value = any_cast<llvm::Value *>(visitInput(context->input()));
        else if (context->acessList() != nullptr) value = any_cast<llvm::Value *>(visitAcessList(context->acessList()));
        else if (context->functionCall() != nullptr) value = any_cast<llvm::Value *>(visitFunctionCall(context->functionCall()));
        else {
            errorResponse("Error. Não foi possível associar a variável com essa expressão!");
            exit(1);
        }

        if (type != value->getType() && context->RETURN_TYPE()->getText() != "caracter"){
            errorResponse("Error. O tipo da variável não corresponde com o valor atribuido!");
            exit(1);
        }

        if ((type != value->getType()) && (context->RETURN_TYPE()->getText() == "caracter" && !value->getType()->isPointerTy())){
            errorResponse("Error. O tipo da variável não corresponde com o valor atribuido!");
            exit(1);
        }
        
        //Armazenar variável no espaço que alocamos
        llvm::Value* store;
        if (!context->input() && context->RETURN_TYPE()->getText() != "caracter"){
            store = Builder->CreateStore(value,alloca);
        }
        else{ 
            store = value;
        }
        return store;
    };

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        string var = context->VAR()->getText();
        string nameCurrentFunction = CurrentFunction->getName().str();
        llvm::AllocaInst* varInTable = SymbolTable[nameCurrentFunction][var];
        // Testa se a variável já existe na tabela de simbolos e pode ser reatribuida
        if (!varInTable){
            errorResponse("Error. Não foi possível atribuir um valor a uma varíavel que não foi associada a um tipo!");
            exit(1);
        }

        lastVar = var;
        llvm::Value *value;
        if (context->term() != nullptr) value = any_cast<llvm::Value *>(visitTerm(context->term()));
        else if (context->input() != nullptr) value = any_cast<llvm::Value *>(visitInput(context->input()));
        else if (context->acessList() != nullptr) value = any_cast<llvm::Value *>(visitAcessList(context->acessList()));
        else if (context->functionCall() != nullptr) value = any_cast<llvm::Value *>(visitFunctionCall(context->functionCall()));
        else {
            errorResponse("Error. Não foi possível associar a variável com essa expressão!");
            exit(1);
        }

        llvm::Type* typeLoadTable = varInTable->getAllocatedType();
        llvm::Type* newType = value->getType();
        llvm::Value* storeValue;

        if (typeLoadTable == newType){
            storeValue = Builder->CreateStore(value,varInTable);
        }
        else {
            errorResponse("Error. Não foi possível atribuir variavéis em que o tipo é diferente do novo valor a ser atribuido!");
            exit(1);
        }

        //Armazenar variável no espaço que alocamos
        return storeValue;
    };

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {
        if (context->fact() && !context->term()){
            return visitFact(context->fact());
        }
        else{
            cout << "TERM " << context->getText() << " " << context->term()->getText() << endl;
            llvm::Value* lhs = any_cast<llvm::Value*>(visitTerm(context->term()));
            cout << "TERM 2 " << context->fact()->getText() << endl;
            llvm::Value* rhs = any_cast<llvm::Value*>(visitFact(context->fact()));
    
            llvm::Value *result;
            if (context->children[1]->getText() == "+"){
                result = Builder->CreateAdd(lhs, std::any_cast<llvm::Value *>(rhs), "addtmp");
            }
            else if (context->children[1]->getText() == "-"){
                result = Builder->CreateSub(std::any_cast<llvm::Value *>(lhs), std::any_cast<llvm::Value *>(rhs), "subtmp");
            }
            else {
                errorResponse("Error. Operador não reconhecido!");
                return nullptr;
            }
            return result;
        }
    };

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {
        if (context->expo() && !context->fact()){
            cout << "FACT 2 " << context->getText() << endl;
            any x =  visitExpo(context->expo());
            cout << "TIPO " << x.type().name() << endl;
            return x;
        }
        else{
            cout << "FACT " << context->getText() << endl;
            llvm::Value* lhs = any_cast<llvm::Value*>(visitFact(context->fact()));
            llvm::Value* rhs = any_cast<llvm::Value*>(visitExpo(context->expo()));
    
            llvm::Value *result;
            if (context->children[1]->getText() == "*"){
                result = Builder->CreateMul(lhs, std::any_cast<llvm::Value *>(rhs), "multmp");
            }
            else if (context->children[1]->getText() == "/"){
                result = Builder->CreateSDiv(std::any_cast<llvm::Value *>(lhs), std::any_cast<llvm::Value *>(rhs), "divtmp");
            }
            else if (context->children[1]->getText() == "%"){
                result = Builder->CreateSRem(std::any_cast<llvm::Value *>(lhs), std::any_cast<llvm::Value *>(rhs), "modtmp");
            }
            else {
                errorResponse("Error. Operador não reconhecido!");
                exit(1);
            }
            return result;
        }
    };

    virtual std::any visitExpo(NiloScriptParser::ExpoContext *context) override {
        if (context->opPar() && !context->expo()){
            cout << "EXPO 2 " << context->getText() << endl;
            any x = visitOpPar(context->opPar());
            cout << "TIPO DO EXPO " << x.type().name() << endl;
            return x;
        }
        else{
            cout << "QUAL O EXPO " << context->expo()->getText() << " RHS: " <<  context->opPar()->getText() << endl;
            llvm::Value* lhs = any_cast<llvm::Value *>(visitExpo(context->expo()));
            llvm::Value* rhs = any_cast<llvm::Value *>(visitOpPar(context->opPar()));
            
            auto *constExp = llvm::dyn_cast<llvm::ConstantInt>(lhs); 
            int value = constExp->getSExtValue(); 

            llvm::Value *result = rhs; 
            if (value > 1){
                for (int i = 1; i < value; i++){
                    cout << "AQUI " << value << " " << i << endl;
                    result = Builder->CreateMul(std::any_cast<llvm::Value *>(result), std::any_cast<llvm::Value *>(rhs), "expotmp");
                }
             
               
            }
            if (value == 0){
                result = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 1);
            }

            return result;
        }
    };

    virtual std::any visitOpPar(NiloScriptParser::OpParContext *context) override {
        if (context->typeSpecifier()){
            cout << "OPPAR 2 " << context->getText() << endl;
            any x = visitTypeSpecifier(context->typeSpecifier());
            cout << "TIPO 2 " << x.type().name() << endl;
            return x;
        }
        else if (context->children[0] == context->OPAR() && context->children[2] == context->CPAR()){
            return visitTerm(context->term());
        }
        else{
            errorResponse("Error. Os parenteses não estão corretos!");
            exit(1);
            return nullptr;
        }
    };

    virtual std::any visitTypeSpecifier(NiloScriptParser::TypeSpecifierContext *context) override {
        if (context->INT()){
            cout << "INT " << context->getText() << endl;
            llvm::Value* inteiro = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), std::stoi(context->INT()->getText()));
            return inteiro;
        }
        else if (context->VAR()){
            cout << "VAR " << context->getText() << endl;
            string nameCurrentFunction = CurrentFunction->getName().str();
            cout << "NOME DA FUNÇÃO " << SymbolTable[nameCurrentFunction][context->VAR()->getText()] << endl;
            llvm::Type* type = SymbolTable[nameCurrentFunction][context->VAR()->getText()]->getAllocatedType();

            //Para casos especificos em que a variavel é uma string
            llvm::Value* variavel;
            if (type->isArrayTy()){
                cout << "É STRING "  << endl;
                string nameCurrentFunction = CurrentFunction->getName().str();
                llvm::AllocaInst* varInTable = SymbolTable[nameCurrentFunction][context->VAR()->getText()];
                llvm::Value* position = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 0);
                llvm::Value* gep = Builder->CreateGEP(llvm::ArrayType::get(llvm::Type::getInt8Ty(*Conteiner), CurrentVarSize[context->VAR()->getText()]), varInTable,{Builder->getInt32(0), position});
                variavel = gep;
            }
            else{
                variavel = Builder->CreateLoad(type, SymbolTable[nameCurrentFunction][context->VAR()->getText()], "var");
            }
            return variavel;
        }
        else if (context->STRING()){
            cout << "ACESS STRING " << context->getText() <<endl;
            string text = context->STRING()->getText();
            text = text.substr(1, text.size() - 2);
            CurrentVarSize[CurrentVar] = text.size();
           
            //Alloca o array 
            string nameCurrentFunction = CurrentFunction->getName().str();
            llvm::AllocaInst* alloca = Builder->CreateAlloca(llvm::ArrayType::get(llvm::Type::getInt8Ty(*Conteiner), text.size()),nullptr,CurrentVar); 
            SymbolTable[nameCurrentFunction][CurrentVar] = alloca;
            
            //Store dos elementos dpo array no espaço alocado
            //GetElementPtr (GEP) calcula o endereço de um elemento.
            llvm::Value *addressArray;
            llvm::Value* store;
            llvm::Value* index;
            llvm::Value* value;
            llvm::Value* retorno;
            for (int i = 0; i < text.size(); i++){
                index = Builder->getInt32(i);
                value = llvm::ConstantInt::get(llvm::Type::getInt8Ty(*Conteiner), text[i]);
                addressArray = Builder->CreateGEP(llvm::ArrayType::get(llvm::Type::getInt8Ty(*Conteiner), text.size()), alloca, {llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 0),index}, "endereco");
                store = Builder->CreateStore(value, addressArray);
                if (i == 0) retorno = addressArray;
            }
            
            return retorno;
        }
        else if (context->BOOL()){
            cout <<"VISITOU O BOLL " << context->getText() << endl;
            if (context->BOOL()->getText() == "verdadeiro"){
                llvm::Value* trueValue = llvm::ConstantInt::getTrue(*Conteiner);
                return trueValue;
            }
            else if (context->BOOL()->getText() == "falso"){
                llvm::Value* falseValue = llvm::ConstantInt::getFalse(*Conteiner);
                return falseValue;
            }
            else{
                errorResponse("Error. Não foi possível reconhecer o booleano!");
            return nullptr;
            }
        }
        else if (context->FLOAT()){
            cout << "É FLOATTTTTTT" << endl;
            llvm::Value* floatValue = llvm::ConstantFP::get(llvm::Type::getFloatTy(*Conteiner), context->FLOAT()->getText());
            return floatValue;
        }
        else {
            errorResponse("Error. Não foi possível reconhecer uma instrução!");
            return nullptr;
        }
    };

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {
        cout << "ENTROU NO PRINT" << context->getText() << endl;

        //Para não associar a string a uma variavel aleatória
        CurrentVar = "";

        llvm::Value* value;
        if (context->term()){
           value = any_cast<llvm::Value*>(visitTerm(context->term()));
        }
        else if (context->acessList()){
            value = any_cast<llvm::Value*>(visitAcessList(context->acessList()));
        }
        if (value){
            // Pegando a função que criei lá no construtor 
            llvm::Function* printf =Executable->getFunction("printf");

            // Criando os % necessários do C para entender o tipo (formatted output)
            llvm::Value* typePrint;
            llvm::Type* type;

            if (context->SHOW()->getText() == "mostrarInteiro"){
                typePrint = dPrint;
                type = llvm::Type::getInt32Ty(*Conteiner);
            }
            else if (context->SHOW()->getText() == "mostrarFlutuante"){
                typePrint = fPrint;
                type = llvm::Type::getFloatTy(*Conteiner);
            }
            else if (context->SHOW()->getText() == "mostrarCaracteres"){
                typePrint = sPrint;
                type = llvm::Type::getInt8Ty(*Conteiner);
            }
            else if (context->SHOW()->getText() == "mostrarBool"){
                typePrint = dPrint;
                type = llvm::Type::getInt1Ty(*Conteiner);
            }
            else {
                errorResponse("Error. Função mostrar não reconhecida!");
                exit(1);
            }

            if (type != value->getType() && context->SHOW()->getText() != "mostrarCaracteres"){
                errorResponse("Error. O valor passado não é do mesmo tipo da função mostrar declarada!");
                exit(1);
            }

            if ((type != value->getType()) && (context->SHOW()->getText() == "mostrarCaracteres" && !value->getType()->isPointerTy())){
                errorResponse("Error. O valor passado não é do mesmo tipo da função mostrar declarada!");
                exit(1);
            }

            if (context->children.size() != 4){
                errorResponse("Error. A declaração do mostrar está incorreta!");
                exit(1);
            }

            cout << "TAMNHO DO FILHO DO PRINT " << context->children.size() << endl;

            llvm::Value* call = Builder->CreateCall(printf, { typePrint, value });
            return call;
        }
        else{
            errorResponse("Error. Você precisa colocar algo para mostrar");
            exit(1);
        }
    };

    virtual std::any visitInput(NiloScriptParser::InputContext *context) override {
        cout <<"INPUT " << context->getText() <<endl;
        // Pegando a função que criei lá no construtor 
        llvm::Function *scanf =Executable->getFunction("scanf");

        // Criando os % necessários do C para entender o tipo
        llvm::Value *typeInput;

        if (context->READ()->getText() == "pegaInteiro"){
            typeInput = dScanf;
        }
        else if (context->READ()->getText() == "pegaFlutuante"){
            typeInput = fScanf;
        }
        else if (context->READ()->getText() == "pegaCaracteres"){
            typeInput = sScanf;
        }
        else {
            errorResponse("Error. Função de pegar não reconhecida!");
            exit(1);
        }
        
        //Faz chamada de função
        string nameCurrentFunction = CurrentFunction->getName().str();
        llvm::Value* callScanf = Builder->CreateCall(scanf, { typeInput, SymbolTable[nameCurrentFunction][lastVar] });
    
        return callScanf;
    }
      

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        llvm::Value* lhs = any_cast<llvm::Value*>(visitTerm(context->term()[0]));
        llvm::Value* rhs = any_cast<llvm::Value*>(visitTerm(context->term()[1]));
        string oper = context->OPERATOR()->getText();
        llvm::Value* operation;

        //Garante que o tipo retornado esteja certinho
        // auto *lhsTy = lhs->getType();
        // auto *rhsTy = rhs->getType();

        // if (lhsTy != rhsTy) {
        //     if (lhsTy->isIntegerTy(32) && rhsTy->isIntegerTy(1)){
            //         rhs = Builder->CreateZExt(rhs, lhsTy, "convertendo_bool_inteiro");
            //     }
            //     else if (lhsTy->isIntegerTy(1) && rhsTy->isIntegerTy(32)){
                //         lhs = Builder->CreateZExt(lhs, rhsTy, "convertendo_bool_inteiro");
                //     }     
                // }

        //Cria operações
        if (oper ==  "=="){
            operation = Builder->CreateICmpEQ(lhs, rhs, "igual");
        }
        else if (oper == "!="){
            operation = Builder->CreateICmpNE(lhs, rhs, "diferente");
        }
        else if (oper == ">"){
            operation = Builder->CreateICmpUGT(lhs, rhs, "maior");
        }
        else if (oper == "<"){
            operation = Builder->CreateICmpULT(lhs, rhs, "menor");
        }
        else if (oper == ">="){
            operation = Builder->CreateICmpUGE(lhs, rhs, "maior_igual");
        }
        else if (oper == "<="){
            operation = Builder->CreateICmpULE(lhs, rhs, "menor_igual");
        }
        else{
            errorResponse("Error. Operador de comparação não encontrado!");
            exit(1);
        }

        //Cria pulo condicional
        llvm::BasicBlock* blockCondicional = llvm::BasicBlock::Create(*Conteiner, "blocoCondicional", CurrentFunction); 
        llvm::Value* jump;
        llvm::BasicBlock* block2 = llvm::BasicBlock::Create(*Conteiner, "Entrada2", CurrentFunction); 
        llvm::BasicBlock* blockElseCondicional;
        if (context->ELSE()){
            blockElseCondicional = llvm::BasicBlock::Create(*Conteiner, "blocoSenaoCondicional", CurrentFunction); 
            jump = Builder->CreateCondBr(operation, blockCondicional, blockElseCondicional);
        }
        else{
            jump = Builder->CreateCondBr(operation, blockCondicional, block2);
        }

        //Crio o bloco de condicional e vou inserindo o código que está dentro dele
        Builder->SetInsertPoint(blockCondicional);
        for (NiloScriptParser::StmtContext *stm : context->thenBlock) {
            visitStmt(stm);
        }
        jump = Builder->CreateBr(block2);

        //Criar o bloco do senão caso haja
        if (context->ELSE()){
            Builder->SetInsertPoint(blockElseCondicional);
            for (NiloScriptParser::StmtContext *stm : context->elseStmt){
                visitStmt(stm);
            }
            jump = Builder->CreateBr(block2);
        }

        //No bloco que eu estava antes vou criar um salto condicional 
        
        CurrentBasicBlock = block2;
        Builder->SetInsertPoint(CurrentBasicBlock);

        return lhs;
    };

    virtual std::any visitLoop(NiloScriptParser::LoopContext *context) override {
        cout << "CHEGOU NO LOOP " << context->getText()  << endl;
        //Cria blocos
        llvm::BasicBlock* blockCondicionalLoop = llvm::BasicBlock::Create(*Conteiner, "blocoCondicionalLoop", CurrentFunction); 
        llvm::BasicBlock* blockLoopBody = llvm::BasicBlock::Create(*Conteiner, "blocoCorpoLoop", CurrentFunction); 
        llvm::BasicBlock* block2 = llvm::BasicBlock::Create(*Conteiner, "Entrada3", CurrentFunction);

        //Cria um jump para o condicional
        llvm::Value* jump = Builder->CreateBr(blockCondicionalLoop);

        //Cria bloco de condicional
        CurrentBasicBlock = blockCondicionalLoop;
        Builder->SetInsertPoint(CurrentBasicBlock);

        llvm::Value* lhs = any_cast<llvm::Value*>(visitTerm(context->term()[0]));
        llvm::Value* rhs = any_cast<llvm::Value*>(visitTerm(context->term()[1]));
        string oper = context->OPERATOR()->getText();
        llvm::Value* operation;
        
        if (oper ==  "=="){
            operation = Builder->CreateICmpEQ(lhs, rhs, "igual");
        }
        else if (oper == "!="){
            operation = Builder->CreateICmpNE(lhs, rhs, "diferente");
        }
        else if (oper == ">"){
            operation = Builder->CreateICmpUGT(lhs, rhs, "maior");
        }
        else if (oper == "<"){
            operation = Builder->CreateICmpULT(lhs, rhs, "menor");
        }
        else if (oper == ">="){
            operation = Builder->CreateICmpUGE(lhs, rhs, "maior_igual");
        }
        else if (oper == "<="){
            operation = Builder->CreateICmpULE(lhs, rhs, "menor_igaul");
        }
        else{
            errorResponse("Error. Operador de comparação não encontrado!");
            exit(1);
        }

        jump = Builder->CreateCondBr(operation, blockLoopBody, block2);

        //Corpo do loop
        CurrentBasicBlock = blockLoopBody;
        Builder->SetInsertPoint(CurrentBasicBlock);
        for (NiloScriptParser::StmtContext *stm : context->stmt()) {
            visitStmt(stm);
        }
        jump = Builder->CreateBr(blockCondicionalLoop);
        
        //Muda para o bloco final
        CurrentBasicBlock = block2;
        Builder->SetInsertPoint(CurrentBasicBlock);

        return lhs;
        
    };

    virtual std::any visitFunction(NiloScriptParser::FunctionContext *context) override {
        cout << "VISITOU O FUNCTION " << context->getText() << endl;
        //Pega nome da função 
        string var = context->functionName->getText();

        //Crio escopo da função e armazeno argumentos
        std::vector<llvm::Type*> params;
        for (int i = 1; i < context->VAR().size(); i++){
            cout << "ARG " << context->children[i + 8]->getText() << endl;
            string arg = context->VAR()[i]->getText();
            llvm::Type* argType;

            //Salva o tipo do argumento
            if (context->RETURN_TYPE()[i - 1]->getText() == "inteiro"){
                argType = llvm::Type::getInt32Ty(*Conteiner);
            }
            else if (context->RETURN_TYPE()[i - 1]->getText() == "flutuante"){
                argType = llvm::Type::getFloatTy(*Conteiner);
            }
            else if (context->RETURN_TYPE()[i - 1]->getText() == "caracter"){
                argType = llvm::Type::getInt8Ty(*Conteiner);
            }
            else if (context->RETURN_TYPE()[i - 1]->getText() == "bool"){
                argType = llvm::Type::getInt1Ty(*Conteiner);
            }
            else {
                errorResponse("Error. Tipo do argumento não reconhecido!");
                exit(1);
            } 
            params.push_back(argType);

            //Salva na lista de argumentos 
            argsFunctions[var].push_back(arg);

            if (context->children[i + 8]->getText() == ")") break; //Pois os argumentos acabaram
        }

        //Cria a função e armazena retorno
        llvm::FunctionType *FUNCTIONTYPE;
        llvm::Value* valueReturn;
        if (context->typeFunction->getText() == "inteiro"){
            FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getInt32Ty(*Conteiner),params, false);
        }
        else if (context->typeFunction->getText() == "flutuante"){
            FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getFloatTy(*Conteiner), params, false);
           
        }
        else if (context->typeFunction->getText() == "caracter"){
            FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getInt8Ty(*Conteiner),params, false);
        }
        else if (context->typeFunction->getText() == "bool"){
            FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getInt1Ty(*Conteiner),params, false);
        }
        else if (context->typeFunction->getText() == "nada"){
            FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getVoidTy(*Conteiner), false);
        }
        else {
            errorResponse("Error. Tipo da função não reconhecido!");
            exit(1);
        } 
        llvm::Function* mainFunction = CurrentFunction;
        llvm::Function* theFunction = llvm::Function::Create(FUNCTIONTYPE, llvm::Function::ExternalLinkage, var, Executable.get());
        CurrentFunction = theFunction;
        llvm::BasicBlock* currentBlock = CurrentBasicBlock;

        //Cria basic block de conteúdo da função
        llvm::BasicBlock* functionBB = llvm::BasicBlock::Create(*Conteiner, "blocoFuncao", CurrentFunction); 
        CurrentBasicBlock = functionBB;
        Builder->SetInsertPoint(CurrentBasicBlock);

        //Cria os parametros para botar na chamada de função
        for (int i = 1; i < context->VAR().size(); i++){
            string arg = context->VAR()[i]->getText();
            string type = context->RETURN_TYPE()[i]->getText();

            cout << "FUNÇÂO DO TIPO " << type << " " << arg << endl;
            //Faz load
            string nameCurrentFunction = CurrentFunction->getName().str();
        
            //Aloca espaços de memória das variáveis da função
            llvm::AllocaInst* alloca;
            if (type == "inteiro"){
                alloca = Builder->CreateAlloca(llvm::Type::getInt32Ty(*Conteiner),nullptr,arg);
            }
            else if (type == "flutuante"){
                alloca = Builder->CreateAlloca(llvm::Type::getFloatTy(*Conteiner),nullptr,arg);
            }
            else if (type == "caracter"){
                alloca = Builder->CreateAlloca(llvm::Type::getInt8Ty(*Conteiner),nullptr,arg);
            }
            else if (type == "booleano"){
                alloca = Builder->CreateAlloca(llvm::Type::getInt1Ty(*Conteiner),nullptr,arg);
            }
            else {
                errorResponse("Error. Tipo da função não reconhecido!");
                exit(1);
            } 
            SymbolTable[var][arg] = alloca;
            if (context->children[i + 8]->getText() == ")") break; //Pois os argumentos acabaram
        }

        //Fazer o store do argumentos 
        cout << "SIZE " << CurrentFunction->arg_size() << endl;
        for (int i = 0; i < CurrentFunction->arg_size();i++){
            llvm::Value* ponteiroArg = &(*CurrentFunction->getArg(i));
            llvm::Value* stroreValue = Builder->CreateStore(ponteiroArg, SymbolTable[var][argsFunctions[var][i]]);
        }
        cout << "SALVOU TUDO " << context->getText() << endl;

        //Preenche o bloco atual e confere se não tem funções declaradas dentro de outras
        for (NiloScriptParser::StmtContext* stm : context->stmt()){

            if(context->stmt().front()->function()){
                errorResponse("Error. Não é possível declarar uma função dentro de outra!");
                exit(1);
            }
            visitStmt(stm);
        }

        // Armazena valor de retorno
        if (!context->term() && context->returnVar){
            if (context->typeFunction->getText() == "inteiro"){
                valueReturn = Builder->CreateLoad(llvm::Type::getInt32Ty(*Conteiner),SymbolTable[var][context->returnVar->getText()]);
            }
            else if (context->typeFunction->getText() == "flutuante"){
                valueReturn = Builder->CreateLoad(llvm::Type::getFloatTy(*Conteiner),SymbolTable[var][context->returnVar->getText()]);
            }
            else if (context->typeFunction->getText() == "caracter"){
                valueReturn = Builder->CreateLoad(llvm::Type::getInt8Ty(*Conteiner),SymbolTable[var][context->returnVar->getText()]);
            }
            else if (context->typeFunction->getText() == "bool"){
                valueReturn = Builder->CreateLoad(llvm::Type::getInt1Ty(*Conteiner),SymbolTable[var][context->returnVar->getText()]);
            }
            else {
                errorResponse("Error. Valor de retorno não reconhecido!");
                exit(1);
            } 
        } 
        else if (context->typeFunction->getText() == "nada"){
            cout << "É VOID " << endl;
            valueReturn;
        }
        else if (context->term() && !context->returnVar) {
            valueReturn = any_cast<llvm::Value*>(visitTerm(context->term()));
        }
        else {
            errorResponse("Error. Valor de retorno não reconhecido!");
            exit(1);
        }

        //Adiciona retorno da função
        if (context->typeFunction->getText() == "nada"){
            Builder->CreateRetVoid();
        }
        else{
            Builder->CreateRet(valueReturn);
        }
    
        //Volta a função anterior e ao basic block antigo
        CurrentFunction = mainFunction;
        CurrentBasicBlock = currentBlock;
        Builder->SetInsertPoint(CurrentBasicBlock);
        return valueReturn;
    };

    virtual std::any visitFunctionCall(NiloScriptParser::FunctionCallContext *context) override {
        cout << "VISITOU A CHAMADA AO FUNCTION " << context->getText() << endl;
        string var = context->functionName->getText();
        llvm::Function* functionCall =Executable->getFunction(var);   
        std::vector<llvm::Value*> objectParams; 

        
        //Faz store nos endereços que já aloquei
        for (int i = 1; i < context->VAR().size(); i++){
            string arg = context->VAR()[i]->getText();
            
            //Faz load
            string nameCurrentFunction = CurrentFunction->getName().str();
            llvm::AllocaInst* varAlloca = SymbolTable[nameCurrentFunction][arg];
            llvm::Type* varType = varAlloca->getAllocatedType();
            llvm::Value* loadedValue = Builder->CreateLoad(varType, varAlloca);
            
            //Salva parametro da função
            objectParams.push_back(loadedValue);
        }

        cout << "VALORES ARMAZENADOS FUNCTION " << argsFunctions[var].size() << " " << objectParams.size() << endl;
        if (argsFunctions[var].size() != objectParams.size()){
            errorResponse("Error. O número de argumentos não correspondem a quatidade de parametros necessários na função!");
            exit(1);
        }

        cout << "SALVOU TUDO " << context->getText() << endl;

        llvm::Value* store = Builder->CreateCall(functionCall, objectParams);

        return store;
    };

    virtual std::any visitList(NiloScriptParser::ListContext *context) override {
        cout << "CHEGOU NA VISITA DA LISTA " << context->getText() << " " << context->RETURN_TYPE()->getText() <<endl;

        int nElements = std::stoi(context->nElements->getText());
        string var = context->VAR()->getText();
        llvm::Type* elementsType;
        int qElementosInput = 0;

        if (context->RETURN_TYPE()->getText() == "inteiro"){
            elementsType = llvm::Type::getInt32Ty(*Conteiner);

            if (context->INT().size() > 0 && nElements > 0){
                qElementosInput = context->INT().size() - 1;
            }
        }
        else if (context->RETURN_TYPE()->getText() == "flutuante"){
            elementsType = llvm::Type::getFloatTy(*Conteiner);

            if (context->FLOAT().size() > 0 && nElements > 0){
                qElementosInput = context->FLOAT().size();
            }

        }
        else if (context->RETURN_TYPE()->getText() == "bool"){
            elementsType = llvm::Type::getInt1Ty(*Conteiner);

            if (context->BOOL().size() > 0 && nElements > 0){
                qElementosInput = context->BOOL().size();
            }
        }
        else {
            errorResponse("Error. Tipo da lista não reconhecido!");
            exit(1);
        }

        //Alloca o array 
        llvm::AllocaInst* alloca = Builder->CreateAlloca(llvm::ArrayType::get(elementsType, nElements),nullptr,var);

        //Armazena na tabela de simbolos
        string nameCurrentFunction = CurrentFunction->getName().str();
        SymbolTable[nameCurrentFunction][var] = alloca;

        
        //Store dos elementos dpo array no espaço alocado
        //GetElementPtr (GEP) calcula o endereço de um elemento.
        llvm::Value *addressArray;
        llvm::Value* store;
        llvm::Value* index;
        llvm::Value* value;

        index = Builder->getInt32(0);
        if (context->RETURN_TYPE()->getText() == "inteiro"){
            value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), std::stoi(context->valuesList->getText()));
        }
        else if (context->RETURN_TYPE()->getText() == "flutuante"){
            value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*Conteiner),  std::stof(context->valuesList->getText()));
        }
        else if (context->RETURN_TYPE()->getText() == "bool"){
            if (context->BOOL()[0]->getText() == "verdadeiro"){
                value = llvm::ConstantInt::get(llvm::Type::getInt1Ty(*Conteiner), 1);
            }
            else if (context->BOOL()[0]->getText() == "falso"){
                value = llvm::ConstantInt::get(llvm::Type::getInt1Ty(*Conteiner), 0);
            }
            else{
                errorResponse("Error. Booleano errado!");
                exit(1);
            }
        }
        else {
            errorResponse("Error. Tipo da lista não reconhecido!");
            exit(1);
        }
        addressArray = Builder->CreateGEP(llvm::ArrayType::get(elementsType, nElements), alloca, {llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 0),index}, "endereco");
        store = Builder->CreateStore(value, addressArray);

        for (int i = 1; i < nElements; i++){
            index = Builder->getInt32(i);
            if (context->RETURN_TYPE()->getText() == "inteiro"){
                value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), std::stoi(context->INT()[i -1]->getText()));
            }
            else if (context->RETURN_TYPE()->getText() == "flutuante"){
                value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*Conteiner), context->FLOAT()[i - 1]->getText());
            }
            else if (context->RETURN_TYPE()->getText() == "bool"){
                if (context->BOOL()[i - 1]->getText() == "verdadeiro"){
                    value = llvm::ConstantInt::get(llvm::Type::getInt1Ty(*Conteiner), 1);
                }
                else if (context->BOOL()[i - 1]->getText() == "falso"){
                    value = llvm::ConstantInt::get(llvm::Type::getInt1Ty(*Conteiner), 0);
                }
                else{
                    errorResponse("Error. Booleano errado!");
                    exit(1);
                }
            }
            else {
                errorResponse("Error. Tipo da lista não reconhecido!");
                exit(1);
            }

            //Confere se a quantidade de elementos colocada é igual a declarada
            cout << "N ELEMNTOS " << qElementosInput << " " << nElements << endl;
            if (qElementosInput != nElements){
                errorResponse("Error. A quatidade de elementos e o tamanho declarado na lista não correspondem ou o tipo dos elementos não corresponde ao tipo da variável declarada!!");
                exit(1);
            }

            addressArray = Builder->CreateGEP(llvm::ArrayType::get(elementsType, nElements), alloca, {llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 0),index}, "endereco");
            store = Builder->CreateStore(value, addressArray);
        }
        return store;
    };

    virtual std::any visitAcessList(NiloScriptParser::AcessListContext *context) override {
        cout << "ACESS LIST " << context->getText() <<endl;
        string nameCurrentFunction = CurrentFunction->getName().str();
        llvm::AllocaInst* varInTable = SymbolTable[nameCurrentFunction][context->VAR()->getText()];
        llvm::Type* typeLoadTable = varInTable->getAllocatedType();
        auto* arrayType = llvm::cast<llvm::ArrayType>(typeLoadTable);
        llvm::Type* elementsType;    

        // Avalia se o indicie não está maior nem menor
        if (std::stoi(context->INT()->getText()) >= arrayType->getNumElements()){
            errorResponse("Error. A posição fornecida ultrapassa a quatidade de elemento do array!");
            exit(1);
        }
        if (std::stoi(context->INT()->getText()) < 0){
            errorResponse("Error. A posição deve ser números positivos dentro do limite da lista!");
            exit(1);
        }
        
        if (arrayType->getElementType()->isIntegerTy(32)){
            elementsType = llvm::Type::getInt32Ty(*Conteiner);
        }
        else if (arrayType->getElementType()->isFloatTy()){
            elementsType = llvm::Type::getFloatTy(*Conteiner);
        }
        else if (arrayType->getElementType()->isIntegerTy(1)){
            elementsType = llvm::Type::getInt1Ty(*Conteiner);
        }
        else {
            errorResponse("Error. Tipo não da lista reconhecido!");
            exit(1);
        }
        
        // Acessar o endereço na posição correta do array
        llvm::Value* position = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), std::stoi(context->INT()->getText()));

        llvm::Value* gep = Builder->CreateGEP(arrayType, varInTable,{Builder->getInt32(0), position});

        // Load do array[posição]
        llvm::Value* element = Builder->CreateLoad(elementsType, gep);

        return element;
    };
};