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

class IRGen : public NiloScriptVisitor{
    private:
        llvm::Function *MainFunction;
        llvm::BasicBlock *CurrentBasicBlock;

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
        
        //Inicia visitação da árvore para gerar executável 
        visitProgram(tree);
    }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        llvm::Value *result = nullptr;

        for(int i = 0; i < context->children.size(); i++){
            any response = visitStmt(context->stmt()[i]);
        }

        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitStmt(NiloScriptParser::StmtContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitExpo(NiloScriptParser::ExpoContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitOpPar(NiloScriptParser::OpParContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitTypeSpecifier(NiloScriptParser::TypeSpecifierContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitInput(NiloScriptParser::InputContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
    };

    virtual std::any visitLoop(NiloScriptParser::LoopContext *context) override {
        cerr << "A funcionalidade não está implementada ainda, desculpe o transtorno!" << endl;
        exit(1);
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
}