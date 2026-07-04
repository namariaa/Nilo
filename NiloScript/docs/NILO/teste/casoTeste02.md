# Caso de teste 02: Precedência de operadores

O principal objetivo é validar a precedência entre operações aritméticas e o uso de parênteses em expressões matemáticas.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
segundo :inteiro = 2 - 4 * 7 / (57 - (7 * 8));
mostrarInteiro(segundo);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar a geração do código intermediário.
3. Executar o programa.
4. Comparar a saída obtida com o resultado esperado.

### Resultado esperado

```text
-26
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a precedência dos operadores e os parênteses sejam interpretados corretamente.

### Resultado obtido

**Aprovado.**
