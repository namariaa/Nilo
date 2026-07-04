# Caso de teste 01: Operações aritméticas básicas

O principal objetivo é validar operações de soma, subtração, atribuição e reutilização de variáveis, verificando se a linguagem respeita a ordem de execução das expressões e realiza corretamente a atualização de valores.

### Pré-condições

- Compilador NiloScript configurado.
- Ambiente LLVM corretamente instalado.

### Código de teste

```niloscript
primeiro_teste : inteiro = 2 + 5 - 7;
segundo_teste :inteiro = 2 + 8 - 7;
primeiro_teste = primeiro_teste + segundo_teste;
mostrarInteiro(primeiro_teste);
```

### Passo a Passo para a realização do teste

1. Compilar o programa.
2. Verificar a geração do código intermediário.
3. Executar o programa.
4. Comparar a saída obtida com o resultado esperado.

### Resultado esperado

O programa deve ser compilado sem erros e produzir a seguinte saída:

```text
3
```

### Critério de aprovação

O teste será considerado **Aprovado** caso:

- o programa seja compilado sem erros;
- as atribuições sejam realizadas corretamente;
- as operações aritméticas produzam o resultado esperado;
- a saída corresponda ao valor **3**.

### Resultado obtido

**Aprovado.**
