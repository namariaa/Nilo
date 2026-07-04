# Caso de teste 03: Impressão de caracteres

O principal objetivo é validar a declaração de variáveis do tipo caractere e a utilização da função nativa de impressão textual.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
testeString1 :caracter = "IS FUNNY TEST STRING TYPE IN A PRINT";
mostrarCaracteres(testeString1);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída produzida.

### Resultado esperado

```text
IS FUNNY TEST STRING TYPE IN A PRINT
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a variável textual seja armazenada e impressa corretamente.

### Resultado obtido

**Aprovado.**
