# Caso de teste 33: Impressão de booleano utilizando argumento do tipo caractere

O principal objetivo é validar a verificação semântica da função `mostrarBool`, garantindo que apenas valores do tipo **bool** sejam aceitos como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarBool("dando errado");
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o tipo **caracter** e o tipo esperado pela função `mostrarBool`.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade de tipos seja detectada corretamente.

### Resultado obtido

**Aprovado.**
