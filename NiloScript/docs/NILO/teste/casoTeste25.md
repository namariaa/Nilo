# Caso de teste 25: Impressão de inteiro utilizando argumento do tipo caractere

O principal objetivo é validar a verificação semântica da função `mostrarInteiro`, garantindo que valores do tipo **caracter** não sejam aceitos como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarInteiro("a");
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o tipo **caracter** e o tipo esperado pela função `mostrarInteiro`.

### Critério de aprovação

O teste será considerado **Aprovado** caso a compilação seja interrompida e o erro de incompatibilidade de tipos seja identificado corretamente.

### Resultado obtido

**Aprovado.**
