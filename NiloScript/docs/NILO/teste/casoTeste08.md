# Caso de teste 08: Potenciação associativa

O principal objetivo é validar a associatividade da operação de potenciação.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
pot :inteiro = 6 ** 3 ** 2;
mostrarInteiro(pot);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída obtida.

### Resultado esperado

```text
10077696
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a potenciação seja avaliada da direita para a esquerda.

### Resultado obtido

**Aprovado.**
