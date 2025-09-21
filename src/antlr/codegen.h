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

//Constructor for LLVM stuctures
void LlvmConstructor(){
    Conteiner = make_unique<llvm::LLVMContext>();
    Executable = make_unique<llvm::Module>();
    Builder = make_unique<llvm::IRBuilder<llvm::NoFolder>>();
}
class CodeGen : public NiloScriptVisitor {
    private:
    llvm::Function *TheFunction;
    llvm::BasicBlock *CurrentBasisBlock;

    public:
    CodeGen(NiloScriptParser::ProgramContext* tree){
        visitProgram(tree);
    }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {};

    virtual std::any visitCode(NiloScriptParser::CodeContext *context) override {};

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {};

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {};

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {};

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {};

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {};

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {};
}
