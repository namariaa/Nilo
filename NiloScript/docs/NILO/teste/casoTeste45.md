# Caso de teste 45: Avaliação de expressão aritmética complexa

O principal objetivo é validar a precedência dos operadores aritméticos e a correta geração do código intermediário para expressões complexas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
matematicasAvancadas: inteiro = 2 + 5 - 6 * (8 / 4 + 2) - (9 % 2 * 5);
mostrarInteiro(matematicasAvancadas);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída obtida.

### Resultado esperado

```text
-22
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a expressão seja avaliada corretamente respeitando a precedência dos operadores.

### Resultado obtido

**Aprovado.**
