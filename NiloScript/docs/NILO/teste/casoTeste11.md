# Caso de teste 11: Estrutura de repetição com multiplicação e contador

O principal objetivo é validar a execução de laços de repetição, operações aritméticas, atualização de variáveis e condições booleanas até que o critério de parada seja satisfeito.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x :inteiro = pegaInteiro;
impar :bool = falso;
contador :inteiro = 0;

enquanto (impar != verdadeiro) {
    x = x * 3;

    caso (x % 2 == 1){
        impar = verdadeiro;
    }

    contador = contador + 1;
}

mostrarInteiro(x);
mostrarInteiro(contador);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar como entrada o valor **2**.
4. Comparar a saída obtida com o resultado esperado.

### Resultado esperado

```text
18
2
```

### Critério de aprovação

O teste será considerado **Aprovado** caso o laço execute corretamente, atualizando as variáveis até que a condição de parada seja satisfeita.

### Resultado obtido

**Aprovado.**
