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
            cout << "CODE " <<  code->getText() << endl;
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
        cout << "ASIGN: " << context->VAR()->getText() << endl;
        if (context->VAR()){
            string var = context->VAR()->getText();
            int value = any_cast<int>(visitExpression(context->expression()));
            cout << "VALUE DO ASSIGN: " << value << endl;
            symbolTable[var] = value;
        }else{
            cerr << "ERROR: You must put a variable name :(" << endl;
        }
        return nullptr;
    }

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        cout << "context->getText(): " << context->getText() << endl;
        if (context->term() && !context->expression()){
            return visitTerm(context->term());
        }else if (context -> expression()){
            string s1, s2;
            int lhs, rhs;
            cout << "TERM" << context->term()->getText()<< endl;
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
                cout << "EXPRESSSION" << context->expression()->getText() << endl;
                rhs = any_cast<int>(visitTerm(context->term()));
            }
            int result;
            if (context->children[1]->getText() == "+"){
                result = lhs + rhs;
            }else{
                result = lhs - rhs;
            }
            cout << "RESULT EXPR: " << result << endl;
            return result;
        }
        return nullptr;
    }

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {
        if (context->fact() && !context->term()){
            return visitFact(context->fact());
        }else if (context -> fact()){
            cout << "TEXT TERM" << context->getText() << endl;
            cout << " TERM MESMO" << context->term()->getText() << endl;
            cout << " FACT MESMO" << context->fact()->getText() << endl;
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
            cout << "RESULT term: " << result << endl;
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
            return stoi(context->INT()->getText());;
        }else if (context->STRING()){
            return context->STRING()->getText();
        }else if (context->COMMENT()){
            cout << "COMMENT " << context->COMMENT()->getText() << endl;
            return context->COMMENT()->getText();
        }else if (context->expression()){
            return visitExpression(context->expression());
        }else {
            cerr << "ERROR: Cannot recognize the instruction :(" << endl;
            return nullptr;
        }
    }

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {
        cout << "PRINT: " << "ANTES" << context->expression()->getText() << endl;
        if (context->expression()){
            any value = visitExpression(context->expression());
            if (value.type() == typeid(int)){
                int v = any_cast<int>(value);
                cout << "PRINT: " << v << endl;
            }
            else if (value.type() == typeid(string)){
                string value = any_cast<string>(value);
                cout << "PRINT: " << value << endl;
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