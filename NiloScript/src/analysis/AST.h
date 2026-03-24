#include "../antlr/NiloScriptVisitor.h"
#include "../analysis/tree.h"
#include "iostream"

using namespace std;

class AST : public NiloScriptVisitor {
    public:
        unique_ptr<Program> ASTtree(NiloScriptParser::ProgramContext* tree) {
            Program* program = any_cast<Program*>(visitProgram(tree));
            return unique_ptr<Program>(move(program));
        }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        cout << "ENTROU NO PROGRAM " << context->getText() << endl;
        vector<unique_ptr<Statstatement>> stmts;

        for(NiloScriptParser::StmtContext *stm : context->stmt()){
            Statstatement* stmt = any_cast<Statstatement*>(visitStmt(stm));
            stmts.push_back(unique_ptr<Statstatement>(stmt));
        }

        Program* program = new Program(move(stmts));
        return program; 
    };

    virtual std::any visitStmt(NiloScriptParser::StmtContext *context) override {
        cout << "ENTROU NO STM " << context->getText() << endl;

        string stmtName;
        Statstatement* stmt;

        if (context->print() != nullptr){
            stmtName = "print";
            Print* p = any_cast<Print*>(visitPrint(context->print()));
            stmt = new Statstatement(stmtName, unique_ptr<Print>(move(p)));
        }
        else if (context->assignment() != nullptr){
            stmtName = "assignment";
            Assignment* a = any_cast<Assignment*>(visitAssignment(context->assignment()));
            stmt = new Statstatement(stmtName, unique_ptr<Assignment>(move(a)));
        }
        else if (context->loop() != nullptr){
            stmtName = "loop";
            Loop* l = any_cast<Loop*>(visitLoop(context->loop()));
            stmt = new Statstatement(stmtName, unique_ptr<Loop>(move(l)));
        }
        else if (context->inCase() != nullptr){
            stmtName = "inCase";
            InCase* i = any_cast<InCase*>(visitInCase(context->inCase()));
            stmt = new Statstatement(stmtName, unique_ptr<InCase>(move(i)));
        }
        else if (context->function() != nullptr){
            stmtName = "function";
            Function* f = any_cast<Function*>(visitFunction(context->function()));
            stmt = new Statstatement(stmtName, unique_ptr<Function>(move(f)));
        }
        else if (context->functionCall() != nullptr){
            stmtName = "functionCall";
            FunctionCall* fc = any_cast<FunctionCall*>(visitFunctionCall(context->functionCall()));
            stmt = new Statstatement(stmtName, unique_ptr<FunctionCall>(move(fc)));
        }
        else if (context->list() != nullptr){
            stmtName = "list";
            List* l = any_cast<List*>(visitList(context->list()));
            stmt = new Statstatement(stmtName, unique_ptr<List>(move(l)));
        }
        else if (context->expression() != nullptr){
            stmtName = "expression";
            AssigExpression* a = any_cast<AssigExpression*>(visitExpression(context->expression()));
            stmt = new Statstatement(stmtName, unique_ptr<AssigExpression>(move(a)));
        }
        else if (context->COMMENT() != nullptr){
            return nullptr;
        }
        else{
            cerr << "Error. Expressão não reconhecida!" << endl;
            exit(1);
        }
        return stmt;
    };

    virtual std::any visitAssignment(NiloScriptParser::AssignmentContext *context) override {
        string var = context->VAR()->getText();
        string type = context->RETURN_TYPE()->getText();
      
        Expression* value;
        string valueName;

        if (context->term() != nullptr){
            if (!context->term()->term() && context->term()->fact()){
                Expression* v = any_cast<Expression*>(visitTerm(context->term()));
                value = new Operation("", unique_ptr<Expression>(v), nullptr);
            }
            else {
                value = dynamic_cast<Operation*>(any_cast<Expression*>(visitTerm(context->term())));
            }
            valueName = "operation";
        } 
        else if (context->input() != nullptr) {
            value = any_cast<Input*>(visitInput(context->input()));
            valueName = "input";
        }
        else if (context->acessList() != nullptr) {
            value = any_cast<AcessList*>(visitAcessList(context->acessList()));
            valueName = "acessList";
        }
        else if (context->functionCall() != nullptr) {
            value = any_cast<FunctionCall*>(visitFunctionCall(context->functionCall()));
            valueName = "functionCall";
        }
        else {
            cerr << "Error. Não foi possível associar a variável com essa expressão!" << endl;
            exit(1);
        }

        cout << "AAAAAAAAAAAAA 1" << endl;
        Assignment* assig = new Assignment(var, type, unique_ptr<Expression>(value), valueName);
        cout << "AAAAAAAAAAAAA 2" << endl;

        return assig;
    };

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        string var = context->VAR()->getText();
     
        Expression* value;
        string valueName;

        if (context->term() != nullptr) {
            // context->fact() && !context->term()
            if (!context->term()->term() && context->term()->fact()){
                Expression* v = any_cast<Expression*>(visitTerm(context->term()));
                value = new Operation("", unique_ptr<Expression>(v), nullptr);
            }
            else {
                value = dynamic_cast<Operation*>(any_cast<Expression*>(visitTerm(context->term())));
            }
            valueName = "operation";
        }
        else if (context->input() != nullptr) {
            value = any_cast<Input*>(visitInput(context->input()));
            valueName = "input";
        }
        else if (context->acessList() != nullptr) {
            value = any_cast<AcessList*>(visitAcessList(context->acessList()));
            valueName = "acessList";
        }
        else if (context->functionCall() != nullptr) {
            value = any_cast<FunctionCall*>(visitFunctionCall(context->functionCall()));
            valueName = "functionCall";
        }
        else {
            cerr << "Error. Não foi possível associar a variável com essa expressão!" << endl;
            exit(1);
        }

        AssigExpression* expr = new AssigExpression(var, unique_ptr<Expression>(value), valueName);

        return expr;
    };

    virtual std::any visitTerm(NiloScriptParser::TermContext *context) override {
        if (context->fact() && !context->term()){
            return visitFact(context->fact());
        }
        else{
            Expression* lhs = any_cast<Expression*>(visitTerm(context->term()));
            Expression* rhs = any_cast<Expression*>(visitFact(context->fact()));
    
            Expression* result;
            if (context->children[1]->getText() == "+"){
                result = new Operation("+", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            else if (context->children[1]->getText() == "-"){
                result = new Operation("-", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            return result;
        }
    };

    virtual std::any visitFact(NiloScriptParser::FactContext *context) override {
        if (context->expo() && !context->fact()){
            return visitExpo(context->expo());
        }
        else{
            Expression* lhs = any_cast<Expression*>(visitFact(context->fact()));
            Expression* rhs = any_cast<Expression*>(visitExpo(context->expo()));
    
            Expression* result;
            if (context->children[1]->getText() == "/"){
                result = new Operation("/", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            else if (context->children[1]->getText() == "*"){
                result = new Operation("*", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            else if (context->children[1]->getText() == "%"){
                result = new Operation("%", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            return result;
        }
    };

    virtual std::any visitExpo(NiloScriptParser::ExpoContext *context) override {
        if (context->opPar() && !context->expo()){
            auto x = visitOpPar(context->opPar());
            return visitOpPar(context->opPar());
        }
        else{
            Expression* lhs = any_cast<Expression*>(visitExpo(context->expo()));
            Expression* rhs = any_cast<Expression*>(visitOpPar(context->opPar()));
    
            Expression* result;
            if (context->children[1]->getText() == "**"){
                result = new Operation("**", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            return result;
        }
    };

    virtual std::any visitOpPar(NiloScriptParser::OpParContext *context) override {
        if (context->typeSpecifier()){
            return visitTypeSpecifier(context->typeSpecifier());
        }
        else if (context->children[0] == context->OPAR() && context->children[2] == context->CPAR()){
            return visitTerm(context->term());
        }
        return nullptr;
    };

    virtual std::any visitTypeSpecifier(NiloScriptParser::TypeSpecifierContext *context) override {
        if (context->INT()){
            cout << "INT " << context->getText() << endl;
            Expression* inteiro = new IntType(stoi(context->INT()->getText()));
            return inteiro;
        }
        else if (context->VAR()){
            cout << "VAR " << context->getText() << endl;
            string var = context->VAR()->getText();
            Expression* caracter = new VarType(var);
            return caracter;
        }
        else if (context->STRING()){
            cout << "ACESS STRING " << context->getText() <<endl;
            string cara = context->STRING()->getText();
            Expression* caracter = new StringType(cara);
            return caracter;
        }
        else if (context->FLOAT()){
            cout << "É FLOAT" << endl;
            Expression* flutuante = new  FloatType(stof(context->FLOAT()->getText()));
            return flutuante;
        }
        else if (context->BOOL()){
            cout << "É BOOL" << endl;
            bool value;
            if (context->BOOL()->getText() == "verdadeiro") value = true;
            else value = false;
            Expression* boleano = new  BoolType(value);
            return boleano;
        }
        else {
            cerr << "Error. Não foi possível reconhecer uma instrução!" << endl;
            return nullptr;
        }
    };

    virtual std::any visitPrint(NiloScriptParser::PrintContext *context) override {
        string type;
        if (context->SHOW()->getText() == "mostrarInteiro"){
            type = "inteiro";
        }
        else if (context->SHOW()->getText() == "mostrarFlutuante"){
            type = "flutuante";
        }
        else if (context->SHOW()->getText() == "mostrarCaracteres"){
            type = "caracter";
        }
        else if (context->SHOW()->getText() == "mostrarBool"){
            type = "bool";
        }

        Expression* value;
        string valueName;
        if (context->term()){
           value = any_cast<Expression*>(visitTerm(context->term()));
           valueName = "operation";
        }
        else if (context->acessList()){
            value = any_cast<Expression*>(visitAcessList(context->acessList()));
            valueName = "acessList";
        }

        Print* mostrar = new Print(type, unique_ptr<Expression>(value), valueName);
        return mostrar;
    };

    virtual std::any visitInput(NiloScriptParser::InputContext *context) override {
        string type;

        if (context->READ()->getText() == "pegaInteiro"){
            type = "inteiro";
        }
        else if (context->READ()->getText() == "pegaFlutuante"){
            type = "flutuante";
        }
        else if (context->READ()->getText() == "pegaCaracteres"){
            type = "caracter";
        }

        Input* pegar = new Input(type);
        return pegar;
    };

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        Expression* lhs = any_cast<Expression*>(visitTerm(context->term()[0]));
        Expression* rhs = any_cast<Expression*>(visitTerm(context->term()[1]));
        string oper = context->OPERATOR()->getText();

        vector<unique_ptr<Statstatement>> values;
        for (NiloScriptParser::StmtContext *stm : context->thenBlock) {
            Statstatement* stmt = any_cast<Statstatement*>(visitStmt(stm));
            values.push_back(unique_ptr<Statstatement>(stmt));
        }

        vector<unique_ptr<Statstatement>> valuesThen;
        ThenInCase* resultElse = nullptr;
        if (context->ELSE()){
            for (NiloScriptParser::StmtContext *stm : context->elseStmt) {
                Statstatement* stmt = any_cast<Statstatement*>(visitStmt(stm));
                valuesThen.push_back(unique_ptr<Statstatement>(stmt));
            }
            resultElse = new ThenInCase(move(valuesThen));
        }

        InCase* result = new InCase(oper, unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)), move(values), unique_ptr<ThenInCase>(move(resultElse)));
       
        return result;
    };

    virtual std::any visitLoop(NiloScriptParser::LoopContext *context) override {
        Expression* lhs = any_cast<Expression*>(visitTerm(context->term()[0]));
        Expression* rhs = any_cast<Expression*>(visitTerm(context->term()[1]));
        string oper = context->OPERATOR()->getText();

        vector<unique_ptr<Statstatement>> values;
        for (NiloScriptParser::StmtContext *stm : context->stmt()) {
            Statstatement* stmt = any_cast<Statstatement*>(visitStmt(stm));
            values.push_back(unique_ptr<Statstatement>(stmt));
        }

        Loop* result = new Loop(oper, unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)), move(values));
       
        return result;
    };

    virtual std::any visitFunction(NiloScriptParser::FunctionContext *context) override {
        string var = context->functionName->getText();

        vector<string> params;
        vector<string> argsTypes;
        for (int i = 1; i < context->VAR().size(); i++){
            string arg = context->VAR()[i]->getText();
            params.push_back(arg);
            argsTypes.push_back(context->RETURN_TYPE()[i - 1]->getText());
            if (context->children[i + 8]->getText() == ")") break; //Pois os argumentos acabaram
        }

        string returnType = context->typeFunction->getText();

        vector<unique_ptr<Statstatement>> values;
        for (NiloScriptParser::StmtContext* stm : context->stmt()){
            Statstatement* stmt = any_cast<Statstatement*>(visitStmt(stm));
            values.push_back(unique_ptr<Statstatement>(stmt));
        }

        Expression* value;
        if (context->term()) {
            auto v = any_cast<Expression*>(visitTerm(context->term()));
            VarType* varValue = dynamic_cast<VarType*>(v);

            if (varValue){
                value = varValue;
            }
            else{
                value = any_cast<Expression*>(v);
            }
        }

        Function* funcao = new Function(var, returnType, params, move(values), argsTypes, unique_ptr<Expression>(value));
        return funcao;
    };

    virtual std::any visitFunctionCall(NiloScriptParser::FunctionCallContext *context) override {
        string var = context->functionName->getText();

        vector<string> params;
        for (int i = 1; i < context->VAR().size(); i++){
            string arg = context->VAR()[i]->getText();
            params.push_back(arg);
        }

        FunctionCall* call = new FunctionCall(var, params);
        return call;
    };

    virtual std::any visitList(NiloScriptParser::ListContext *context) override {
        int nElements = std::stoi(context->nElements->getText());
        string var = context->VAR()->getText();
        string type = context->RETURN_TYPE()->getText();

        vector<unique_ptr<Expression>> values;
        for (int i = 0; i < nElements; i++) {
            if (context->RETURN_TYPE()->getText() == "inteiro"){
                values.push_back(make_unique<IntType>(stoi(context->INT()[i + 1]->getText())));
            }
            else if (context->RETURN_TYPE()->getText() == "flutuante"){
                values.push_back(make_unique<FloatType>(stof(context->FLOAT()[i]->getText())));
            }
            else if (context->RETURN_TYPE()->getText() == "bool"){
                if (context->BOOL()[i]->getText() == "verdadeiro"){
                    values.push_back(make_unique<BoolType>(true));
                }
                else if (context->BOOL()[i]->getText() == "falso"){
                    values.push_back(make_unique<BoolType>(false));
                }
            }
        }

        List* lista = new List(var, nElements, type, move(values));
        return lista;
    };

    virtual std::any visitAcessList(NiloScriptParser::AcessListContext *context) override {
        int index = std::stoi(context->INT()->getText());
        string var = context->VAR()->getText();

        AcessList* acesso = new AcessList(var, index);
        return acesso;
    };
};