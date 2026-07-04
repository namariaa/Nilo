# Caso de teste 34: Impressão de valores booleanos

O principal objetivo é validar a avaliação de expressões booleanas em estruturas condicionais e a utilização da função `mostrarBool`.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x :bool = falso;

caso (x == falso){
    mostrarBool(falso);
}
senao {
    mostrarBool(verdadeiro);
}
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída produzida.

### Resultado esperado

```text
falso
```

### Critério de aprovação

O teste será considerado **Aprovado** caso a condição seja avaliada corretamente e o valor booleano esperado seja impresso.

### Resultado obtido

**Aprovado.**
