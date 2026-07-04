# Caso de teste 27: Impressão de inteiro utilizando argumento do tipo flutuante

O principal objetivo é validar a verificação semântica da função `mostrarInteiro`, garantindo que valores do tipo **flutuante** não sejam aceitos como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarInteiro(2.5);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o tipo **flutuante** e o tipo esperado pela função `mostrarInteiro`.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade de tipos seja detectada corretamente.

### Resultado obtido

**Aprovado.**
