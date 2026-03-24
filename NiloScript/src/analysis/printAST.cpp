#include <iostream>

using namespace std;

static void indent(int n){
    for(int i=0;i<n;i++) cout << "  ";
}

static void printExpression(Expression* expr, int level);

static void printStatement(Statstatement* stmt, int level){

    indent(level);
    cout << "Statement: " << stmt->stmtName << endl;

    if(stmt->stmt){
        printExpression(stmt->stmt.get(), level+1);
    }
}

static void printExpression(Expression* expr, int level){

    if(!expr) return;

    if(auto i = dynamic_cast<IntType*>(expr)){
        indent(level);
        cout << "Int: " << i->value << endl;
    }

    else if(auto f = dynamic_cast<FloatType*>(expr)){
        indent(level);
        cout << "Float: " << f->value << endl;
    }

    else if(auto b = dynamic_cast<BoolType*>(expr)){
        indent(level);
        cout << "Bool: " << b->value << endl;
    }

    else if(auto s = dynamic_cast<StringType*>(expr)){
        indent(level);
        cout << "String: " << s->value << endl;
    }

    else if(auto v = dynamic_cast<VarType*>(expr)){
        indent(level);
        cout << "Var: " << v->value << endl;
    }

    else if(auto op = dynamic_cast<Operation*>(expr)){
        indent(level);
        cout << "Operation: " << op->operatorSign << endl;

        if(op->LHS) printExpression(op->LHS.get(), level+1);
        if(op->RHS) printExpression(op->RHS.get(), level+1);
    }

    else if(auto p = dynamic_cast<Print*>(expr)){
        indent(level);
        cout << "Print (" << p->type << ")" << endl;

        printExpression(p->arg.get(), level+1);
    }
    
    else if(auto a = dynamic_cast<Assignment*>(expr)){
        indent(level);
        cout << "Assignment: " << a->var << " : " << a->type << endl;

        printExpression(a->value.get(), level+1);
    }

    else if(auto e = dynamic_cast<AssigExpression*>(expr)){
        indent(level);
        cout << "AssignExpression -> " << e->var << endl;

        printExpression(e->value.get(), level+1);
    }

    else if(auto l = dynamic_cast<Loop*>(expr)){
        indent(level);
        cout << "Loop (" << l->comparisonSign << ")" << endl;

        printExpression(l->LHS.get(), level+1);
        printExpression(l->RHS.get(), level+1);

        for(auto &s : l->values)
            printStatement(s.get(), level+1);
    }

    else if(auto c = dynamic_cast<InCase*>(expr)){
        indent(level);
        cout << "If (" << c->comparisonSign << ")" << endl;

        printExpression(c->LHS.get(), level+1);
        printExpression(c->RHS.get(), level+1);

        for(auto &s : c->values)
            printStatement(s.get(), level+1);

        if(c->then){
            indent(level);
            cout << "Else" << endl;

            for(auto &s : c->then->values)
                printStatement(s.get(), level+1);
        }
    }

    else if(auto fc = dynamic_cast<FunctionCall*>(expr)){
        indent(level);
        cout << "FunctionCall: " << fc->functionName << endl;

        for(auto &arg : fc->args){
            indent(level+1);
            cout << "Arg: " << arg << endl;
        }
    }

    else if(auto fn = dynamic_cast<Function*>(expr)){
        indent(level);
        cout << "Function: " << fn->name << endl;

        indent(level+1);
        cout << "Return: " << fn->returnType << endl;

        for(auto &s : fn->values)
            printStatement(s.get(), level+1);
    }

    else if(auto list = dynamic_cast<List*>(expr)){
        indent(level);
        cout << "List: " << list->listName << endl;

        for(auto &v : list->values)
            printExpression(v.get(), level+1);
    }

    else if(auto ac = dynamic_cast<AcessList*>(expr)){
        indent(level);
        cout << "AccessList: " << ac->listName
             << "[" << ac->index << "]" << endl;
    }

    else{
        indent(level);
        cout << "Unknown node" << endl;
    }
}

void printAST(Program* program){

    cout << "\n===== AST =====\n";

    for(auto &stmt : program->stmts){
        printStatement(stmt.get(),1);
    }

    cout << "===============\n";
}