#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "./antlr/NiloScriptParser.h"
#include "./antlr/NiloScriptLexer.h"


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

    //Add the visitor call

    return 0; 
}