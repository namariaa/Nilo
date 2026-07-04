# Caso de teste 05: Expressão com tipos incompatíveis

O principal objetivo é validar a verificação semântica de tipos em operações aritméticas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarInteiro((500 - 100) - (5 * (2.5 * 2)));
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre os tipos **inteiro** e **flutuante**.

### Critério de aprovação

O teste será considerado **Aprovado** caso a compilação seja interrompida e o erro de incompatibilidade de tipos seja identificado corretamente.

### Resultado obtido

**Aprovado.**
