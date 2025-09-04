
// Generated from NiloScript.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NiloScriptParser.
 */
class  NiloScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(NiloScriptParser::RootContext *ctx) = 0;
  virtual void exitRoot(NiloScriptParser::RootContext *ctx) = 0;

  virtual void enterExpression(NiloScriptParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NiloScriptParser::ExpressionContext *ctx) = 0;

  virtual void enterTerm(NiloScriptParser::TermContext *ctx) = 0;
  virtual void exitTerm(NiloScriptParser::TermContext *ctx) = 0;

  virtual void enterFact(NiloScriptParser::FactContext *ctx) = 0;
  virtual void exitFact(NiloScriptParser::FactContext *ctx) = 0;

  virtual void enterPrint(NiloScriptParser::PrintContext *ctx) = 0;
  virtual void exitPrint(NiloScriptParser::PrintContext *ctx) = 0;


};

