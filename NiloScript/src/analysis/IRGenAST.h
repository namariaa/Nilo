
#include "iostream"
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
#include <map>
#include "../antlr/NiloScriptParser.h"
#include "./symbolTable.h"

using namespace std;

unique_ptr<llvm::LLVMContext> Conteiner = make_unique<llvm::LLVMContext>();
unique_ptr<llvm::Module> Executable = make_unique<llvm::Module>("NiloScriptModule", *Conteiner);
unique_ptr<llvm::IRBuilder<llvm::ConstantFolder>> Builder = make_unique<llvm::IRBuilder<llvm::ConstantFolder>>(*Conteiner);
map<string, vector<string>> argsFunctions;
llvm::BasicBlock *CurrentBasicBlock;
llvm::Function *CurrentFunction;
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

void mountProgram(Program* context);
llvm::Value* mountStmt(Statstatement* context);
llvm::Value* mountAssignment(Assignment* context);
llvm::Value* mountExpression(AssigExpression* context);
llvm::Value* mountTerm(Operation* context);
llvm::Value* mountTypeSpecifier(Expression* context);
llvm::Value* mountPrint(Print* context);
llvm::Value* mountInput(Input* context);
llvm::Value* mountInCase(InCase* context);
llvm::Value* mountLoop(Loop* context);
llvm::Value* mountFunction(Function* context);
llvm::Value* mountFunctionCall(FunctionCall* context);
llvm::Value* mountList(List* context);
llvm::Value* mountAcessList(AcessList* context);

llvm::Type* returnType(string type){
    if (type == "inteiro"){
        return llvm::Type::getInt32Ty(*Conteiner);
    }
    else if (type == "flutuante"){
        return llvm::Type::getFloatTy(*Conteiner);
    }
    else if (type == "caracter"){
        return  llvm::Type::getInt8Ty(*Conteiner);
    }
    else if (type == "bool"){
       return llvm::Type::getInt1Ty(*Conteiner);
    }
    return nullptr;
}

void IRGenAST(unique_ptr<Program> tree) {
    cout << "CHEGOU NO IR GEN" << endl;
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
    
    //Inicia mountação da árvore para gerar executável 
    mountProgram(tree.get());
    
    //Cria o retorno do IR
    Builder->CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner),0));

    //Print the executable file 
    llvm::verifyFunction(*CurrentFunction);
    Executable->print(llvm::outs(), nullptr);

    //Cria o arquivo .ll
    error_code errorCode;
    llvm::raw_fd_ostream out("NiloScript/executavel.ll", errorCode);
    Executable->print(out, nullptr);
    out.flush();
} 

void mountProgram(Program* context) {
    for(unique_ptr<Statstatement> &stm : context->stmts) {
        mountStmt(stm.get());
    }
}

llvm::Value* mountStmt(Statstatement* context) {
    string stmName = context->stmtName;
    Expression* stm = context->stmt.get();
    cout << "STMT " << context->stmtName << endl;
    
    if (stmName == "print"){
        Print* stm = dynamic_cast<Print*>(context->stmt.get());
        return mountPrint(stm);
    }
    else if (stmName == "assignment"){
        Assignment* stm = dynamic_cast<Assignment*>(context->stmt.get());
        return mountAssignment(stm);
    }
    else if (stmName == "loop"){
        Loop* stm = dynamic_cast<Loop*>(context->stmt.get());
        return mountLoop(stm);
    }
    else if (stmName == "inCase"){
        InCase* stm = dynamic_cast<InCase*>(context->stmt.get());
        return mountInCase(stm);
    }
    else if (stmName == "function"){
        Function* stm = dynamic_cast<Function*>(context->stmt.get());
        return mountFunction(stm);
    }
    else if (stmName == "functionCall"){
        FunctionCall* stm = dynamic_cast<FunctionCall*>(context->stmt.get());
        return mountFunctionCall(stm);
    }
    else if (stmName == "list"){
        List* stm = dynamic_cast<List*>(context->stmt.get());
        return mountList(stm);
    }
    else if (stmName == "expression"){
        AssigExpression* stm = dynamic_cast<AssigExpression*>(context->stmt.get());
        return mountExpression(stm);
    }
    else if (stm == nullptr){
        return nullptr;
    }
    return nullptr;
}

