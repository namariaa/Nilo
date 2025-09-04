
// Generated from NiloScript.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NiloScriptParser.
 */
class  NiloScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(NiloScriptParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(NiloScriptParser::ProgramContext *ctx) = 0;

  virtual void enterCode(NiloScriptParser::CodeContext *ctx) = 0;
  virtual void exitCode(NiloScriptParser::CodeContext *ctx) = 0;

  virtual void enterAssignment(NiloScriptParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(NiloScriptParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(NiloScriptParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NiloScriptParser::ExpressionContext *ctx) = 0;

  virtual void enterTerm(NiloScriptParser::TermContext *ctx) = 0;
  virtual void exitTerm(NiloScriptParser::TermContext *ctx) = 0;

  virtual void enterFact(NiloScriptParser::FactContext *ctx) = 0;
  virtual void exitFact(NiloScriptParser::FactContext *ctx) = 0;

  virtual void enterPrint(NiloScriptParser::PrintContext *ctx) = 0;
  virtual void exitPrint(NiloScriptParser::PrintContext *ctx) = 0;

  virtual void enterInCase(NiloScriptParser::InCaseContext *ctx) = 0;
  virtual void exitInCase(NiloScriptParser::InCaseContext *ctx) = 0;


};

