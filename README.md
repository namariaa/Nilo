# 🐋 NiloScript

> Linguagem de programação educacional voltada ao ensino de construção de linguagens.

---

## Sobre

O **NiloScript** é uma linguagem de programação desenvolvida com foco educacional, com o objetivo de auxiliar estudantes no entendimento **profundo e prático** do funcionamento interno das linguagens de programação.

Trabalha com:

- **Sintaxe em português** (ex.: enquanto, caso, mostrarInteiro) para facilitar a curva de aprendizado.
- **Foco pedagógico:** mantém fidelidade aos conceitos de programação para permitir transferência de conhecimento.
- **Implementação técnica:** analisador léxico/sintático gerado com ANTLR, geração de IR com LLVM, build com CMake e integração com VSCode via tasks.json.

---

## Um exemplo da código em NiloScript

```bash
funcionalidade soma (x :inteiro, y :inteiro) :inteiro {
    resultado :inteiro = x + y;
    retorne resultado;
}

a :inteiro = pegaInteiro;
b :inteiro = pegaInteiro;
c :inteiro = soma(a, b);
mostrarInteiro(c);
```

---

## Quick Start

### Pré-requisitos

<table> <tr> <td align="center"> <a href="https://www.antlr.org/" target="_blank"> <img src="https://www.svgrepo.com/show/373431/antlr.svg" alt="ANTLR Logo" width="80"/><br/> <strong>ANTLR4 (runtime C++)</strong> </a> </td> <td align="center"> <a href="https://en.cppreference.com/w/cpp" target="_blank"> <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" alt="C++ Logo" width="80"/><br/> <strong>C++ 20</strong> </a> </td> <td align="center"> <a href="https://cmake.org/documentation/" target="_blank"> <img src="https://upload.wikimedia.org/wikipedia/commons/1/13/Cmake.svg" alt="CMake Logo" width="80"/><br/> <strong>CMake ≥ 3.30</strong> </a> </td>
<td align="center"> <a href="https://en.cppreference.com/w/cpp" target="_blank"> <img src="https://upload.wikimedia.org/wikipedia/en/d/dd/LLVM_logo.png" alt="C++ Logo" width="80"/><br/> <strong>LLVM ≥ 19</strong> </a> </td>
</tr> </table>

---

### Build

```bash
mkdir -p src/debug
cd src/debug

cmake ../..
make
```

### Executar exemplo

```bash
./ns ../../examples/e05.ns
```

### Gerar executável final

Após gerar o arquivo .ll:

```bash
clang executavel.ll runtime.c -o program
./program
```

---

### Estrutura

NiloScript/ <br>
├── src/ <br>
│ ├── analysis/ # AST, IR, tabela de símbolos <br>
│ ├── antlr/ # Parser/Lexer gerados <br>
│ ├── debug/ # build (cmake) <br>
│ ├── execute/ # binário final <br>
│ <br>
├── examples/ # exemplos da linguagem <br>
├── runtime.c # suporte de execução <br>