llvm::Value* mountAssignment(Assignment* context) {
    string var = context->var;
    lastVar = var;

    //Usando a função alloca para alocar um espaço de memória dependendo do tipo para salvarmos na nossa tabela.
    llvm::AllocaInst* alloca= nullptr;
    llvm::Type* type;
    cout << "ASSI" << context->type << " " << var<< endl; 

    if (context->type == "inteiro"){
        alloca = Builder->CreateAlloca(llvm::Type::getInt32Ty(*Conteiner),nullptr,var);
        type = llvm::Type::getInt32Ty(*Conteiner);
    }
    else if (context->type == "flutuante"){
        alloca = Builder->CreateAlloca(llvm::Type::getFloatTy(*Conteiner),nullptr,var);
        type = llvm::Type::getFloatTy(*Conteiner);
    }
    else if (context->type == "caracter"){
        CurrentVar = var;
        type = llvm::Type::getInt8Ty(*Conteiner);
    }
    else if (context->type == "bool"){
        alloca = Builder->CreateAlloca(llvm::Type::getInt1Ty(*Conteiner),nullptr,var);
        type = llvm::Type::getInt1Ty(*Conteiner);
    }
    
    //Guardando na tabela para ser útil em momentos como input
    if (context->type != "caracter"){
        SymbolTable[nameCurrentFunction][var].value = alloca;
    }
    CurrentVar = var;
    
    //Pega o value
    llvm::Value *value;
    string valueName = context->valueName;
    cout << "AQUI P " << valueName << endl;
    if (valueName == "operation") {
        Operation* v = dynamic_cast<Operation*>(context->value.get());
        value = dynamic_cast<llvm::Value *>(mountTerm(v));
    }
    else if (valueName == "input") {
        Input* v = dynamic_cast<Input*>(context->value.get());
        value = dynamic_cast<llvm::Value *>(mountInput(v));
    }
    else if (valueName == "acessList") {
        AcessList* v = dynamic_cast<AcessList*>(any_cast<Expression*>(context->value.get()));
        value = dynamic_cast<llvm::Value *>(mountAcessList(v));
    }
    else if (valueName == "functionCall") {
        FunctionCall* v = dynamic_cast<FunctionCall*>(context->value.get());
        value = dynamic_cast<llvm::Value *>(mountFunctionCall(v));
    }
    
    //Armazenar variável no espaço que alocamos
    llvm::Value* store;
    if (valueName != "input" && context->type != "caracter"){
        store = Builder->CreateStore(value,alloca);
    }
    else{ 
        store = value;
    }
    return store;
}

llvm::Value* mountExpression(AssigExpression* context) {
    string var = context->var;

    lastVar = var;
    llvm::Value *value;
    string valueName = context->valueName;
    if (valueName == "operation") {
        Operation* v = dynamic_cast<Operation*>(context->value.get());
        value = dynamic_cast<llvm::Value *>(mountTerm(v));
    }
    else if (valueName == "input") {
        Input* v = dynamic_cast<Input*>(context->value.get());
        value = dynamic_cast<llvm::Value *>(mountInput(v));
    }
    else if (valueName == "accessList") {
        AcessList* v = dynamic_cast<AcessList*>(context->value.get());
        value = dynamic_cast<llvm::Value *>(mountAcessList(v));
    }
    else if (valueName == "functionCall") {
        FunctionCall* v = dynamic_cast<FunctionCall*>(context->value.get());
        value = dynamic_cast<llvm::Value *>(mountFunctionCall(v));
    }

    string typeInTable = SymbolTable[nameCurrentFunction][var].type;
    llvm::Type* typeLoadTable = returnType(typeInTable);
    llvm::Type* newType = value->getType();
    llvm::Value* storeValue;

    if (typeLoadTable == newType){
        storeValue = Builder->CreateStore(value, SymbolTable[nameCurrentFunction][var].value);
    }

    //Armazenar variável no espaço que alocamos
    return storeValue;
}

