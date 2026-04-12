# NiloScript — Documentação convertida para Markdown

## 1. Propósito da linguagem

NiloScript é uma linguagem de programação educativa, criada para apoiar o ensino de conceitos fundamentais de compiladores e programação no curso de Análise e Desenvolvimento de Sistemas do IFRN.

### Motivação

- Reduzir barreiras linguísticas no aprendizado, usando português na sintaxe para aproximar estudantes do código.
- Manter fidelidade aos conceitos fundamentais de programação para permitir transferência de conhecimento para outras linguagens.
- Preencher a lacuna pedagógica que dificulta a compreensão de etapas como análise léxica, sintática e geração de código.

Trecho do documento original:

“Os estudantes do curso de Análise e Desenvolvimento de Sistemas do IFRN apresentam lacunas significativas na formação básica em linguagens de programação.”
“Pretende‑se desenvolver uma linguagem com caráter educativo, denominada NiloScript, que pretende oferecer suporte didático e prático ao processo de aprendizagem.”

## 2. Gramática (resumo)

Gramática ANTLR (NiloScript) — regras principais e tokens.

### 2.1 Regras do parser (selecionadas)

- program : (stmt)+ EOF;
- stmt : print SC | assignment SC | loop | inCase | function | functionCall SC | list SC | expression SC | COMMENT;
- assignment : VAR (COLON RETURN_TYPE) EQUAL (term | input | acessList | functionCall);
- expression : VAR EQUAL (term | acessList | functionCall | input);
- function : 'funcionalidade' functionName=VAR OPAR ... COLON typeFunction=RETURN_TYPE OBRA (stmt)\* (RETURNFUNC (term | returnVar=VAR) SC)? CBRA;
- loop : 'enquanto' OPAR (term OPERATOR term) CPAR OBRA (stmt)+ CBRA;
- inCase : CASE OPAR (term OPERATOR term) CPAR OBRA (thenBlock+=stmt)+ CBRA (ELSE OBRA (elseStmt+=stmt)+ CBRA)?;
- list / acessList : list : VAR OBRA nElements=INT CBRA COLON RETURN_TYPE EQUAL OKEY valuesList ... CKEY;  
  acessList : VAR OKEY INT CKEY;

### 2.2 Tokens e utilitários (selecionados)

- Operadores aritméticos: + - \* / % \*\*
- Operadores relacionais: == != > < >= <=
- Delimitadores: = ( ) { } [ ] ; :
- I/O: READ : 'pegaInteiro' | 'pegaFlutuante' | 'pegaCaracteres';
- SHOW: 'mostrarInteiro' | 'mostrarFlutuante' | 'mostrarCaracteres' | 'mostrarBool';
- Tipos: RETURN_TYPE: ('inteiro' | 'flutuante' | 'caracter' | 'bool' | 'nada');
- Comentários: COMMENT : ':)' ~[\r\n]+ -> skip;

## 3. Exemplos de código

### Exemplo 01 — Atribuição e impressão

```bash
primeiro_teste : inteiro = 2 + 5 - 7;
segundo_teste :inteiro = 2 + 8 - 7;
primeiro_teste = primeiro_teste + segundo_teste;
mostrarInteiro(primeiro_teste) ;
```

> Saída esperada: 3

### Exemplo 02 — Strings

```bash
testeString1 :caracter = "IS FUNNY TEST STRING TYPE IN A PRINT";
mostrarCaracteres(testeString1);
```

> Saída esperada: "IS FUNNY TEST STRING TYPE IN A PRINT"

### Exemplo 03 — Arrays e indexação

```bash
valor1{2} :inteiro = [1 , 2];
primeira :inteiro = valor1[1];
mostrarInteiro(primeira);

valor2{3} :flutuante = [1.22 , 8.2999 ,88.88];
segundo :flutuante = valor2[2];
mostrarFlutuante(segundo);

valor3{2} :bool = [verdadeiro, falso];
terceiro :bool = valor3[0];
mostrarBool(terceiro);
```

> Saída esperada: 2, 88.88, verdadeiro

### Exemplo 04 — Função

```bash
funcionalidade soma (x :inteiro, y :inteiro) :inteiro {
    resultado :inteiro = x + y;
    mostrarCaracteres("test");
    retorne resultado;
}

a :inteiro = pegaInteiro;
b :inteiro = pegaInteiro;
c :inteiro = soma(a, b);
mostrarInteiro(c);
```

### Exemplo 05 — Loop e condicional

```bash
x :inteiro = pegaInteiro;
par :bool = falso;

enquanto (par == falso) {
    x = x + 1;

    caso (x % 2 == 0) {
        par = verdadeiro;
    }
    mostrarCaracteres("UM");
}

mostrarInteiro(x);
```

## 4. Build e execução (Quickstart técnico)

### 4.1 Pré‑requisitos

