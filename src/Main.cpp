#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "./antlr/NiloScriptParser.h"
#include "./antlr/NiloScriptLexer.h"
// #include "./antlr/codegen.h"

using namespace std;
using namespace antlr4;

void printParseTree(antlr4::tree::ParseTree* node, std::string indent = "", bool last = true) {
    if (!node) return;

    std::cout << indent << (last ? "└── " : "├── ");

    std::string text = antlrcpp::escapeWhitespace(node->getText(), false);
    std::cout << text << std::endl;

    indent += last ? "    " : "│   ";

    for (size_t i = 0; i < node->children.size(); i++) {
        printParseTree(node->children[i], indent, i == node->children.size() - 1);
    }
}

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

    std::cout << tree->toStringTree() << std::endl;

    printParseTree(tree);
    
    // CodeGen visit(tree);

    return 0; 
}
