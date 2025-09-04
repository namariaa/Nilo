
// Generated from NiloScript.g4 by ANTLR 4.9.2

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
    virtual antlrcpp::Any visitRoot(NiloScriptParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitExpression(NiloScriptParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTerm(NiloScriptParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitFact(NiloScriptParser::FactContext *context) = 0;

    virtual antlrcpp::Any visitPrint(NiloScriptParser::PrintContext *context) = 0;


};

