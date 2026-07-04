```niloscript
mostrarBool(6.3);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o tipo **flutuante** e o tipo esperado pela função `mostrarBool`.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade de tipos seja detectada corretamente.

### Resultado obtido

**Aprovado.**

---

# Caso de teste 32: Impressão de booleano utilizando argumento do tipo inteiro

O principal objetivo é validar a verificação semântica da função `mostrarBool`, garantindo que apenas valores do tipo **bool** sejam aceitos como argumento.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarBool(3);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar as mensagens emitidas pelo compilador.

### Resultado esperado

O compilador deve emitir um erro semântico indicando incompatibilidade entre o tipo **inteiro** e o tipo esperado pela função `mostrarBool`.

### Critério de aprovação

O teste será considerado **Aprovado** caso a incompatibilidade de tipos seja detectada corretamente.

### Resultado obtido

**Aprovado.**
