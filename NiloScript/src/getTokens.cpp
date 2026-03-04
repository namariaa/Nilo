#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "./antlr/NiloScriptParser.h"
#include "./antlr/NiloScriptLexer.h"
#include "./antlr/IRGen.h"

using namespace std;
using namespace antlr4;


string main(int nArguments, const char *sourceCode[], string type){
    ifstream readFile(sourceCode[1]);
    if (!readFile){
        cerr << "Cannot open the file you uploaded" << endl;
    }

    ANTLRInputStream fileInArray(readFile);

    NiloScriptLexer lexer(&fileInArray);

    CommonTokenStream tokens(&lexer);

    NiloScriptParser parser(&tokens);

    NiloScriptParser::ProgramContext* tree = parser.program();
    
    IRGen visit(tree);

    if (type == "tokens"){
       return tokens.getText();
    }

    if (type == "tree"){
        return tree->toStringTree();
    }

    if (type == "IR"){
        visit.getExecutable();
    }

    return ""; 
}
