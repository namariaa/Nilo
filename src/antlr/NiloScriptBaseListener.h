
// Generated from NiloScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloScriptListener.h"


/**
 * This class provides an empty implementation of NiloScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NiloScriptBaseListener : public NiloScriptListener {
public:

  virtual void enterProgram(NiloScriptParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(NiloScriptParser::ProgramContext * /*ctx*/) override { }

  virtual void enterCode(NiloScriptParser::CodeContext * /*ctx*/) override { }
  virtual void exitCode(NiloScriptParser::CodeContext * /*ctx*/) override { }

  virtual void enterAssignment(NiloScriptParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(NiloScriptParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(NiloScriptParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(NiloScriptParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterTerm(NiloScriptParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(NiloScriptParser::TermContext * /*ctx*/) override { }

  virtual void enterPot(NiloScriptParser::PotContext * /*ctx*/) override { }
  virtual void exitPot(NiloScriptParser::PotContext * /*ctx*/) override { }

  virtual void enterFact(NiloScriptParser::FactContext * /*ctx*/) override { }
  virtual void exitFact(NiloScriptParser::FactContext * /*ctx*/) override { }

  virtual void enterPrint(NiloScriptParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(NiloScriptParser::PrintContext * /*ctx*/) override { }

  virtual void enterInCase(NiloScriptParser::InCaseContext * /*ctx*/) override { }
  virtual void exitInCase(NiloScriptParser::InCaseContext * /*ctx*/) override { }

  virtual void enterInput(NiloScriptParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(NiloScriptParser::InputContext * /*ctx*/) override { }

  virtual void enterLoop(NiloScriptParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(NiloScriptParser::LoopContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

