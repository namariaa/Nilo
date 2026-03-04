#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "./antlr/NiloLogParser.h"
#include "./antlr/NiloLogLexer.h"
#include "./analysis/AST.h"
#include "./analysis/IRGen.h"

using namespace std;
using namespace antlr4;

int main(int nArguments, const char *sourceCode[]){
    ifstream readFile(sourceCode[1]);
    if (!readFile){
        cerr << "Cannot open the file you uploaded" << endl;
    }

    ANTLRInputStream fileInArray(readFile);

    NiloLogLexer lexer(&fileInArray);

    CommonTokenStream tokens(&lexer);

    NiloLogParser parser(&tokens);

    NiloLogParser::LogContext* tree = parser.log();
    
    AST astTree;
    unique_ptr<Log> logLink = astTree.ASTtree(tree);
    cout << "AA " << logLink.get()->getFase() << endl;
    
    // IRGen visit(tree);

    return 0; 
}
