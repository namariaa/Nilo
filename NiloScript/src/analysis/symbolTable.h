#include <map>
#include <string>
#include "llvm/IR/IRBuilder.h"

using namespace std;

#ifndef TipoValorH
#define TipoValorH


class TipoValor{
    public: 
    string type = "";
    llvm::AllocaInst* value;
    int nArgs;
    TipoValor() = default;
    TipoValor(string type, llvm::AllocaInst* value, int nArgs): type(type), value(value), nArgs(nArgs) {}
};
#endif

extern map<string,map<string,TipoValor>> SymbolTable;
