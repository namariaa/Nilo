
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloLogParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NiloLogParser.
 */
class  NiloLogListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmts(NiloLogParser::StmtsContext *ctx) = 0;
  virtual void exitStmts(NiloLogParser::StmtsContext *ctx) = 0;

  virtual void enterLog(NiloLogParser::LogContext *ctx) = 0;
  virtual void exitLog(NiloLogParser::LogContext *ctx) = 0;

  virtual void enterInput(NiloLogParser::InputContext *ctx) = 0;
  virtual void exitInput(NiloLogParser::InputContext *ctx) = 0;

  virtual void enterProgram(NiloLogParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(NiloLogParser::ProgramContext *ctx) = 0;


};

