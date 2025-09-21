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
            cout << "LOOP" << endl;
            // if (r.has_value()){
            //     resultOfProgram = any_cast<llvm::Value *>(r);
            //     cout << "LOOP2" << endl;
            // }
        } 
        
        //Build return IR
        Builder->CreateRet(resultOfProgram);

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
            cout << "ENTROU NO ASSIGMENT " << context->getText() << endl;
            string var = context->VAR()->getText();
            cout << "VALUE" << endl;
            llvm::Value *value = any_cast<llvm::Value *>(visitExpression(context->expression()));
            symbolTable[var] = value;
        }else{
            cerr << "ERROR: You must put a variable name :(" << endl;
        }
        return nullptr;
    };

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        cout << "ENTROU NO EXPRESSION " << context->getText() << endl;
        if (context->term() && !context->expression()){
            return visitTerm(context->term());
        }else if (context -> expression()){
            int v1, v2;
            llvm::Value * lhs, *rhs;
            if (context->term()->getText().length() == 1 && context->expression()->getText().length() == 1){
                v1 = stoi(context->expression()->getText());
                v2 = stoi(context->term()->getText());
                cout << "AQUIIII " << v1 << " " << v2 << endl;
                lhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v1);
                rhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v2);
            }
            else{
                cout << "ALIIII" << endl;
                if (context -> expression()->getText().length() == 1){
                    v1 = stoi(context -> expression()->getText()); 
                    cout << "PRIMIERO" << endl;
                    lhs = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Conteiner), v1);
                }
                else{
                    cout << "SEGUNDO" << endl;
                    lhs = std::any_cast<llvm::Value*>(visitExpression(context->expression())); 
                    cout << "SEGUNDO ..." << endl;
                }
                cout << "VISIT TERM " << endl;
                rhs = std::any_cast<llvm::Value*>(visitTerm(context->term()));
                cout << "FIM VISIT TERM " << endl;
            }
            cout << "EXPRESSION " << endl;
            llvm::Value *result;
            if (context->children[1]->getText() == "+"){
                cout << "AQUI 2 " << endl;
                result = Builder->CreateAdd(lhs, std::any_cast<llvm::Value *>(rhs), "addtmp");
            }else{
                cout << "ALI 2 " << endl;
                result = Builder->CreateSub(std::any_cast<llvm::Value *>(lhs), std::any_cast<llvm::Value *>(rhs), "subtmp");
            }
            cout << "RESULT " << result->getValueName() << endl;
            return result;
        }
        return nullptr;
    }

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {
        cout << "ENTROU NO TERM " << context->getText() << endl;
        if (context->fact() && !context->term()){
            return visitFact(context->fact());
        }else if (context -> fact()){
            int v1, v2;
            llvm::Value* lhs, *rhs;
            if (context->term()->getText().length() == 1 && context->fact()->getText().length() == 1){
                v1 = stoi(context->term()->getText());
                v2 = stoi(context->fact()->getText());
                cout << "AQUIIII TERM " << v1 << " " << v2 << endl;
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
            cout << "RESULT TERM" << endl;
            return result;
        }
        return nullptr;
    }

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {
        cout << "ENTROU NO FACT" << endl;
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
        cout << "ENTROU NO PRINT " << context->getText() << endl;
        if (context->expression()){
            any value = visitExpression(context->expression());
            if (value.type() == typeid(int)){
                int v = any_cast<int>(value);
                cout << "PRINT: " << v << endl;
            }
            else if (value.type() == typeid(string)){
                string v = any_cast<string>(value);
                cout << "PRINT: " << v << endl;
            } else{
                cerr << "ERROR: Unkown type :(" << endl;
            }
            return nullptr;
        }else {
            cerr << "ERROR: You must put something to show :(" << endl;
            return nullptr;
        }
    }

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        return 0;
    }
};