<table> <tr> <td align="center"> <a href="https://www.antlr.org/" target="_blank"> <img src="https://www.svgrepo.com/show/373431/antlr.svg" alt="ANTLR Logo" width="80"/><br/> <strong>ANTLR4 (runtime C++)</strong> </a> </td> <td align="center"> <a href="https://en.cppreference.com/w/cpp" target="_blank"> <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" alt="C++ Logo" width="80"/><br/> <strong>C++ 20</strong> </a> </td> <td align="center"> <a href="https://cmake.org/documentation/" target="_blank"> <img src="https://upload.wikimedia.org/wikipedia/commons/1/13/Cmake.svg" alt="CMake Logo" width="80"/><br/> <strong>CMake ≥ 3.30</strong> </a> </td>
<td align="center"> <a href="https://en.cppreference.com/w/cpp" target="_blank"> <img src="https://upload.wikimedia.org/wikipedia/en/d/dd/LLVM_logo.png" alt="C++ Logo" width="80"/><br/> <strong>LLVM ≥ 19</strong> </a> </td>
</tr> </table>

#### 4.2 Passos para compilar

1. Configurar build

```bash
cd NiloScript/src/debug
cmake ../..
```

2. Compilar

```bash
make
```

> O executável ns será gerado em src/execute.

### 4.3 Executar um exemplo

```bash
./src/execute/ns ./examples/e05.ns
```

### 4.4 Gerar IR e compilar com clang

Após a geração de IR (executavel.ll) pelo IRGenAST:

```bash
clang executavel.ll runtime.c -o program
./program
```

## 5. Arquivos e trechos importantes

### 5.1 CMakeLists.txt — pontos-chave

- Define CMAKE_CXX_STANDARD 20.
- Inclui e configura o ANTLR4 C++ runtime como subdiretório.
- Localiza LLVM 19 via find_package(LLVM REQUIRED CONFIG) e exige versão ≥ 19.
- Gera o executável ns e define RUNTIME_OUTPUT_DIRECTORY para src/execute.
- Linka antlr4_static e componentes do LLVM (core, support, irreader, passes, native).

### 5.2 Main.cpp — fluxo principal

1. Lê o arquivo fonte .ns via ifstream.
2. Cria ANTLRInputStream, NiloScriptLexer, CommonTokenStream, NiloScriptParser.
3. Constrói a AST com AST TreeAST; auto program = TreeAST.ASTtree(tree); e imprime com printAST(program.get());.
4. Chama IRGenAST(TreeAST.ASTtree(tree)); para gerar o IR.
5. Trecho do Main.cpp (resumido):

```cpp
ANTLRInputStream fileInArray(readFile);
NiloScriptLexer lexer(&fileInArray);
CommonTokenStream tokens(&lexer);
NiloScriptParser parser(&tokens);
NiloScriptParser::ProgramContext* tree = parser.program();
AST TreeAST;
auto program = TreeAST.ASTtree(tree);
printAST(program.get());
IRGenAST(TreeAST.ASTtree(tree));
```

### 5.3 runtime.c

Arquivo com funções auxiliares usadas ao compilar o .ll com clang.
Atualmente contém #include <stdio.h> e serve como base para o runtime do executável final.

## 6. Estrutura de diretórios (resumida)

.vscode/ <br>
├── tasks.json — tarefas VSCode para build, cmake e execução <br>

NiloScript/<br>

├── docs / - documentações de apoio<br>

├── examples/ — programas de exemplo (e01.ns … e05.ns)<br>

├── src/<br>
│ ├── runtime.c — runtime para o .ll<br>

│ ├── CMakeLists.txt<br>

│ ├── antlr/ — lexer/parser gerados e gramática<br>

│ ├── analysis/ — AST, IRGen, symbolTable (AST.h, IRGenAST.h, symbolTable.cpp)<br>

│ ├── debug/ — diretório de build do CMake<br>

│ ├── execute/ — executável ns gerado<br>

│ ├── Main.cpp — ponto de entrada<br>

## 7. VSCode tasks.json

### Tarefas definidas

- build — executa make em NiloScript/src/debug
- cmake — executa cmake ../.. em NiloScript/src/debug
- run — executa ${workspaceFolder}/NiloScript/src/execute/ns ${workspaceFolder}/NiloScript/examples/e05.ns

### Exemplo de tarefa build:

```json
{
  "label": "build",
  "type": "shell",
  "command": "make",
  "options": { "cwd": "${workspaceFolder}/NiloScript/src/debug" }
}
```

## 8. Arquitetura do projeto (visão geral)

Camadas

Frontend

ANTLR lexer/parser (src/antlr) → CST

AST builder (src/analysis/AST.h) → AST

Análise

Tabela de símbolos (symbolTable.h/.cpp)

Checagens semânticas e de tipos

Geração de código

IRGenAST → gera executavel.ll (LLVM IR)

Runtime / Linkagem

runtime.c + clang → binário final

Fluxo: .ns → ANTLR → CST → AST → IRGen → executavel.ll → clang + runtime.c → executável
