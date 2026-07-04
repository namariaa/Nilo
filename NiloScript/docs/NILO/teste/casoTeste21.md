# Caso de teste 21: Declaração de múltiplas funções

O principal objetivo é validar a declaração de múltiplas funções, chamadas independentes, passagem de parâmetros, retorno de valores e utilização de funções nativas de entrada e saída.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
funcionalidade sub (a :inteiro, b :inteiro) :inteiro {
    resultado :inteiro = a - b;
    retorne resultado;
}

funcionalidade soma (x :inteiro, y :inteiro) :inteiro {
    resultado :inteiro = x + y;
    mostrarCaracteres("test");
    retorne resultado;
}

a :inteiro = pegaInteiro;
b :inteiro = pegaInteiro;

c :inteiro = soma(a, b);
d :inteiro = sub(b, a);

mostrarInteiro(c);
mostrarInteiro(d);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar a geração do código intermediário.
3. Executar o programa.
4. Informar como entrada os valores **10** e **20**.
5. Comparar a saída obtida com o resultado esperado.

### Resultado esperado

```text
test
30
10
```

### Critério de aprovação

O teste será considerado **Aprovado** caso:

- ambas as funções sejam declaradas corretamente;
- os parâmetros sejam passados corretamente;
- os retornos sejam produzidos conforme esperado;
- as chamadas de função sejam executadas de forma independente;
- a saída corresponda ao resultado esperado.

### Resultado obtido

**Aprovado.**
