
// Generated from NiloLog.g4 by ANTLR 4.9.2

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
    virtual antlrcpp::Any visitStmts(NiloLogParser::StmtsContext *context) = 0;

    virtual antlrcpp::Any visitLog(NiloLogParser::LogContext *context) = 0;

    virtual antlrcpp::Any visitInput(NiloLogParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitProgram(NiloLogParser::ProgramContext *context) = 0;


};

