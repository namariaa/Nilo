
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloLogListener.h"


/**
 * This class provides an empty implementation of NiloLogListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NiloLogBaseListener : public NiloLogListener {
public:

  virtual void enterLog(NiloLogParser::LogContext * /*ctx*/) override { }
  virtual void exitLog(NiloLogParser::LogContext * /*ctx*/) override { }

  virtual void enterInput(NiloLogParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(NiloLogParser::InputContext * /*ctx*/) override { }

  virtual void enterProgram(NiloLogParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(NiloLogParser::ProgramContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

