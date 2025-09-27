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

map<string, llvm::Value *> symbolTable;

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
        Executable = make_unique<llvm::Module>("NiloScriptModule", *Conteiner);
        Builder = make_unique<llvm::IRBuilder<llvm::NoFolder>>(*Conteiner);
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

        //Print the executable file 
        llvm::verifyFunction(*TheFunction);
        Executable->print(llvm::outs(), nullptr);

        return nullptr;
    };

    virtual std::any visitCode(NiloScriptParser::CodeContext *context) override {
        if (context->expression()){
            return visitExpression(context->expression());
        }else if (context->print()){
            return visitPrint(context->print());
        }else if(context->assignment()){
           return  visitAssignment(context->assignment());
        }else if(context->inCase()){
            return visitInCase(context->inCase());
        }else{
            cerr << "ERROR: Cannot recognize the instruction :(" << endl;
            return nullptr;
        }
    };

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {
        if (context->VAR()){
            string var = context->VAR()->getText();
            llvm::Value *value = any_cast<llvm::Value *>(visitExpression(context->expression()));
            return symbolTable[var] = value;
            
        }else{
            cerr << "ERROR: You must put a variable name :(" << endl;
        }
        cerr << "Vai retornar nullptr" << endl;
        return nullptr;
    };

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        if (context->term() && !context->expression()){
            return visitTerm(context->term());
        }else if (context -> expression()){
            int v1, v2;
            llvm::Value * lhs, *rhs;
            if (context->term()->getText().length() == 1 && context->expression()->getText().length() == 1){
                v1 = stoi(context->expression()->getText());
                v2 = stoi(context->term()->getText());
                lhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v1);
                rhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v2);
            }
            else{
                if (context -> expression()->getText().length() == 1){
                    v1 = stoi(context -> expression()->getText()); 
                    lhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v1);
                }
                else{
                    lhs = std::any_cast<llvm::Value*>(visitExpression(context->expression())); 
                }
                rhs = std::any_cast<llvm::Value*>(visitTerm(context->term()));
            }
            llvm::Value *result;
            if (context->children[1]->getText() == "+"){
                result = Builder->CreateAdd(lhs, std::any_cast<llvm::Value *>(rhs), "addtmp");
            }else{
                result = Builder->CreateSub(std::any_cast<llvm::Value *>(lhs), std::any_cast<llvm::Value *>(rhs), "subtmp");
            }
            return result;
        }
        return nullptr;
    }

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {
        if (context->fact() && !context->term()){
            return visitFact(context->fact());
        }else if (context -> fact()){
            int v1, v2;
            llvm::Value* lhs, *rhs;
            if (context->term()->getText().length() == 1 && context->fact()->getText().length() == 1){
                v1 = stoi(context->term()->getText());
                v2 = stoi(context->fact()->getText());
                lhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v1);
                rhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v2);
            }
            else{
                if (context -> term()->getText().length() == 1){
                    v1 = stoi(context->term()->getText());
                    lhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v1);
                }
                else{
                    lhs = any_cast<llvm::Value *>(visitTerm(context->term())); 
                }
                rhs = any_cast<llvm::Value *>(visitFact(context->fact()));
            }
            llvm::Value *result;
            if (context->children[1]->getText() == "*"){
                result = Builder->CreateMul(std::any_cast<llvm::Value *>(lhs), std::any_cast<llvm::Value *>(rhs), "multmp");
            }else{
                result = Builder->CreateFDiv(std::any_cast<llvm::Value *>(lhs), std::any_cast<llvm::Value *>(rhs), "divtmp");
            }
            return result;
        }
        return nullptr;
    }

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {
        if (context->VAR()){
            string var = context->VAR()->getText();
            if (symbolTable.find(var) != symbolTable.end()){
                return symbolTable[var];
            }else {
                cerr << "ERROR: Cannot recognize the variable name :(" << endl;
                return nullptr;
            }
        }else if (context->INT()){
            llvm::Value *value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), std::stoi(context->INT()->getText()));
            return value; 
        }else if (context->STRING()){
            string text = context->STRING()->getText();
            text = text.substr(1, text.size() - 2);
            llvm::Value *valueText = Builder->CreateGlobalStringPtr(text);
            return valueText; 
        }else if (context->COMMENT()){
            return nullptr;
        }else if (context->expression()){
            return visitExpression(context->expression());
        }else {
            cerr << "ERROR: Cannot recognize the instruction :(" << endl;
            return nullptr;
        }
    }

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {
        if (context->expression()){
            any value = visitExpression(context->expression());
            llvm::Value *v = any_cast<llvm::Value*>(value);
            llvm::FunctionCallee Print = Executable->getOrInsertFunction("print",
                llvm::FunctionType::get(llvm::IntegerType::getInt32Ty(*Conteiner), {llvm::PointerType::get(llvm::Type::getInt8Ty(*Conteiner), 0)}, true));
        
            //CreateCall is a function call
            llvm::SmallVector<llvm::Value*, 1> Args;
            Args.push_back(v);
            Builder->CreateCall(Print, Args, "printCall");
            return v;
        }else {
            cerr << "ERROR: You must put something to show :(" << endl;
            return nullptr;
        }
    }

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        any opt1 = visitExpression(context->expression(0));
        any opt2 =  visitExpression(context->expression(1));
        llvm::Value *v1 = any_cast<llvm::Value *>(opt1);
        llvm::Value *v2 = any_cast<llvm::Value *>(opt2);
        string oper = context->OPERATOR()->getText();
        llvm::BasicBlock *conditionalBlock = llvm::BasicBlock::Create(*Conteiner, "inCase", TheFunction);
        llvm::Value *CondV;
        any responseBlock;
        if (oper == "equal"){
                CondV = Builder->CreateICmpEQ(v1, v2, "inCaseCondicional");
            } else if (oper == "distinct"){
                CondV = Builder->CreateICmpNE(v1, v2, "inCaseCondicional");
            } else if (oper == "bigger"){
                CondV = Builder->CreateICmpUGT(v1, v2, "inCaseCondicional");
            } else if (oper == "minor"){
                CondV = Builder->CreateICmpULT(v1, v2, "inCaseCondicional");
            } else {
                cerr << "ERROR: Cannot recognize the operator :(" << endl;
                return opt1;
            }
        Builder->SetInsertPoint(conditionalBlock);
        responseBlock = visitCode(context->code());
        Builder->CreateBr(CurrentBasicBlock);
        Builder->SetInsertPoint(CurrentBasicBlock);
        Builder->CreateCondBr(CondV, conditionalBlock, CurrentBasicBlock);
        return opt1;
    }
};
