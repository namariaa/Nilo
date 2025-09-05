#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "NiloScriptLexer.h"
#include "NiloScriptParser.h"


using namespace std;
using namespace antlr4;

int main(int qArgumentos, const char *codigoFonte[]){
    ifstream readFile(codigoFonte[1]);
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