llvm::Value* mountTerm(Operation* context) {
    if (!context) {
        return nullptr;
    }

    Operation* vl = dynamic_cast<Operation*>(context->LHS.get());
    Operation* vr = dynamic_cast<Operation*>(context->RHS.get());
    llvm::Value* lhs;
    llvm::Value* rhs;

    if (vl) {
        lhs = mountTerm(vl);
    }
    else{
        IntType* inteiro = dynamic_cast<IntType*>(context->LHS.get());
        VarType* variavel = dynamic_cast<VarType*>(context->LHS.get());
        StringType* caracter = dynamic_cast<StringType*>(context->LHS.get());
        FloatType* flutuante = dynamic_cast<FloatType*>(context->LHS.get());
        BoolType* boleano = dynamic_cast<BoolType*>(context->LHS.get());
        if (inteiro) lhs = mountTypeSpecifier(inteiro);
        else if (variavel) lhs = mountTypeSpecifier(variavel);
        else if (caracter) lhs = mountTypeSpecifier(caracter);
        else if (flutuante) lhs =  mountTypeSpecifier(flutuante);
        else if (boleano) lhs = mountTypeSpecifier(boleano);
    } 
    if (vr){
        rhs = mountTerm(vr);
    }
    else {
        IntType* inteiro = dynamic_cast<IntType*>(context->RHS.get());
        VarType* variavel = dynamic_cast<VarType*>(context->RHS.get());
        StringType* caracter = dynamic_cast<StringType*>(context->RHS.get());
        FloatType* flutuante = dynamic_cast<FloatType*>(context->RHS.get());
        BoolType* boleano = dynamic_cast<BoolType*>(context->RHS.get());
        if (inteiro) rhs = mountTypeSpecifier(inteiro);
        else if (variavel) rhs = mountTypeSpecifier(variavel);
        else if (caracter) rhs = mountTypeSpecifier(caracter);
        else if (flutuante) rhs =  mountTypeSpecifier(flutuante);
        else if (boleano) rhs =  mountTypeSpecifier(boleano);
    }
   
    string op = context->operatorSign;
    llvm::Value *result = nullptr;
    if (op == "+"){
        if (lhs->getType()->isIntegerTy(32)){
            result = Builder->CreateAdd(lhs, rhs, "addftmp");
        }
        else if (lhs->getType()->isFloatingPointTy()){
            result = Builder->CreateFAdd(lhs, rhs, "addftmp");
        }
    }
    else if (op == "-"){
        lhs->getType()->print(llvm::errs());
        llvm::errs() << "\n";
        if (lhs->getType()->isIntegerTy(32)){
            result = Builder->CreateSub(lhs, rhs, "subtmp");
        }
        else if (lhs->getType()->isFloatingPointTy()){
            result = Builder->CreateFSub(lhs, rhs, "subtmp");
        }
    }
    else if (op == "*"){
        if (lhs->getType()->isIntegerTy(32)){
            result = Builder->CreateMul(lhs, dynamic_cast<llvm::Value *>(rhs), "multmp");
        }
        else if (lhs->getType()->isFloatTy()){
            result = Builder->CreateFMul(lhs, dynamic_cast<llvm::Value *>(rhs), "multmp");
        }
    }
    else if (op == "/"){
        if (lhs->getType()->isIntegerTy(32)){
            result = Builder->CreateSDiv(dynamic_cast<llvm::Value *>(lhs), dynamic_cast<llvm::Value *>(rhs), "divtmp");
        }
        else if (lhs->getType()->isFloatTy()){
            result = Builder->CreateFDiv(dynamic_cast<llvm::Value *>(lhs), dynamic_cast<llvm::Value *>(rhs), "divtmp");
        }
    }
    else if (op == "%"){
        if (lhs->getType()->isIntegerTy(32)){
            result = Builder->CreateSRem(dynamic_cast<llvm::Value *>(lhs), dynamic_cast<llvm::Value *>(rhs), "modtmp");
        }
        else if (lhs->getType()->isFloatTy()){
            result = Builder->CreateFRem(dynamic_cast<llvm::Value *>(lhs), dynamic_cast<llvm::Value *>(rhs), "modtmp");
        }
    }
    else if (op == "**"){
        auto *constExp = llvm::dyn_cast<llvm::ConstantInt>(lhs); 
        int value = constExp->getSExtValue(); 
        
        result = rhs; 
        if (value > 1){
            for (int i = 1; i < value; i++){
                lhs->getType()->print(llvm::errs());
                if (lhs->getType()->isIntegerTy(32)){
                    result = Builder->CreateMul(result, rhs, "expotmp");
                }
                else if (lhs->getType()->isFloatTy()){
                    result = Builder->CreateFMul(result, rhs, "expotmp");
                }
            }
        }
        else if (value == 0){
            result = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 1);
        }
        cout << "AQUI ENTROU " << result << " " << op << endl;
    }
    cout << "AQUI ENTROU 2 " << lhs << " " << rhs << " " << op << " " <<  result << endl;
    if (lhs && rhs && op == ""){ //Casos de parentese
        return lhs;
    }
    if (!result) {
        cout << "ERRO: operador desconhecido em TERM: " << op  << endl;
    }
    return result;
}

