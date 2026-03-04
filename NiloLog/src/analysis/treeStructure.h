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

class Input : public Expression {
    vector<unique_ptr<Expression>> args;

    public: 
        Input(vector<unique_ptr<Expression>> args) : args(move(args)) {}

        vector<unique_ptr<Expression>> getArgs() {
            return move(this->args);
        }
};

class Program : public Expression {
    string niloCode;

    public: 
        Program(string niloCode) : niloCode(niloCode) {}

        string getNiloCode() {
            return this->niloCode;
        }
};

class Log : public Expression {
    string fase;
    unique_ptr<Input> input;
    unique_ptr<Program> program;

    public: 
        Log(string fase, unique_ptr<Program> program, unique_ptr<Input> input = nullptr) : fase(fase), program(move(program)), input(move(input)) {}

        string getFase() {
            return this->fase;
        }
        unique_ptr<Input> getInput() {
            return move(this->input);
        }
        unique_ptr<Program> getProgram() {
            return move(this->program);
        }
};
