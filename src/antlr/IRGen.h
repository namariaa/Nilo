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

using namespace std;

unique_ptr<llvm::LLVMContext> Conteiner;
unique_ptr<llvm::Module> Executable;
unique_ptr<llvm::IRBuilder<llvm::NoFolder>> Builder;
map<string,llvm::AllocaInst*> SymbolTable;
string lastVar;


class IRGen : public NiloScriptVisitor{
    private:
        llvm::Function *MainFunction;
        llvm::BasicBlock *CurrentBasicBlock;
        llvm::Value* dPrint;
        llvm::Value* fPrint;
        llvm::Value* cPrint;

    public:
        IRGen(NiloScriptParser::ProgramContext* tree){
            Conteiner = make_unique<llvm::LLVMContext>();
            Executable = make_unique<llvm::Module>("NiloScriptModule", *Conteiner);
            Builder = make_unique<llvm::IRBuilder<llvm::NoFolder>>(*Conteiner);

            //Adiciona informações de configurações para executável
            Executable->setDataLayout(llvm::DataLayout("e-m:e-i64:64-f80:128-n8:16:32:64-S128"));
            Executable->setModuleIdentifier("Executável");
            Executable->setTargetTriple("x86_64-unknown-linux-gnu");
            
            //Cria função main
            llvm::FunctionType *MAINTYPE = llvm::FunctionType::get(llvm::Type::getInt32Ty(*Conteiner), false);
            MainFunction = llvm::Function::Create(MAINTYPE, llvm::Function::ExternalLinkage, "main", Executable.get());
            CurrentBasicBlock = llvm::BasicBlock::Create(*Conteiner, "entrada", MainFunction);
            Builder->SetInsertPoint(CurrentBasicBlock);

            //Cria Função Print
            llvm::FunctionCallee Print = Executable->getOrInsertFunction("printf",
            llvm::FunctionType::get(llvm::IntegerType::getInt32Ty(*Conteiner), {llvm::PointerType::get(llvm::Type::getInt8Ty(*Conteiner), 0)}, true));
            
            //Cria Função Input
            llvm::FunctionCallee Input = Executable->getOrInsertFunction("scanf",
            llvm::FunctionType::get(llvm::IntegerType::getInt32Ty(*Conteiner), {llvm::PointerType::get(llvm::Type::getInt8Ty(*Conteiner), 0)}, true));

            // Tipos do print para reutilizar e não criar de novo
            dPrint = Builder->CreateGlobalStringPtr("%d", "dPrint");
            fPrint = Builder->CreateGlobalStringPtr("%f", "fPrint");
            cPrint = Builder->CreateGlobalStringPtr("%c", "cPrint");

            //Inicia visitação da árvore para gerar executável 
            visitProgram(tree);
            
            //Cria o retorno do IR
            Builder->CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner),0));

            //Print the executable file 
            llvm::verifyFunction(*MainFunction);
            Executable->print(llvm::outs(), nullptr);
        }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        for(NiloScriptParser::StmtContext *stm : context->stmt()){
            visitStmt(stm);
            cout << "OUT OF PROGRAM "  << context->children.size()<< endl;
        }
        cout << "SAIU" << endl;
        return any{};
    };

    virtual std::any visitStmt(NiloScriptParser::StmtContext *context) override {
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
            cerr << "Error. Expressão não reconhecida!" << endl;
            exit(1);
        }
    };

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {
        string var = context->VAR()->getText();
        lastVar = var;
        llvm::Value *value;
        if (context->term() != nullptr) value = any_cast<llvm::Value *>(visitTerm(context->term()));
        else if (context->input() != nullptr) value = any_cast<llvm::Value *>(visitInput(context->input()));
        else if (context->acessList() != nullptr) value = any_cast<llvm::Value *>(visitAcessList(context->acessList()));
        else if (context->functionCall() != nullptr) value = any_cast<llvm::Value *>(visitFunctionCall(context->functionCall()));
        else {
            cerr << "Error. Não foi possível associar a variável com essa expressão!" << endl;
            exit(1);
        }

        //Usando a função alloca para alocar um espaço de memória dependendo do tipo para salvarmos na nossa tabela.
        llvm::AllocaInst* alloca= nullptr;

        cout << "RETURN TYPE " << context->RETURN_TYPE()->getText() << endl;
        
        if (context->RETURN_TYPE()->getText() == "inteiro"){
            alloca = Builder->CreateAlloca(llvm::Type::getInt32Ty(*Conteiner),nullptr,var);
        }
        else if (context->RETURN_TYPE()->getText() == "flutuante"){
            alloca = Builder->CreateAlloca(llvm::Type::getFloatTy(*Conteiner),nullptr,var);
        }
        else if (context->RETURN_TYPE()->getText() == "caracter"){
            alloca = Builder->CreateAlloca(llvm::Type::getInt8Ty(*Conteiner),nullptr,var);
        }
        else if (context->RETURN_TYPE()->getText() == "bool"){
            alloca = Builder->CreateAlloca(llvm::Type::getInt1Ty(*Conteiner),nullptr,var);
        }
        else {
            cerr << "Error. Tipo não reconhecido!" << endl;
            exit(1);
        }

        //Guardando na tabela para ser útil em momentos como input
        SymbolTable[var] = alloca;

        //Armazenar variável no espaço que alocamos
        return Builder->CreateStore(value,alloca);
    };

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        string var = context->VAR()->getText();
        lastVar = var;
        llvm::Value *value;
        if (context->term() != nullptr) value = any_cast<llvm::Value *>(visitTerm(context->term()));
        else if (context->input() != nullptr) value = any_cast<llvm::Value *>(visitInput(context->input()));
        else if (context->acessList() != nullptr) value = any_cast<llvm::Value *>(visitAcessList(context->acessList()));
        else if (context->functionCall() != nullptr) value = any_cast<llvm::Value *>(visitFunctionCall(context->functionCall()));
        else {
            cerr << "Error. Não foi possível associar a variável com essa expressão!" << endl;
            exit(1);
        }

        llvm::AllocaInst* varInTable = SymbolTable[var];
        llvm::Type* typeLoadTable = varInTable->getAllocatedType();
        llvm::Type* newType = value->getType();
        llvm::Value* storeValue;

        if (typeLoadTable == newType){
            storeValue = Builder->CreateStore(value,varInTable);
        }
        else {
            cerr << "Error. Não foi possível atribuir variavéis em que o tipo é diferente do novo valor a ser atribuido!" << endl;
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
                cerr << "Error. Operador não reconhecido!" << endl;
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
                cerr << "Error. Operador não reconhecido!" << endl;
                exit(1);
            }
            return result;
        }
    };

    virtual std::any visitExpo(NiloScriptParser::ExpoContext *context) override {
        if (context->opPar() && !context->expo()){
            cout << "EXPO 2 " << context->getText() << endl;
            return visitOpPar(context->opPar());
        }
        else{
            int v1, v2;
            llvm::Value* lhs = any_cast<llvm::Value *>(visitExpo(context->expo()));
            llvm::Value* rhs = any_cast<llvm::Value *>(visitOpPar(context->opPar()));

            auto *constExp = llvm::dyn_cast<llvm::ConstantInt>(rhs); 
            int value = constExp->getSExtValue(); 

            llvm::Value *result = lhs; 
            if (value > 1){
                for (int i = 0; i < value; i++){
                    result = Builder->CreateMul(std::any_cast<llvm::Value *>(result), std::any_cast<llvm::Value *>(lhs), "expotmp");
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
            cerr << "Error. Os parenteses não estão corretos!" << endl;
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
            llvm::Value* variavel = Builder->CreateLoad(llvm::Type::getInt32Ty(*Conteiner), SymbolTable[context->VAR()->getText()], "var");
            return variavel;
        }
        else if (context->STRING()){
            string text = context->STRING()->getText();
            text = text.substr(1, text.size() - 2);
            llvm::Value *valueText = Builder->CreateGlobalStringPtr(text);
            return valueText; 
        }
        else if (context->BOOL()){
            if (context->BOOL()->getText() == "verdadeiro"){
                llvm::Value* trueValue = llvm::ConstantInt::get(llvm::Type::getInt1Ty(*Conteiner), 1);
                return trueValue;
            }
            else if (context->BOOL()->getText() == "falso"){
                llvm::Value* falseValue = llvm::ConstantInt::get(llvm::Type::getInt1Ty(*Conteiner), 0);
                return falseValue;
            }
            else{
                cerr << "Error. Não foi possível reconhecer o booleano!" << endl;
            return nullptr;
            }
        }
        else if (context->FLOAT()){
            cout << "É FLOATTTTTTT" << endl;
            llvm::Value* floatValue = llvm::ConstantFP::get(llvm::Type::getFloatTy(*Conteiner), context->FLOAT()->getText());
            return floatValue;
        }
        else {
            cerr << "Error. Não foi possível reconhecer uma instrução!" << endl;
            return nullptr;
        }
    };

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {
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

            if (context->SHOW()->getText() == "mostrarInteiro"){
                typePrint = dPrint;
            }
            else if (context->SHOW()->getText() == "mostrarFlutuante"){
                typePrint = fPrint;
            }
            else if (context->SHOW()->getText() == "mostrarCaracteres"){
                typePrint = cPrint;
            }
            else if (context->SHOW()->getText() == "mostrarBool"){
                typePrint = dPrint;
            }
            else {
                cerr << "Error. Função mostrar não reconhecida!" << endl;
                exit(1);
            }
            return Builder->CreateCall(printf, { typePrint, value });
        }
        else{
            cerr << "Error. Você precisa colocar algo para mostrar" << endl;
            exit(1);
            return nullptr;
        }
    };

    virtual std::any visitInput(NiloScriptParser::InputContext *context) override {
        cout <<"INPUT " << context->getText() <<endl;
        // Pegando a função que criei lá no construtor 
        llvm::Function *scanf =Executable->getFunction("scanf");

        // Criando os % necessários do C para entender o tipo
        llvm::Value *typeInput;

        if (context->READ()->getText() == "pegaInteiro"){
            typeInput = dPrint;
        }
        else if (context->READ()->getText() == "pegaFlutuante"){
            typeInput = fPrint;
        }
        else if (context->READ()->getText() == "pegaCaracteres"){
            typeInput = dPrint;
        }
        else {
            cerr << "Error. Função de pegar não reconhecida!" << endl;
            exit(1);
        }

        //Alocar espaço de memória para guardar variavel
        llvm::AllocaInst* alloca = Builder->CreateAlloca(llvm::Type::getInt32Ty(*Conteiner),nullptr,lastVar);
        SymbolTable[lastVar] = alloca;
        
        //Faz chamada de função
        llvm::Value* callScanf = Builder->CreateCall(scanf, { typeInput, SymbolTable[lastVar] });
    
        return callScanf;
    }
      

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        llvm::Value* lhs = any_cast<llvm::Value*>(visitTerm(context->term()[0]));
        llvm::Value* rhs = any_cast<llvm::Value*>(visitTerm(context->term()[1]));
        string oper = context->OPERATOR()->getText();
        llvm::Value* operation;

        if (oper ==  "=="){
            operation = Builder->CreateICmpEQ(lhs, rhs, oper);
        }
        else if (oper == "!="){
            operation = Builder->CreateICmpNE(lhs, rhs, oper);
        }
        else if (oper == ">"){
            operation = Builder->CreateICmpUGT(lhs, rhs, oper);
        }
        else if (oper == "<"){
            operation = Builder->CreateICmpULT(lhs, rhs, oper);
        }
        else if (oper == ">="){
            operation = Builder->CreateICmpUGE(lhs, rhs, oper);
        }
        else if (oper == "<="){
            operation = Builder->CreateICmpULE(lhs, rhs, oper);
        }
        else{
            cerr << "Error. Operador de comparação não encontrado!" << endl;
            exit(1);
        }

        //Crio o bloco de condicional e vou inserindo o código que está dentro dele
        llvm::BasicBlock* blockCondicional = llvm::BasicBlock::Create(*Conteiner, "blocoCondicional", MainFunction); 
        Builder->SetInsertPoint(blockCondicional);
        for (NiloScriptParser::StmtContext *stm : context->thenBlock) {
            visitStmt(stm);
        }
        llvm::Value* jump;
        llvm::BasicBlock* block2 = llvm::BasicBlock::Create(*Conteiner, "Entrada2", MainFunction); 
        jump = Builder->CreateBr(block2);

        //Criar o bloco do senão caso haja
        llvm::BasicBlock* blockElseCondicional;
        if (context->ELSE()){
            blockElseCondicional = llvm::BasicBlock::Create(*Conteiner, "blocoSenaoCondicional", MainFunction); 
            Builder->SetInsertPoint(blockElseCondicional);
            for (NiloScriptParser::StmtContext *stm : context->elseStmt){
                visitStmt(stm);
            }
            jump = Builder->CreateBr(block2);
        }

        //No bloco que eu estava antes vou criar um salto condicional 
        Builder->SetInsertPoint(CurrentBasicBlock);
        if (context->ELSE()){
            jump = Builder->CreateCondBr(operation, blockCondicional, blockElseCondicional);
        }
        else{
            jump = Builder->CreateCondBr(operation, blockCondicional, block2);
        }
        
        CurrentBasicBlock = block2;
        Builder->SetInsertPoint(CurrentBasicBlock);

        return lhs;
    };

    virtual std::any visitLoop(NiloScriptParser::LoopContext *context) override {
        cout << "CHEGOU NO LOOP " << context->getText()  << endl;
        //Cria blocos
        llvm::BasicBlock* blockCondicionalLoop = llvm::BasicBlock::Create(*Conteiner, "blocoCondicionalLoop", MainFunction); 
        llvm::BasicBlock* blockLoopBody = llvm::BasicBlock::Create(*Conteiner, "blocoCorpoLoop", MainFunction); 
        llvm::BasicBlock* block2 = llvm::BasicBlock::Create(*Conteiner, "Entrada3", MainFunction);

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
            operation = Builder->CreateICmpEQ(lhs, rhs, oper);
        }
        else if (oper == "!="){
            operation = Builder->CreateICmpNE(lhs, rhs, oper);
        }
        else if (oper == ">"){
            operation = Builder->CreateICmpUGT(lhs, rhs, oper);
        }
        else if (oper == "<"){
            operation = Builder->CreateICmpULT(lhs, rhs, oper);
        }
        else if (oper == ">="){
            operation = Builder->CreateICmpUGE(lhs, rhs, oper);
        }
        else if (oper == "<="){
            operation = Builder->CreateICmpULE(lhs, rhs, oper);
        }
        else{
            cerr << "Error. Operador de comparação não encontrado!" << endl;
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
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitFunctionCall(NiloScriptParser::FunctionCallContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitList(NiloScriptParser::ListContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitAcessList(NiloScriptParser::AcessListContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };
};