llvm::Value* mountTypeSpecifier(Expression* context) {
    cout << "TS " << context << endl;
    // dynamic retorna um objeto se realmente for do tipo daquela classe mas retorna null se não for
    IntType* inteiro = dynamic_cast<IntType*>(context);
    VarType* variavel = dynamic_cast<VarType*>(context);
    StringType* caracter = dynamic_cast<StringType*>(context);
    FloatType* flutuante = dynamic_cast<FloatType*>(context);
    BoolType* boleano = dynamic_cast<BoolType*>(context);

    cout << "TS " << inteiro << endl;

    if (inteiro){
        cout << "INT " << endl;
        int v = inteiro->value;
        llvm::Value* value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v);
        return value;
    }
    else if (variavel){
        string var = variavel->value;
        llvm::AllocaInst* varInTable = SymbolTable[nameCurrentFunction][var].value;
        llvm::Type* type = returnType(variavel->type);
        
        //Para casos especificos em que a variavel é uma string
        llvm::Value* variavel;
        if (type->isIntegerTy(8)){
            cout << "É STRING "  << endl;
            llvm::Value* position = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 0);
            llvm::Value* gep = Builder->CreateGEP(llvm::ArrayType::get(llvm::Type::getInt8Ty(*Conteiner), CurrentVarSize[var]), varInTable,{Builder->getInt32(0), position});
            variavel = gep;
        }
        else{
            variavel = Builder->CreateLoad(type, varInTable, "var");
        }
        return variavel;
    }
    else if (caracter){
        string text = caracter->value;
        text = text.substr(1, text.size() - 2);
        text.push_back('\0'); 
        CurrentVarSize[CurrentVar] = text.size();
        
        //Alloca o array 
        llvm::AllocaInst* alloca = Builder->CreateAlloca(llvm::ArrayType::get(llvm::Type::getInt8Ty(*Conteiner), text.size()),nullptr,CurrentVar); 
        string typeInTable = SymbolTable[nameCurrentFunction][CurrentVar].type;
        SymbolTable[nameCurrentFunction][CurrentVar].value = alloca;
        
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
    else if (boleano){
        bool v = boleano->value;
        if (v){
            llvm::Value* trueValue = llvm::ConstantInt::getTrue(*Conteiner);
            return trueValue;
        }
        else if (!v){
            llvm::Value* falseValue = llvm::ConstantInt::getFalse(*Conteiner);
            return falseValue;
        }
    }
    else if (flutuante){
        cout << "É FLOATTTTTTT" << endl;
        float v = flutuante->value;
        llvm::Value* floatValue = llvm::ConstantFP::get(llvm::Type::getFloatTy(*Conteiner), v);
        return floatValue;
    }
    return nullptr;
}

