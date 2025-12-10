
// Generated from NiloScript.g4 by ANTLR 4.13.2

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

  virtual void enterStmt(NiloScriptParser::StmtContext *ctx) = 0;
  virtual void exitStmt(NiloScriptParser::StmtContext *ctx) = 0;

  virtual void enterAssignment(NiloScriptParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(NiloScriptParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(NiloScriptParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NiloScriptParser::ExpressionContext *ctx) = 0;

  virtual void enterTerm(NiloScriptParser::TermContext *ctx) = 0;
  virtual void exitTerm(NiloScriptParser::TermContext *ctx) = 0;

  virtual void enterFact(NiloScriptParser::FactContext *ctx) = 0;
  virtual void exitFact(NiloScriptParser::FactContext *ctx) = 0;

  virtual void enterExpo(NiloScriptParser::ExpoContext *ctx) = 0;
  virtual void exitExpo(NiloScriptParser::ExpoContext *ctx) = 0;

  virtual void enterOpPar(NiloScriptParser::OpParContext *ctx) = 0;
  virtual void exitOpPar(NiloScriptParser::OpParContext *ctx) = 0;

  virtual void enterTypeSpecifier(NiloScriptParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(NiloScriptParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterPrint(NiloScriptParser::PrintContext *ctx) = 0;
  virtual void exitPrint(NiloScriptParser::PrintContext *ctx) = 0;

  virtual void enterInput(NiloScriptParser::InputContext *ctx) = 0;
  virtual void exitInput(NiloScriptParser::InputContext *ctx) = 0;

  virtual void enterInCase(NiloScriptParser::InCaseContext *ctx) = 0;
  virtual void exitInCase(NiloScriptParser::InCaseContext *ctx) = 0;

  virtual void enterLoop(NiloScriptParser::LoopContext *ctx) = 0;
  virtual void exitLoop(NiloScriptParser::LoopContext *ctx) = 0;

  virtual void enterFunction(NiloScriptParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(NiloScriptParser::FunctionContext *ctx) = 0;

  virtual void enterFunctionCall(NiloScriptParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(NiloScriptParser::FunctionCallContext *ctx) = 0;

  virtual void enterList(NiloScriptParser::ListContext *ctx) = 0;
  virtual void exitList(NiloScriptParser::ListContext *ctx) = 0;

  virtual void enterAcessList(NiloScriptParser::AcessListContext *ctx) = 0;
  virtual void exitAcessList(NiloScriptParser::AcessListContext *ctx) = 0;


};

