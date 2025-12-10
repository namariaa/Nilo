
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloScriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NiloScriptParser.
 */
class  NiloScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NiloScriptParser.
   */
    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) = 0;

    virtual std::any visitStmt(NiloScriptParser::StmtContext *context) = 0;

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) = 0;

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) = 0;

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) = 0;

    virtual std::any visitFact(NiloScriptParser::FactContext *context) = 0;

    virtual std::any visitExpo(NiloScriptParser::ExpoContext *context) = 0;

    virtual std::any visitOpPar(NiloScriptParser::OpParContext *context) = 0;

    virtual std::any visitTypeSpecifier(NiloScriptParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) = 0;

    virtual std::any visitInput(NiloScriptParser::InputContext *context) = 0;

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) = 0;

    virtual std::any visitLoop(NiloScriptParser::LoopContext *context) = 0;

    virtual std::any visitFunction(NiloScriptParser::FunctionContext *context) = 0;

    virtual std::any visitFunctionCall(NiloScriptParser::FunctionCallContext *context) = 0;

    virtual std::any visitList(NiloScriptParser::ListContext *context) = 0;

    virtual std::any visitAcessList(NiloScriptParser::AcessListContext *context) = 0;


};

