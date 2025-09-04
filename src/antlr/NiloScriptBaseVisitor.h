
// Generated from NiloScript.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloScriptVisitor.h"


/**
 * This class provides an empty implementation of NiloScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NiloScriptBaseVisitor : public NiloScriptVisitor {
public:

  virtual antlrcpp::Any visitExpression(NiloScriptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(NiloScriptParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFact(NiloScriptParser::FactContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(NiloScriptParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }


};