llvm::Value* mountPrint(Print* context) {
    //Para não associar a string a uma variavel aleatória
    CurrentVar = "";
    string valueName = context->valueName;
    string typeMostrar = context->type;

    llvm::Value* value = nullptr;
    if (valueName == "operation"){
        Operation* vo = dynamic_cast<Operation*>(context->arg.get());
        if (vo) {
            value = dynamic_cast<llvm::Value*>(mountTerm(vo));
        } 
        else {
            value = dynamic_cast<llvm::Value*>(mountTypeSpecifier(context->arg.get()));
        }
    }
    else if (valueName == "acessList"){
        AcessList* v = dynamic_cast<AcessList*>(context->arg.get());
        value = dynamic_cast<llvm::Value*>(mountAcessList(v));
    }
    cout << "VALUE PRINT " << value  << " " << typeMostrar << endl;
    if (value){
        // Pegando a função que criei lá no construtor 
        llvm::Function* printf =Executable->getFunction("printf");

        // Criando os % necessários do C para entender o tipo (formatted output)
        llvm::Value* typePrint;
        llvm::Type* type;

        if (typeMostrar == "inteiro"){
            typePrint = dPrint;
            type = llvm::Type::getInt32Ty(*Conteiner);
        }
        else if (typeMostrar == "flutuante"){
            typePrint = fPrint;
            type = llvm::Type::getFloatTy(*Conteiner);
            value = Builder->CreateFPExt(value, llvm::Type::getDoubleTy(*Conteiner)); //Pois C só dá bom se for double senão fica imprimindo 0.000
        }
        else if (typeMostrar == "caracter"){
            typePrint = sPrint;
            type = llvm::Type::getInt8Ty(*Conteiner);
        }
        else if (typeMostrar == "bool"){
            typePrint = dPrint;
            type = llvm::Type::getInt1Ty(*Conteiner);
        }
        
        llvm::Value* call = Builder->CreateCall(printf, { typePrint, value });
        return call;
    }
    return nullptr;
}

llvm::Value* mountInput(Input* context) {
    string typePegar = context->type;

    // Pegando a função que criei lá no construtor 
    llvm::Function *scanf =Executable->getFunction("scanf");

    // Criando os % necessários do C para entender o tipo
    llvm::Value *typeInput;

    if (typePegar == "inteiro"){
        typeInput = dScanf;
    }
    else if (typePegar == "flutuante"){
        typeInput = fScanf;
    }
    else if (typePegar == "caracter"){
        typeInput = sScanf;
    }
    
    //Faz chamada de função
    llvm::Value* callScanf = Builder->CreateCall(scanf, { typeInput, SymbolTable[nameCurrentFunction][lastVar].value });

    return callScanf;
}

llvm::Value* mountInCase(InCase* context) {
    Operation* vl = dynamic_cast<Operation*>(context->LHS.get());
    Operation* vr = dynamic_cast<Operation*>(context->RHS.get());
    llvm::Value* lhs;
    llvm::Value* rhs;
    if (!vl){
        lhs = dynamic_cast<llvm::Value*>(mountTypeSpecifier(context->LHS.get()));
    }
    else {
        lhs = dynamic_cast<llvm::Value*>(mountTerm(vl));
    }
    if (!vr){
        rhs = dynamic_cast<llvm::Value*>(mountTypeSpecifier(context->RHS.get()));
    }
    else{
        rhs = dynamic_cast<llvm::Value*>(mountTerm(vr));
    }

    string oper = context->comparisonSign;
    llvm::Value* operation;

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

    //Cria pulo condicional
    llvm::BasicBlock* blockCondicional = llvm::BasicBlock::Create(*Conteiner, "blocoCondicional", CurrentFunction); 
    llvm::Value* jump;
    llvm::BasicBlock* block2 = llvm::BasicBlock::Create(*Conteiner, "Entrada2", CurrentFunction); 
    llvm::BasicBlock* blockElseCondicional;
    if (context->then != nullptr){
        blockElseCondicional = llvm::BasicBlock::Create(*Conteiner, "blocoSenaoCondicional", CurrentFunction); 
        jump = Builder->CreateCondBr(operation, blockCondicional, blockElseCondicional);
    }
    else{
        jump = Builder->CreateCondBr(operation, blockCondicional, block2);
    }

    //Crio o bloco de condicional e vou inserindo o código que está dentro dele
    Builder->SetInsertPoint(blockCondicional);
    for (int i = 0; i < context->values.size(); i++) {
        mountStmt(context->values[i].get()); 
    }
    jump = Builder->CreateBr(block2);
    
    //Criar o bloco do senão caso haja
    if (context->then != nullptr){
        Builder->SetInsertPoint(blockElseCondicional);
        int size = context->then.get()->values.size();
        for (int i = 0; i < size; i++){
            mountStmt(context->then.get()->values[i].get());
        }
        jump = Builder->CreateBr(block2);
    }
    //No bloco que eu estava antes vou criar um salto condicional 
    
    CurrentBasicBlock = block2;
    Builder->SetInsertPoint(CurrentBasicBlock);

    return lhs;
}

