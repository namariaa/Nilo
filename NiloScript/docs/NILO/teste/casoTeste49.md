# Caso de teste 49: Avaliação de expressão aritmética com agrupamentos

O principal objetivo é validar a correta avaliação de expressões utilizando operadores aritméticos e agrupamentos por parênteses.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarInteiro((500 - 100) - (5 * (2 * 2)));
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída obtida.

### Resultado esperado

```text
300
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a expressão seja avaliada corretamente e o resultado apresentado corresponda ao esperado.

### Resultado obtido

**Aprovado.**
