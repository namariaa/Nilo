# Caso de teste 14: Reatribuição de variável

O principal objetivo é validar a atualização do valor de uma variável previamente declarada.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
teste_redefinir :inteiro = 5;
mostrarInteiro(teste_redefinir);

teste_redefinir = 10;
mostrarInteiro(teste_redefinir);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída produzida.

### Resultado esperado

```text
5
10
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a variável tenha seu valor atualizado corretamente.

### Resultado obtido

**Aprovado.**
