# Caso de teste 19: Estrutura de repetição com comparação relacional

O principal objetivo é validar operações relacionais, atualização de variáveis e execução de laços controlados por comparação.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
x :inteiro = pegaInteiro;
y :inteiro = pegaInteiro;
cont : inteiro = 0;

enquanto (x >= y) {
    cont = cont + 1;
    y = y + 1;
}

mostrarInteiro(cont);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar como entrada os valores **10** e **5**.
4. Comparar a saída obtida.

### Resultado esperado

```text
6
```

### Critério de aprovação

O teste será considerado **Aprovado** caso o laço seja executado corretamente até que a condição deixe de ser satisfeita.

### Resultado obtido

**Aprovado.**
