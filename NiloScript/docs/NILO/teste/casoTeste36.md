# Caso de teste 36: Declaração de múltiplas funções matemáticas

O principal objetivo é validar a declaração de múltiplas funções, operações de multiplicação e módulo, chamadas de função e impressão dos resultados.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
funcionalidade mul (num01: inteiro, num02: inteiro) :inteiro {
    retorne num01 * num02;
}

funcionalidade mod (num01: inteiro, num02: inteiro) :inteiro {
    retorne num01 % num02;
}

x :inteiro = pegaInteiro;
y :inteiro = pegaInteiro;

multiplicacao :inteiro = mul(x, y);
restoDiv :inteiro = mod(x, y);

mostrarCaracteres("MOD:");
mostrarInteiro(restoDiv);

mostrarCaracteres("MULTIPLICAÇÃO:");
mostrarInteiro(multiplicacao);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar como entrada os valores **10** e **3**.
4. Comparar a saída obtida.

### Resultado esperado

```text
MOD:
1
MULTIPLICAÇÃO:
30
```

### Critério de aprovação

O teste será considerado **Aprovado** caso ambas as funções retornem corretamente seus respectivos resultados.

### Resultado obtido

**Aprovado.**