llvm::Value* mountLoop(Loop* context) {
    //Cria blocos
    llvm::BasicBlock* blockCondicionalLoop = llvm::BasicBlock::Create(*Conteiner, "blocoCondicionalLoop", CurrentFunction); 
    llvm::BasicBlock* blockLoopBody = llvm::BasicBlock::Create(*Conteiner, "blocoCorpoLoop", CurrentFunction); 
    llvm::BasicBlock* block2 = llvm::BasicBlock::Create(*Conteiner, "Entrada3", CurrentFunction);

    //Cria um jump para o condicional
    llvm::Value* jump = Builder->CreateBr(blockCondicionalLoop);

    //Cria bloco de condicional
    CurrentBasicBlock = blockCondicionalLoop;
    Builder->SetInsertPoint(CurrentBasicBlock);

    Operation* vl = dynamic_cast<Operation*>(context->LHS.get());
    Operation* vr = dynamic_cast<Operation*>(context->RHS.get());
    llvm::Value* lhs;
    llvm::Value* rhs;
    if (!vl){
        lhs = dynamic_cast<llvm::Value*>(mountTypeSpecifier(context->LHS.get()));
    }
    else {
        lhs = dynamic_cast<llvm::Value*>(mountTerm(vl));
    }
    if (!vr){
        rhs = dynamic_cast<llvm::Value*>(mountTypeSpecifier(context->RHS.get()));
    }
    else{
        rhs = dynamic_cast<llvm::Value*>(mountTerm(vr));
    }
    string oper = context->comparisonSign;
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

    jump = Builder->CreateCondBr(operation, blockLoopBody, block2);

    //Corpo do loop
    CurrentBasicBlock = blockLoopBody;
    Builder->SetInsertPoint(CurrentBasicBlock);
    for (int i = 0; i < context->values.size(); i++) {
        mountStmt(context->values[i].get()); 
    }
    jump = Builder->CreateBr(blockCondicionalLoop);
    
    //Muda para o bloco final
    CurrentBasicBlock = block2;
    Builder->SetInsertPoint(CurrentBasicBlock);

    return lhs;
}

