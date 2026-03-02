
// Generated from NiloLog.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NiloLogParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NiloLogParser.
 */
class  NiloLogVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NiloLogParser.
   */
    virtual std::any visitStmts(NiloLogParser::StmtsContext *context) = 0;

    virtual std::any visitLog(NiloLogParser::LogContext *context) = 0;

    virtual std::any visitInput(NiloLogParser::InputContext *context) = 0;

    virtual std::any visitProgram(NiloLogParser::ProgramContext *context) = 0;


};

