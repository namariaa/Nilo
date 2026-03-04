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

map<string,map<string,llvm::AllocaInst*>> SymbolTableLog;
llvm::Function *CurrentFunction;
llvm::BasicBlock *CurrentBasicBlock;

void visitLog(AST astTree) {
}

void IRGen(AST astTree) {
    unique_ptr<llvm::LLVMContext> Context = make_unique<llvm::LLVMContext>();
    unique_ptr<llvm::Module> Module = make_unique<llvm::Module>("NiloScriptModule", *Context);
    unique_ptr<llvm::IRBuilder<llvm::ConstantFolder>> IRBuilder = make_unique<llvm::IRBuilder<llvm::ConstantFolder>>(*Context);

    Module->setDataLayout(llvm::DataLayout("e-m:e-i64:64-f80:128-n8:16:32:64-S128"));
    Module->setModuleIdentifier("Log");
    Module->setTargetTriple("x86_64-unknown-linux-gnu");

    llvm::FunctionType *MAINTYPE = llvm::FunctionType::get(llvm::Type::getInt32Ty(*Context), false);
    CurrentFunction = llvm::Function::Create(MAINTYPE, llvm::Function::ExternalLinkage, "main", Module.get());
    CurrentBasicBlock = llvm::BasicBlock::Create(*Context, "entrada", CurrentFunction);
    IRBuilder->SetInsertPoint(CurrentBasicBlock);

    llvm::Value* dPrint = IRBuilder->CreateGlobalStringPtr("%d\n", "dPrint");
    llvm::Value* fPrint = IRBuilder->CreateGlobalStringPtr("%f\n", "fPrint");
    llvm::Value* cPrint = IRBuilder->CreateGlobalStringPtr("%c\n", "cPrint");
    llvm::Value* sPrint = IRBuilder->CreateGlobalStringPtr("%s\n", "sPrint");

    llvm::FunctionCallee Print = Module->getOrInsertFunction("printf",
    llvm::FunctionType::get(llvm::IntegerType::getInt32Ty(*Context), {llvm::PointerType::get(llvm::Type::getInt8Ty(*Context), 0)}, true));
        
    //Inicia visitação da árvore para gerar executável 
    visitLog(astTree);
    
    //Cria o retorno do IR
    IRBuilder->CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Context),0));

    //Print the executable file 
    llvm::verifyFunction(*CurrentFunction);
    Module->print(llvm::outs(), nullptr);

    //Cria o arquivo .ll
    std::error_code errorCode;
    llvm::raw_fd_ostream out("NiloLog/executavel.ll", errorCode);
    Module->print(out, nullptr);
    out.flush();
}