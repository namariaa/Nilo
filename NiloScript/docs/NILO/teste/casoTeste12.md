impar :bool = falso;
contador :inteiro = 0;

enquanto (impar != verdadeiro) {
x = x \* 3;

    caso (x % 2 == 1){
        impar = verdadeiro;
    }

    contador = contador + 1;

}

mostrarInteiro(x);
mostrarInteiro(contador);

````

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Informar como entrada o valor **2**.
4. Comparar a saída obtida com o resultado esperado.

### Resultado esperado

```text
18
2
````

### Critério de aprovação

O teste será considerado **Aprovado** caso o laço execute corretamente, atualizando as variáveis até que a condição de parada seja satisfeita.

### Resultado obtido

**Aprovado.**

---

# Caso de teste 12: Declaração e acesso a listas

O principal objetivo é validar a declaração de listas dos tipos inteiro, flutuante e bool, bem como o acesso aos seus elementos por índice.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
valor1{2} :inteiro = [1 , 2];
primeira :inteiro = valor1[1];
mostrarInteiro(primeira);

valor2{3} :flutuante = [1.22 , 8.2999 ,88.88];
segundo :flutuante = valor2[2];
mostrarFlutuante(segundo);

valor3{2} :bool = [verdadeiro, falso];
terceiro :bool = valor3[0];
mostrarBool(terceiro);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Executar o programa.
3. Comparar a saída produzida.

### Resultado esperado

```text
2
88.88
verdadeiro
```

### Critério de aprovação

O teste será considerado **Aprovado** caso todas as listas sejam criadas corretamente e seus elementos sejam acessados pelos índices informados.

### Resultado obtido

**Aprovado.**