llvm::Value* mountFunction(Function* context) {
    //Pega nome da função 
    string var = context->name;
    string olFunction = nameCurrentFunction;
    nameCurrentFunction = var;

    //Crio escopo da função e armazeno argumentos
    vector<llvm::Type*> params;
    for (int i = 0; i < context->argsNames.size(); i++){
        string arg = context->argsNames[i];
        llvm::Type* argType;

        //Salva o tipo do argumento
        string argumentType = context->argsTypes[i];
        if (argumentType == "inteiro"){
            argType = llvm::Type::getInt32Ty(*Conteiner);
        }
        else if (argumentType == "flutuante"){
            argType = llvm::Type::getFloatTy(*Conteiner);
        }
        else if (argumentType == "caracter"){
            argType = llvm::Type::getInt8Ty(*Conteiner);
        }
        else if (argumentType == "bool"){
            argType = llvm::Type::getInt1Ty(*Conteiner);
        }
        params.push_back(argType);

    }
    //Salva na lista de argumentos 
    argsFunctions[var] = context->argsNames;
    
    //Cria a função e armazena retorno
    llvm::FunctionType *FUNCTIONTYPE;
    llvm::Value* valueReturn;
    string argumentType = context->returnType;
    if (argumentType == "inteiro"){
        FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getInt32Ty(*Conteiner),params, false);
    }
    else if (argumentType == "flutuante"){
        FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getFloatTy(*Conteiner), params, false);
        
    }
    else if (argumentType == "caracter"){
        FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getInt8Ty(*Conteiner),params, false);
    }
    else if (argumentType == "bool"){
        FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getInt1Ty(*Conteiner),params, false);
    }
    else if (argumentType == "nada"){
        FUNCTIONTYPE = llvm::FunctionType::get(llvm::Type::getVoidTy(*Conteiner), false);
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
    for (int i = 0; i < context->argsNames.size(); i++){
        string arg = context->argsNames[i];
        string type = context->argsTypes[i];

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
        SymbolTable[var][arg].value = alloca;
    }

    //Fazer o store do argumentos 
    for (int i = 0; i < CurrentFunction->arg_size();i++){
        llvm::Value* ponteiroArg = &(*CurrentFunction->getArg(i));
        llvm::Value* stroreValue = Builder->CreateStore(ponteiroArg, SymbolTable[var][argsFunctions[var][i]].value);
    }
    //Preenche o bloco atual e confere se não tem funções declaradas dentro de outras
    for (int i = 0; i < context->values.size(); i++) {
        mountStmt(context->values[i].get()); 
    }
    
    VarType* returnValue = nullptr;
    Expression* returnValueExp = nullptr;
    if (argumentType != "nada"){
        returnValue = dynamic_cast<VarType*>(any_cast<Expression*>(context->value.get()));
        returnValueExp = any_cast<Expression*>(context->value.get());
    }
    
    // Armazena valor de retorno
    if (returnValue){
        string strValue = returnValue->value;

        if (context->returnType == "inteiro"){
            valueReturn = Builder->CreateLoad(llvm::Type::getInt32Ty(*Conteiner),SymbolTable[var][strValue].value);
        }
        else if (context->returnType == "flutuante"){
            valueReturn = Builder->CreateLoad(llvm::Type::getFloatTy(*Conteiner),SymbolTable[var][strValue].value);
        }
        else if (context->returnType == "caracter"){
            valueReturn = Builder->CreateLoad(llvm::Type::getInt8Ty(*Conteiner),SymbolTable[var][strValue].value);
        }
        else if (context->returnType == "bool"){
            valueReturn = Builder->CreateLoad(llvm::Type::getInt1Ty(*Conteiner),SymbolTable[var][strValue].value);
        }
    } 
    else if (returnValueExp) {
        valueReturn = dynamic_cast<llvm::Value*>(mountTerm(dynamic_cast<Operation*>(context->value.get())));
    }
    else {
        valueReturn;
    }

    cout << "CRIOU  " << valueReturn << endl;
    
    //Adiciona retorno da função
    if (!returnValueExp){
        Builder->CreateRetVoid();
    }
    else{
        cout << "É VOID " << valueReturn << endl;
        Builder->CreateRet(valueReturn);
    }

    //Volta a função anterior e ao basic block antigo
    CurrentFunction = mainFunction;
    CurrentBasicBlock = currentBlock;
    nameCurrentFunction = olFunction;
    Builder->SetInsertPoint(CurrentBasicBlock);
    return valueReturn;
}

