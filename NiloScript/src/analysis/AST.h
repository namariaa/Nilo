#include "../antlr/NiloScriptVisitor.h"
#include "../analysis/tree.h"
#include "iostream"
#include <variant>
#include "./symbolTable.h"

using namespace std;

// Nome da função, nome da variável, tipo, valor 
string nameCurrentFunction = "main";
string lastVar;
string lastType;

void typesMatch(Expression* lhs, Expression* rhs){
    if (lhs && rhs){
        if (dynamic_cast<Operation*>(lhs) == nullptr && dynamic_cast<Operation*>(rhs) == nullptr){
            if (dynamic_cast<VarType*>(lhs) && dynamic_cast<VarType*>(rhs)){
                cout << "AQUI2222 " << SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(lhs)->value].type << " " << SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(rhs)->value].type << endl;
                if ((SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(lhs)->value].type == "inteiro" && SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(rhs)->value].type != "inteiro") || (SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(lhs)->value].type != "inteiro" && SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(rhs)->value].type == "inteiro")) {
                    cerr << "Error. Operações matemáticas com valores com os tipos diferentes não é possível!" << endl;
                    exit(1);
                }
            }
            else if (dynamic_cast<VarType*>(lhs)){
                cout << "AQUI " << dynamic_cast<VarType*>(lhs)<< " " << dynamic_cast<IntType*>(rhs) << " " << SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(lhs)->value].type << endl;
                if ((SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(lhs)->value].type == "inteiro" && dynamic_cast<IntType*>(rhs) == nullptr) || (SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(lhs)->value].type == "flutuante" && dynamic_cast<IntType*>(rhs) != nullptr)) {
                    cerr << "Error. Operações matemáticas com valores com os tipos diferentes não é possível!" << endl;
                    exit(1);
                }
            }
            else if (dynamic_cast<VarType*>(rhs)){
                if ((SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(rhs)->value].type == "inteiro" && dynamic_cast<IntType*>(lhs) == nullptr) || (SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(rhs)->value].type == "flutuante" && dynamic_cast<IntType*>(lhs) != nullptr)) {
                    cerr << "Error. Operações matemáticas com valores com os tipos diferentes não é possível!" << endl;
                    exit(1);
                }
            }
            else if ((dynamic_cast<IntType*>(lhs) != nullptr && dynamic_cast<IntType*>(rhs) == nullptr) || (dynamic_cast<IntType*>(lhs) == nullptr && dynamic_cast<IntType*>(rhs) != nullptr)) {
                cerr << "Error. Operações matemáticas com valores com os tipos diferentes não é possível!" << endl;
                exit(1);
            }
        }
    }
}

string typeIdentifier(Expression* value){
    cout << "AQUI NO " << dynamic_cast<VarType*>(value) << endl;
    if (dynamic_cast<FloatType*>(value)) return "flutuante";
    else if (dynamic_cast<StringType*>(value)) return "caracter";
    else if (dynamic_cast<BoolType*>(value)) return "bool";
    else if (dynamic_cast<VarType*>(value)) return SymbolTable[nameCurrentFunction][dynamic_cast<VarType*>(value)->value].type;
    else if (dynamic_cast<Operation*>(value)) return typeIdentifier(dynamic_cast<Operation*>(value)->LHS.get());
    return "inteiro";
}

class AST : public NiloScriptVisitor {
    public:
        unique_ptr<Program> ASTtree(NiloScriptParser::ProgramContext* tree) {
            Program* program = any_cast<Program*>(visitProgram(tree));
            return unique_ptr<Program>(move(program));
        }

    virtual std::any visitProgram(NiloScriptParser::ProgramContext *context) override {
        vector<unique_ptr<Statstatement>> stmts;

        for(NiloScriptParser::StmtContext *stm : context->stmt()){
            Statstatement* stmt = any_cast<Statstatement*>(visitStmt(stm));
            stmts.push_back(unique_ptr<Statstatement>(stmt));
        }

        Program* program = new Program(move(stmts));
        return program; 
    };

