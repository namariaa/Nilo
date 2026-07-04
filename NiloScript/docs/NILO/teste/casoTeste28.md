# Caso de teste 28: Impressão de caracteres utilizando argumento do tipo inteiro

O principal objetivo é validar a verificação semântica da função `mostrarCaracteres`, garantindo que valores do tipo **inteiro** não sejam aceitos como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarCaracteres(1);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o tipo **inteiro** e o tipo esperado pela função `mostrarCaracteres`.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade de tipos seja detectada corretamente.

### Resultado obtido

**Aprovado.**
