
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloScriptVisitor.h"


/**
 * This class provides an empty implementation of NiloScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NiloScriptBaseVisitor : public NiloScriptVisitor {
public:

  virtual std::any visitProgram(NiloScriptParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCode(NiloScriptParser::CodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(NiloScriptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(NiloScriptParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFact(NiloScriptParser::FactContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(NiloScriptParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInCase(NiloScriptParser::InCaseContext *ctx) override {
    return visitChildren(ctx);
  }


};

