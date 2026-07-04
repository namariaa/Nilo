# Caso de teste 26: Impressão de inteiro utilizando argumento do tipo bool

O principal objetivo é validar a verificação semântica da função `mostrarInteiro`, garantindo que valores do tipo **bool** não sejam aceitos como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarInteiro(verdadeiro);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o tipo **bool** e o tipo esperado pela função `mostrarInteiro`.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade de tipos seja detectada corretamente.

### Resultado obtido

**Aprovado.**
