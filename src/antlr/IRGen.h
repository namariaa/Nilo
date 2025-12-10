#include "NiloScriptVisitor.h"
#include <stdlib.h>

using namespace std;

class Visitor : public NiloScriptVisitor{
    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
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