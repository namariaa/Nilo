#include "iostream"
#include "any"
#include "memory"
#include "vector"
#include "optional"

using namespace std;

//Nó base que só tem um destrutor virtual que recebe um default (que gera um construtor padrão implicitamente). 
// Essa esturura é usada para garantir que a destruição ocorra corretamente (polimorfismo)
// O virtual vai garantir que se eu deletar algo da classe base delete de tudo

class Expression {
    public:
        virtual ~Expression() = default;
};

class StringType : public Expression {
    public:
        string value;
        StringType(string& value) : value(value) {}
};

class VarType : public Expression {
    public:
        string value;
        string type;
        VarType(string& value, string& type) : value(value), type(type) {}
};

class IntType : public Expression {
    public:
        int value;
        IntType(int value) : value(value) {}
};

class FloatType : public Expression {
    public:
        float value;
        FloatType(float value) : value(value) {}
};

class BoolType : public Expression {
    public:
        bool value;
        BoolType(bool value) : value(value) {}
};

class Statstatement : public Expression {
    public:
        unique_ptr<Expression> stmt;
        string stmtName;
    
    Statstatement(string &stmtName, unique_ptr<Expression> stmt) : stmtName(stmtName), stmt(move(stmt)) {}
};

class Program : public Expression {
    public:
        vector<unique_ptr<Statstatement>> stmts;

        Program(vector<unique_ptr<Statstatement>> stmts) : stmts(move(stmts)) {}
};

class Operation : public Expression {
    public:
        string operatorSign;
        unique_ptr<Expression> LHS, RHS;

        Operation(string operatorSign, unique_ptr<Expression> LHS, unique_ptr<Expression> RHS) : operatorSign(operatorSign), LHS(move(LHS)), RHS(move(RHS)) {}
};

class Print : public Expression {
    public:
        string type;
        unique_ptr<Expression> arg;
        string valueName;
        
        Print(string &type,  unique_ptr<Expression> arg, string valueName) : type(type), arg(move(arg)), valueName(valueName) {}
};

class Input : public Expression {
    public:
        string type;

        Input(string &type) : type(type) {}
};

class Assignment : public Expression {
    public:
        string var;
        string type;
        unique_ptr<Expression> value;
        string valueName;

        Assignment(string &var, string type, unique_ptr<Expression> value, string &valueName) : var(var), type(type) , value(move(value)), valueName(valueName) {}
};

class AssigExpression : public Expression {
    public:
        string var;
        unique_ptr<Expression> value;
        string valueName;

        AssigExpression(string var, unique_ptr<Expression> value, string &valueName) : var(var) , value(move(value)), valueName(valueName) {}
};

class Loop : public Expression {
    public:
        string comparisonSign;
        unique_ptr<Expression> LHS, RHS;
        vector<unique_ptr<Statstatement>> values;

        Loop(string comparisonSign, unique_ptr<Expression> LHS ,unique_ptr<Expression> RHS, vector<unique_ptr<Statstatement>> values) : comparisonSign(comparisonSign), LHS(move(LHS)), RHS(move(RHS)), values(move(values)) {}
};

class ThenInCase : public Expression {
    public: 
        vector<unique_ptr<Statstatement>> values;

        ThenInCase(vector<unique_ptr<Statstatement>> values) : values(move(values)) {}
};

class InCase : public Expression {
    public: 
        string comparisonSign;
        unique_ptr<Expression> LHS, RHS;
        vector<unique_ptr<Statstatement>> values;
        unique_ptr<ThenInCase> then;

        InCase(string comparisonSign, unique_ptr<Expression> LHS ,unique_ptr<Expression> RHS, vector<unique_ptr<Statstatement>> values, unique_ptr<ThenInCase> then) : comparisonSign(comparisonSign), LHS(move(LHS)), RHS(move(RHS)), values(move(values)), then(move(then)) {}
};



class FunctionCall : public Expression {
    public:
        string functionName;
        vector<string> args;

        FunctionCall(string &functionName, vector<string> args) : functionName(functionName) , args(args) {}
};

class Function : public Expression {
    public:
        string name;
        string returnType;
        vector<string> argsNames;
        vector<string> argsTypes;
        unique_ptr<Expression> value;
        vector<unique_ptr<Statstatement>> values;

        Function(string &name, string &returnType ,vector<string> argsNames, vector<unique_ptr<Statstatement>> values, vector<string> argsTypes, unique_ptr<Expression> value) : name(name), returnType(returnType) , argsNames(argsNames), values(move(values)), argsTypes(argsTypes), value(move(value)) {} 
};

class List : public Expression {
    public:
        string listName;
        int nElements;
        string type;
        vector<unique_ptr<Expression>> values;

        List(string &listName, int nElements, string &type, vector<unique_ptr<Expression>> values) : listName(listName) , nElements(nElements), type(type) , values(move(values)) {}
};

class AcessList : public Expression {
    public:
        string listName;
        int index;

        AcessList(string &listName, int index) : listName(listName), index(index) {}
};