    virtual std::any visitStmt(NiloScriptParser::StmtContext *context) override {
        if (context->assignment() && !context->assignment()->RETURN_TYPE()){
           cerr << "Error. O tipo da variável não existe!" << endl;
            exit(1);
        }

        if ((context->print() != nullptr || context->assignment() != nullptr || context->functionCall() != nullptr || context->list() != nullptr || context->expression() != nullptr) && context->SC()->getText() == "<missing ';'>"){
           cerr << "Error. É necessário colocar ; em todo fim de expressão!" << endl;
            exit(1);
        }

        string stmtName;
        Statstatement* stmt;
        cout << "STATEMENT " << context->getText() << endl;

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
        lastVar = var;
        SymbolTable[nameCurrentFunction][var].value = nullptr;
        SymbolTable[nameCurrentFunction][var].type = type;

        if (type != "inteiro" && type != "inteiro" && type != "flutuante" && type != "caracter" && type != "bool") {
            cerr << "Error. Tipo não reconhecido!" << endl;
            exit(1);
        }
      
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
        cout << "TIPOS " << type << " " << lastType << endl;
        if (type !=  lastType){
            cerr << "Error. O tipo da variável não corresponde com o valor atribuido!" << endl;
            exit(1);
        }

        Assignment* assig = new Assignment(var, type, unique_ptr<Expression>(value), valueName);
        return assig;
    };