llvm::Value* mountFunctionCall(FunctionCall* context) {
    string var = context->functionName;
    llvm::Function* functionCall =Executable->getFunction(var);   
    vector<llvm::Value*> objectParams; 

    
    //Faz store nos endereços que já aloquei
    for (int i = 0; i < context->args.size(); i++){
        string arg = context->args[i];
        cout << "CALL " << arg << endl;
        
        //Faz load
        cout << "ALOCA " << SymbolTable[nameCurrentFunction][arg].value << endl;
        llvm::AllocaInst* varAlloca = SymbolTable[nameCurrentFunction][arg].value;
        llvm::Type* varType = varAlloca->getAllocatedType();
        llvm::Value* loadedValue = Builder->CreateLoad(varType, varAlloca);
        
        //Salva parametro da função
        objectParams.push_back(loadedValue);
    }


    llvm::Value* store = Builder->CreateCall(functionCall, objectParams);

    return store;
}

llvm::Value* mountList(List* context) {
    int nElements = context->nElements;
    string var = context->listName;
    string type = context->type;
    llvm::Type* elementsType;
    int qElementosInput = context->values.size();

    if (type == "inteiro"){
        elementsType = llvm::Type::getInt32Ty(*Conteiner);
    }
    else if (type == "flutuante"){
        elementsType = llvm::Type::getFloatTy(*Conteiner);
    }
    else if (type == "bool"){
        elementsType = llvm::Type::getInt1Ty(*Conteiner);
    }
    //Alloca o array 
    llvm::AllocaInst* alloca = Builder->CreateAlloca(llvm::ArrayType::get(elementsType, nElements),nullptr,var);

    //Armazena na tabela de simbolos
    SymbolTable[nameCurrentFunction][var].value = alloca;

    
    //Store dos elementos dpo array no espaço alocado
    //GetElementPtr (GEP) calcula o endereço de um elemento.
    llvm::Value *addressArray;
    llvm::Value* store;
    llvm::Value* index;
    llvm::Value* value;

    for (int i = 0; i < nElements; i++){
        index = Builder->getInt32(i);
        IntType* inteiro = dynamic_cast<IntType*>(any_cast<Expression*>(context->values[i].get()));
        FloatType* flutuante = dynamic_cast<FloatType*>(any_cast<Expression*>(context->values[i].get()));
        BoolType* booleano = dynamic_cast<BoolType*>(any_cast<Expression*>(context->values[i].get()));
        cout << "VALUE LIST ANTES " << inteiro << " " << context->values.size() << endl;
        
        if (type == "inteiro"){
            int inteiroValue = inteiro->value;
            value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), inteiroValue);
        }
        else if (type == "flutuante"){
            float flutuanteValue = flutuante->value;
            value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*Conteiner), flutuanteValue);
        }
        else if (type == "bool"){
            bool boolenaoValue = booleano->value;
            value = llvm::ConstantInt::get(llvm::Type::getInt1Ty(*Conteiner), boolenaoValue);
        }

        addressArray = Builder->CreateGEP(llvm::ArrayType::get(elementsType, nElements), alloca, {llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), 0),index}, "endereco");
        store = Builder->CreateStore(value, addressArray);
    }
    return store;
}

llvm::Value* mountAcessList(AcessList* context) {
    llvm::AllocaInst* varInTable = SymbolTable[nameCurrentFunction][context->listName].value;
    llvm::Type* typeLoadTable = varInTable->getAllocatedType();
    auto* arrayType = llvm::cast<llvm::ArrayType>(typeLoadTable);
    llvm::Type* elementsType;    
    if (arrayType->getElementType()->isIntegerTy(32)){
        elementsType = llvm::Type::getInt32Ty(*Conteiner);
    }
    else if (arrayType->getElementType()->isFloatTy()){
        elementsType = llvm::Type::getFloatTy(*Conteiner);
    }
    else if (arrayType->getElementType()->isIntegerTy(1)){
        elementsType = llvm::Type::getInt1Ty(*Conteiner);
    }
    
    // Acessar o endereço na posição correta do array
    llvm::Value* position = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), context->index);

    llvm::Value* gep = Builder->CreateGEP(arrayType, varInTable,{Builder->getInt32(0), position});

    // Load do array[posição]
    llvm::Value* element = Builder->CreateLoad(elementsType, gep);

    return element;
}