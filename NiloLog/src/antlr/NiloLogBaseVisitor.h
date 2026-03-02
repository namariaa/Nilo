
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloLogVisitor.h"


/**
 * This class provides an empty implementation of NiloLogVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NiloLogBaseVisitor : public NiloLogVisitor {
public:

  virtual std::any visitStmts(NiloLogParser::StmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLog(NiloLogParser::LogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInput(NiloLogParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram(NiloLogParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }


};

