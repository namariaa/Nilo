# Caso de teste 06: Estrutura condicional sem bloco alternativo

O principal objetivo é validar a execução da estrutura condicional `caso` quando a condição é verdadeira.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x_y :inteiro = 6;

caso (x_y != 5) {
    mostrarCaracteres("diferente!!!!!!!!!!");
}
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída obtida.

### Resultado esperado

```text
diferente!!!!!!!!!!
```

### Critério de aprovação

O teste será considerado **Aprovado** caso apenas o bloco verdadeiro seja executado.

### Resultado obtido

**Aprovado.**
