#include "NiloScriptVisitor.h"

using namespace std;

map<string, int> symbolTable;
class Visitor : public NiloScriptVisitor{
    public:
    Visitor(NiloScriptParser::ProgramContext* tree) {
        visitProgram(tree);
    }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        for (NiloScriptParser::CodeContext* code : context->code()){
            visitCode(code);
        }
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
            int value = any_cast<int>(visitExpression(context->expression()));
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
            string s1, s2;
            int lhs, rhs;
            if (context->term()->getText().length() == 1 && context->expression()->getText().length() == 1){
                lhs = stoi(context->expression()->getText());
                rhs = stoi(context->term()->getText());
            }
            else{
                if (context -> expression()->getText().length() == 1){
                    s1 = context -> expression()->getText();
                    lhs = stoi(s1); 
                }
                else{
                    lhs = any_cast<int>(visitExpression(context->expression())); 
                }
                rhs = any_cast<int>(visitTerm(context->term()));
            }
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
            string s1, s2;
            int lhs, rhs;
            if (context->term()->getText().length() == 1 && context->fact()->getText().length() == 1){
                lhs = stoi(context->term()->getText());
                rhs = stoi(context->fact()->getText());
            }
            else{
                if (context -> term()->getText().length() == 1){
                    s1 = context -> term()->getText();
                    lhs = stoi(s1); 
                }
                else{
                    lhs = any_cast<int>(visitTerm(context->term())); 
                }
                rhs = any_cast<int>(visitFact(context->fact()));
            }
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
                return symbolTable[var];
            }else {
                cerr << "ERROR: Cannot recognize the variable name :(" << endl;
                return nullptr;
            }
        }else if (context->INT()){
            return stoi(context->INT()->getText());
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
        any opt1 = visitExpression(context->expression(0));
        any opt2 =  visitExpression(context->expression(1));
        string oper = context->OPERATOR()->getText();
        if (opt1.type() != opt2.type()){
            cerr << "ERROR: The operators types are diferents :(" << endl;
            return nullptr;
        }
        if (opt1.type() == typeid(int)){
            int v1 = any_cast<int>(opt1);
            int v2 = any_cast<int>(opt2);
            if (oper == "equal"){
                if (v1 == v2) return visitCode(context->code());
                else return nullptr;
            } else if (oper == "distinct"){
                if (v1 != v2) return visitCode(context->code());
                else return nullptr;
            } else if (oper == "bigger"){
                if (v1 > v2) return visitCode(context->code());
                else return nullptr;
            } else if (oper == "minor"){
                if (v1 < v2) return visitCode(context->code());
                else return nullptr;
            } else {
                cerr << "ERROR: Cannot recognize the operator :(" << endl;
                return nullptr;
            }
        }
        else if (opt1.type() == typeid(string)){
            string v1 = any_cast<string>(opt1);
            string v2 = any_cast<string>(opt2);
            if (oper == "equal"){
                if (v1 == v2) return visitCode(context->code());
                else return nullptr;
            } else if (oper == "distinct"){
                if (v1 != v2) return visitCode(context->code());
                else return nullptr;
            }else {
                cerr << "ERROR: Cannot recognize the operator :(" << endl;
                return nullptr;
            }
        } else{
            cerr << "ERROR: Unkown type :(" << endl;
            return nullptr;
        }
    }
};