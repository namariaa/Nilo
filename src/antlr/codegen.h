#include "NiloScriptVisitor.h"
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
// using namespace llvm;

map<string, llvm::Value> symbolTable;

//Creating llvm important structures
unique_ptr<llvm::LLVMContext> Conteiner;
unique_ptr<llvm::Module> Executable;
unique_ptr<llvm::IRBuilder<llvm::NoFolder>> Builder;
class CodeGen : public NiloScriptVisitor {
    private:
    llvm::Function *TheFunction;
    llvm::BasicBlock *CurrentBasicBlock;

    public:
    CodeGen(NiloScriptParser::ProgramContext* tree){
        Conteiner = make_unique<llvm::LLVMContext>();
        Executable = make_unique<llvm::Module>();
        Builder = make_unique<llvm::IRBuilder<llvm::NoFolder>>();
        visitProgram(tree);
    }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        //Configure the module
        Executable->setDataLayout(llvm::DataLayout("e-m:e-i64:64-f80:128-n8:16:32:64-S128"));
        Executable->setTargetTriple("x86_64-unknown-linux-gnu");
        
        //Create main function
        llvm::FunctionType *FT = llvm::FunctionType::get(llvm::Type::getInt32Ty(*Conteiner), false);
        TheFunction = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "main", Executable.get());
        CurrentBasicBlock = llvm::BasicBlock::Create(*Conteiner, "entry", TheFunction);
        Builder->SetInsertPoint(CurrentBasicBlock);

        //Loop and result of program
        llvm::Value *resultOfProgram = nullptr;
        for (NiloScriptParser::CodeContext *code : context->code()){
            any r = visitCode(code);
            if (r.has_value()){
                resultOfProgram = any_cast<llvm::Value *>(r);
            }
        } 
        
        //Build return IR
        Builder->CreateRet(resultOfProgram);

        return nullptr;
    };

    virtual std::any visitCode(NiloScriptParser::CodeContext *context) override {};

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {};

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {};

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {};

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {};

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {};

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {};
}
