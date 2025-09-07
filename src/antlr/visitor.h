#include "NiloScriptVisitor.h"

using namespace std;

map<string, any> symbolTable;

class Visitor : public NiloScriptVisitor{
    public:
    Visitor(NiloScriptParser::ProgramContext* tree) {
        visitProgram(tree);
    }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        return visitCode(context->code());
        return nullptr;
    }

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
    }

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {
        if (context->VAR()){
            string var = context->VAR()->getText();
            any value = visitExpression(context->expression());
            symbolTable[var] = value;
        }else{
            cerr << "ERROR: You must put a variable name :(" << endl;
        }
        return nullptr;
    }

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        if (context->term() && !context->expression()){
            return visitTerm(context->term());
        }else if (context -> expression()){
            int lhs = any_cast<int>(visitExpression(context->expression()));
            int rhs = any_cast<int>(visitTerm(context->term()));
            int result;
            if (context->children[1]->getText() == "+"){
                result = lhs + rhs;
            }else{
                result = lhs - rhs;
            }
            return result;
        }
        return nullptr;
    }

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {
        if (context->fact() && !context->term()){
            return visitFact(context->fact());
        }else if (context -> fact()){
            int lhs = any_cast<int>(visitTerm(context->term()));
            int rhs = any_cast<int>(visitFact(context->fact()));
            int result;
            if (context->children[1]->getText() == "*"){
                result = lhs * rhs;
            }else{
                result = lhs / rhs;
            }
            return result;
        }
        return nullptr;
    }

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {
        if (context->VAR()){
            string var = context->VAR()->getText();
            if (symbolTable.find(var) != symbolTable.end()){
                return var;
            }else {
                cerr << "ERROR: Cannot recognize the variable name :(" << endl;
                return nullptr;
            }
        }else if (context->INT()){
            return context->INT()->getText();
        }else if (context->STRING()){
            return context->STRING()->getText();
        }else if (context->COMMENT()){
            return context->COMMENT()->getText();
        }else if (context->expression()){
            return visitExpression(context->expression());
        }else {
            cerr << "ERROR: Cannot recognize the instruction :(" << endl;
            return nullptr;
        }
    }

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {
        if (context->expression()){
            string value = any_cast<string>(visitExpression(context->expression()));
            cout << "PRINT: " << value << endl;
            return nullptr;
        }else {
            cerr << "ERROR: You must put something to show :(" << endl;
            return nullptr;
        }
    }

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        string opt1 = any_cast<string>(context->expression(0));
        string opt2 =  any_cast<string>(context->expression(1));
        string oper = context->OPERATOR()->getText();
        if (oper == "equal"){
            if (opt1 == opt2) return visitCode(context->code());
            else return nullptr;
        } else if (oper == "distinct"){
            if (opt1 != opt2) return visitCode(context->code());
            else return nullptr;
        } else if (oper == "bigger"){
            if (opt1 > opt2) return visitCode(context->code());
            else return nullptr;
        } else if (oper == "minor"){
            if (opt1 < opt2) return visitCode(context->code());
            else return nullptr;
        } else {
            cerr << "ERROR: Cannot recognize the operator :(" << endl;
            return nullptr;
        }
    }
};