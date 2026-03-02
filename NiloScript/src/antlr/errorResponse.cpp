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

#include <string>

using namespace std;

unique_ptr<llvm::LLVMContext> Conteiner2;
unique_ptr<llvm::Module> Executable2;
unique_ptr<llvm::IRBuilder<llvm::ConstantFolder>> Builder2;
llvm::Function *CurrentFunction2;
llvm::BasicBlock *CurrentBasicBlock2;


void errorResponse(string text){
    Conteiner2 = make_unique<llvm::LLVMContext>();
            Executable2 = make_unique<llvm::Module>("NiloScriptModule", *Conteiner2);
            Builder2 = make_unique<llvm::IRBuilder<llvm::ConstantFolder>>(*Conteiner2);

            //Adiciona informações de configurações para executável
            Executable2->setDataLayout(llvm::DataLayout("e-m:e-i64:64-f80:128-n8:16:32:64-S128"));
            Executable2->setModuleIdentifier("Executável");
            Executable2->setTargetTriple("x86_64-unknown-linux-gnu");

            //Cria função
            llvm::FunctionType *MAINTYPE = llvm::FunctionType::get(llvm::Type::getInt32Ty(*Conteiner2), false);
            CurrentFunction2 = llvm::Function::Create(MAINTYPE, llvm::Function::ExternalLinkage, "main", Executable2.get());
            CurrentBasicBlock2 = llvm::BasicBlock::Create(*Conteiner2, "entrada", CurrentFunction2);
            Builder2->SetInsertPoint(CurrentBasicBlock2);

            text.push_back('\0');

            //Insere erro no basisc block
            llvm::AllocaInst* alloca = Builder2->CreateAlloca(llvm::ArrayType::get(llvm::Type::getInt8Ty(*Conteiner2), text.size()),nullptr,"error"); 
          
            //Store dos elementos dpo array no espaço alocado
            llvm::Value *addressArray;
            llvm::Value* store;
            llvm::Value* index;
            llvm::Value* value;
            llvm::Value* retorno;
            for (int i = 0; i < text.size(); i++){
                index = Builder2->getInt32(i);
                value = llvm::ConstantInt::get(llvm::Type::getInt8Ty(*Conteiner2), text[i]);
                addressArray = Builder2->CreateGEP(llvm::ArrayType::get(llvm::Type::getInt8Ty(*Conteiner2), text.size()), alloca, {llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner2), 0),index}, "endereco");
                store = Builder2->CreateStore(value, addressArray);
                if (i == 0) retorno = addressArray;
            }

            //Adiciona retorno em um print
            //Cria Função Print
            llvm::FunctionCallee Print = Executable2->getOrInsertFunction("printf",
            llvm::FunctionType::get(llvm::IntegerType::getInt32Ty(*Conteiner2), {llvm::PointerType::get(llvm::Type::getInt8Ty(*Conteiner2), 0)}, true));
            llvm::Function* printf =Executable2->getFunction("printf");
            Builder2->CreateCall(printf, { Builder2->CreateGlobalStringPtr("%s\n", "sPrint"), retorno });

            //Cria o retorno do IR
            Builder2->CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner2),0));

            //Print the executable file 
            llvm::verifyFunction(*CurrentFunction2);
            Executable2->print(llvm::outs(), nullptr);

            //Cria o arquivo .ll
            std::error_code errorCode;
            llvm::raw_fd_ostream out("executavel.ll", errorCode);
            Executable2->print(out, nullptr);
            out.flush();
}