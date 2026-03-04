#include "../antlr/NiloLogVisitor.h"
#include "iostream"
#include "./treeStructure.h"

using namespace std;

class AST : public NiloLogVisitor {
    public:
        unique_ptr<Log> ASTtree(NiloLogParser::LogContext* tree) {
            Log* log = std::any_cast<Log*>(visitLog(tree));
            return unique_ptr<Log>(log);
        }

    virtual std::any visitLog(NiloLogParser::LogContext *context) override {
        cout << "ENTROU NO LOG " << context->getText() << endl;
        
        Input* input; 
        if (context->input()){
            input = any_cast<Input*>(visitInput(context->input()));
        }
        
        Program* program= any_cast<Program*>(visitProgram(context->program()));

        Log* log = new Log(context->PHASE()->getText(), unique_ptr<Program>(program), unique_ptr<Input>(input));

        return log;
    };

    virtual std::any visitInput(NiloLogParser::InputContext *context) override {
        cout << "ENTROU NO INPUT " << context->getText() << endl;
        int value = context->children.size();
        vector<unique_ptr<Expression>> values;

        for (int i = 3; i < value; i++){
            int child = dynamic_cast<antlr4::tree::TerminalNode*>(context->children[i])->getSymbol()->getType();
            
            string text = context->children[i]->getText();

            if (child == NiloLogParser::STRING){
                values.push_back(make_unique<StringType>(text));
            }
            else if (child == NiloLogParser::FLOAT){
                values.push_back(make_unique<FloatType>(stof(text)));
            }
            else if (child == NiloLogParser::INT){
                values.push_back(make_unique<IntType>(stoi(text)));
            }
            else if (child == NiloLogParser::BOOL){
                bool boleano;
                if (text == "verdadeiro"){
                    bool boleano = true;
                }
                else {
                    bool boleano = false;
                }
                values.push_back(make_unique<BoolType>(boleano));
            }
            else {
                cerr << "Error: Tipo não existente." << endl;
                exit(1);
            }

            if (context->children[i] == context->CKEY()) break;
        }
        
        return new Input(std::move(values));
    };

    virtual std::any visitProgram(NiloLogParser::ProgramContext *context) override {
        cout << "ENTROU NO PROGRAM " << context->getText() << endl;
        string niloCode = context->NILOCODE()->getText();

        return new Program(niloCode);
    };
};