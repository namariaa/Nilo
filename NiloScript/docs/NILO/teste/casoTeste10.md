# Caso de teste 10: Estrutura de repetição

O principal objetivo é validar a estrutura de repetição `enquanto`, a atualização de variáveis, a avaliação de expressões booleanas e a interrupção correta do laço.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x :inteiro = pegaInteiro;
par :bool = falso;

enquanto (par == falso) {
    x = x + 1;

    caso (x % 2 == 0) {
        par = verdadeiro;
    }

    mostrarCaracteres("UM");
}

mostrarInteiro(x);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar como entrada o valor **5**.
4. Comparar a saída produzida.

### Resultado esperado

```text
UM
6
```

### Critério de aprovação

O teste será considerado **Aprovado** caso o laço seja executado até que a condição seja satisfeita, produzindo a saída esperada.

### Resultado obtido

**Aprovado.**
