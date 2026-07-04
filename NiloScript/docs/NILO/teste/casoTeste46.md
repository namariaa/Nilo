# Caso de teste 46: Expressão aritmética com números flutuantes

O principal objetivo é validar operações aritméticas envolvendo valores do tipo flutuante.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
mostrarFlutuante((5.5 - 1.5) - (2.5 * 2.0));
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída obtida.

### Resultado esperado

```text
-1.0
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a expressão seja avaliada corretamente e o resultado seja apresentado como número flutuante.

### Resultado obtido

**Aprovado.**