    virtual std::any visitExpression(NiloScriptParser::ExpressionContext *context) override {
        string var = context->VAR()->getText();
        lastVar = var;

        if (SymbolTable[nameCurrentFunction][var].type == ""){
            cerr << "Error. Não foi possível atribuir um valor a uma varíavel que não foi associada a um tipo!" << endl;
            exit(1);
        }
     
        Expression* value;
        string valueName;
        string oldType = SymbolTable[nameCurrentFunction][var].type;

        if (context->term() != nullptr) {
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

        if (SymbolTable[nameCurrentFunction][var].type != oldType){   
            cerr << "Error. Não foi possível atribuir variavéis em que o tipo é diferente do novo valor a ser atribuido!" << endl;
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

            typesMatch(lhs, rhs);
    
            Expression* result;
            if (context->children[1]->getText() == "+"){
                result = new Operation("+", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            else if (context->children[1]->getText() == "-"){
                result = new Operation("-", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            else {
                cerr << "Error. Operador matemática não reconhecido" << endl;
                exit(1);
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

            typesMatch(lhs, rhs);
    
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
            else {
                cerr << "Error. Operador matemático não reconhecido" << endl;
                exit(1);
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

            typesMatch(lhs, rhs);
        
            Expression* result;
            if (context->children[1]->getText() == "**"){
                result = new Operation("**", unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)));
            }
            else {
                cerr << "Error. Operador matemático não reconhecido" << endl;
                exit(1);
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
        else{
            cerr << "Error. Os parenteses não estão corretos!" << endl;
            exit(1);
            return nullptr;
        }
        return nullptr;
    };

    virtual std::any visitTypeSpecifier(NiloScriptParser::TypeSpecifierContext *context) override {
        if (context->INT()){
            cout << "INT " << context->getText() << endl;
            Expression* inteiro = new IntType(stoi(context->INT()->getText()));
            lastType = "inteiro";
            return inteiro;
        }
        else if (context->VAR()){
            cout << "VAR " << context->getText() << " " << lastType << endl;
            string var = context->VAR()->getText();
            Expression* caracter = new VarType(var, lastType);
            lastType = SymbolTable[nameCurrentFunction][var].type;

            if (SymbolTable[nameCurrentFunction][var].type == ""){
                cout << "Error. A variável " + var + " não foi declarada!" << endl;
                exit(1);
            }
            return caracter;
        }
        else if (context->STRING()){
            cout << "ACESS STRING " << context->getText() <<endl;
            lastType = "caracter";
            string cara = context->STRING()->getText();
            Expression* caracter = new StringType(cara);
            return caracter;
        }
        else if (context->FLOAT()){
            cout << "É FLOAT" << endl;
            lastType = "flutuante";
            Expression* flutuante = new  FloatType(stof(context->FLOAT()->getText()));
            return flutuante;
        }
        else if (context->BOOL()){
            cout << "É BOOL " << context->BOOL()->getText() << endl;
            bool value;
            lastType = "bool";
            if (context->BOOL()->getText() == "verdadeiro") value = true;
            else if (context->BOOL()->getText() == "falso") value = false;
            else{
                cerr << "Error. Não foi possível reconhecer o booleano!" << endl;
                exit(1);
            }
            Expression* boleano = new  BoolType(value);
            return boleano;
        }
        else {
            cerr << "Error. Não foi possível reconhecer uma instrução!" << endl;
            exit(1);
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
        else {
            cerr << "Error. Função mostrar não reconhecida!" << endl;
            exit(1);
        }

        if (context->children.size() != 4){
            cerr << "Error. A declaração do mostrar está incorreta!" << endl;
            exit(1);
        }

        Expression* value;
        string valueName;
        string valueType = "inteiro";
        if (context->term()){
           value = any_cast<Expression*>(visitTerm(context->term()));
           valueType = typeIdentifier(value);
           valueName = "operation";
        }
        else if (context->acessList()){
            value = any_cast<Expression*>(visitAcessList(context->acessList()));
            valueType = typeIdentifier(value);
            valueName = "acessList";
        }
        else{
            cerr << "Error. Você precisa colocar algo válido para mostrar" << endl;
            exit(1);
        }
        cout << "BREAK " <<  type << " " << valueType << endl;
        if (type != valueType){
            cerr << "Error. O valor passado não é do mesmo tipo da função mostrar declarada!" << endl;;
            exit(1);
        }

        if (context->children.size() != 4){
            cerr << "Error. A declaração do mostrar está incorreta!" << endl;
            exit(1);
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
        else {
            cerr << "Error. Função de pegar não reconhecida!" << endl;
            exit(1);
        }
        lastType = type;

        Input* pegar = new Input(type);
        return pegar;
    };

    virtual std::any visitInCase(NiloScriptParser::InCaseContext *context) override {
        Expression* lhs = any_cast<Expression*>(visitTerm(context->term()[0]));
        Expression* rhs = any_cast<Expression*>(visitTerm(context->term()[1]));
        string oper = context->OPERATOR()->getText();

        if (!(oper ==  "==" || oper == "!=" || oper == ">" || oper == "<" || oper == ">=" || oper == "<=")){
            cerr << "Error. Operador de comparação não encontrado!" << endl;
            exit(1);
        }

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

        if (!(oper ==  "==" || oper == "!=" || oper == ">" || oper == "<" || oper == ">=" || oper == "<=")){
            cerr << "Error. Operador de comparação não encontrado!" << endl;
            exit(1);
        }
        vector<unique_ptr<Statstatement>> values;
        for (NiloScriptParser::StmtContext *stm : context->stmt()) {
            cout << "VALUES 1" << endl;
            Statstatement* stmt = any_cast<Statstatement*>(visitStmt(stm));
            values.push_back(unique_ptr<Statstatement>(stmt));
        }
        cout << "VALUES 2" << endl;

        Loop* result = new Loop(oper, unique_ptr<Expression>(move(lhs)), unique_ptr<Expression>(move(rhs)), move(values));
       
        return result;
    };

    virtual std::any visitFunction(NiloScriptParser::FunctionContext *context) override {
        string var = context->functionName->getText();
        string oldFunctionName = nameCurrentFunction;
        nameCurrentFunction = var;
        string returnType = context->typeFunction->getText();
        SymbolTable[nameCurrentFunction][var].nArgs = context->RETURN_TYPE().size() - 1;
        SymbolTable[nameCurrentFunction][var].type = returnType;

        vector<string> params;
        vector<string> argsTypes;
        for (int i = 1; i < context->VAR().size(); i++){
            string arg = context->VAR()[i]->getText();
            params.push_back(arg);
            argsTypes.push_back(context->RETURN_TYPE()[i - 1]->getText());
            if (context->RETURN_TYPE()[i - 1]->getText() != "inteiro" && context->RETURN_TYPE()[i - 1]->getText() != "inteiro" && context->RETURN_TYPE()[i - 1]->getText() != "flutuante" && context->RETURN_TYPE()[i - 1]->getText() != "caracter" && context->RETURN_TYPE()[i - 1]->getText() != "bool") {
                cerr << "Error. Tipo não reconhecido!" << endl;
                exit(1);
            }
            SymbolTable[nameCurrentFunction][arg].type = argsTypes.back();
            if (context->children[i + 8]->getText() == ")") break; //Pois os argumentos acabaram
        }

        string type = context->typeFunction->getText();
        if (!(type == "inteiro" || type == "flutuante" || type == "caracter" || type == "bool" || type == "nada")){
            cerr << "Error. Tipo da função não reconhecido!" << endl;
            exit(1);
        } 

        vector<unique_ptr<Statstatement>> values;
        for (NiloScriptParser::StmtContext* stm : context->stmt()){
            if(context->stmt().front()->function()){
               cerr << "Error. Não é possível declarar uma função dentro de outra!" << endl;
                exit(1);
            }
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

        nameCurrentFunction = oldFunctionName;

        Function* funcao = new Function(var, returnType, params, move(values), argsTypes, unique_ptr<Expression>(value));
        return funcao;
    };

    virtual std::any visitFunctionCall(NiloScriptParser::FunctionCallContext *context) override {
        string var = context->functionName->getText();
        lastType = SymbolTable[var][var].type;

        vector<string> params;
        for (int i = 1; i < context->VAR().size(); i++){
            string arg = context->VAR()[i]->getText();
            params.push_back(arg);

            if (SymbolTable[nameCurrentFunction][arg].type == ""){
                cerr << "Error. O parametro " + arg + " não foi declarado!" << endl;
                exit(1);
            }
        }

        if (SymbolTable[var][var].nArgs != params.size()){
            cerr << "Error. O número de argumentos não correspondem a quatidade de parametros necessários na função!" << endl;
            exit(1);
        }

        FunctionCall* call = new FunctionCall(var, params);
        return call;
    };

    virtual std::any visitList(NiloScriptParser::ListContext *context) override {
        int nElements = std::stoi(context->nElements->getText());
        string var = context->VAR()->getText();
        string type = context->RETURN_TYPE()->getText();
        SymbolTable[nameCurrentFunction][var].nArgs = nElements;
        SymbolTable[nameCurrentFunction][var].type = type;
        
        int qElementosInput = 0;
        if (context->RETURN_TYPE()->getText() == "inteiro" && context->INT().size() > 0 && nElements > 0){
           qElementosInput = context->INT().size() - 1;
        }
        else if (context->RETURN_TYPE()->getText() == "flutuante" && context->FLOAT().size() > 0 && nElements > 0){
           qElementosInput = context->FLOAT().size();
        }
        else if (context->RETURN_TYPE()->getText() == "bool" && context->BOOL().size() > 0 && nElements > 0){
           qElementosInput = context->BOOL().size();
        }
        else {
            cerr << "Error. Tipo da lista não reconhecido!" << endl;
            exit(1);
        }

        vector<unique_ptr<Expression>> values;
        for (int i = 0; i < nElements; i++) {
            if (context->RETURN_TYPE()->getText() == "inteiro"){
                cout << "SIZE " <<context->INT().size() << endl;
                if (context->INT().size() - 1 <= i){
                    cerr << "Error. Tipo do parametro não correspondente ao tipo da função!" << endl;
                    exit(1);
                }
                values.push_back(make_unique<IntType>(stoi(context->INT()[i + 1]->getText())));
            }
            else if (context->RETURN_TYPE()->getText() == "flutuante"){
                if (context->FLOAT().size() <= i){
                    cerr << "Error. Tipo do parametro não correspondente ao tipo da função!" << endl;
                    exit(1);
                }
                values.push_back(make_unique<FloatType>(stof(context->FLOAT()[i]->getText())));
            }
            else if (context->RETURN_TYPE()->getText() == "bool"){
                if (context->BOOL().size() <= i){
                    cerr << "Error. Tipo do parametro não correspondente ao tipo da função!" << endl;
                    exit(1);
                }
                if (context->BOOL()[i]->getText() == "verdadeiro"){
                    values.push_back(make_unique<BoolType>(true));
                }
                else if (context->BOOL()[i]->getText() == "falso"){
                    values.push_back(make_unique<BoolType>(false));
                }
                else{
                    cerr << "Error. Booleano errado!" << endl;
                    exit(1);
                }
            }
            else {
                cerr << "Error. Tipo da lista não reconhecido!" << endl;
                exit(1);
            }
        }

        if (qElementosInput != nElements){
            cerr << "Error. A quatidade de elementos e o tamanho declarado na lista não correspondem ou o tipo dos elementos não corresponde ao tipo da variável declarada!!" << endl;
            exit(1);
        }

        List* lista = new List(var, nElements, type, move(values));
        return lista;
    };

    virtual std::any visitAcessList(NiloScriptParser::AcessListContext *context) override {
        int index = std::stoi(context->INT()->getText());
        string var = context->VAR()->getText();
        lastType = SymbolTable[nameCurrentFunction][var].type;
        cout << "AAA " << nameCurrentFunction << " " << var << " " << SymbolTable[nameCurrentFunction][var].type << endl;

        if (std::stoi(context->INT()->getText()) >= SymbolTable[nameCurrentFunction][var].nArgs){
            cerr << "Error. A posição fornecida ultrapassa a quatidade de elemento do array!" << endl;
            exit(1);
        }

        if (std::stoi(context->INT()->getText()) < 0){
            cerr << "Error. A posição deve ser números positivos dentro do limite da lista!" << endl;
            exit(1);
        }

        AcessList* acesso = new AcessList(var, index);
        return acesso;
    };
};