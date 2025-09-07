#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "./antlr/NiloScriptParser.h"
#include "./antlr/NiloScriptLexer.h"
#include "./antlr/visitor.h"


using namespace std;
using namespace antlr4;

int main(int nArguments, const char *sourceCode[]){
    ifstream readFile(sourceCode[1]);
    if (!readFile){
        cerr << "Cannot open the file you uploaded" << endl;
    }

    ANTLRInputStream fileInArray(readFile);

    NiloScriptLexer lexer(&fileInArray);

    CommonTokenStream tokens(&lexer);

    NiloScriptParser parser(&tokens);

    NiloScriptParser::ProgramContext* tree = parser.program();

    Visitor visit(tree);

    return 0; 
}