# Relatório de Gestão de Defeitos

> Este documento tem como objetivo registrar os defeitos identificados durante a fase de testes da linguagem NiloScript, classificando-os de acordo com sua categoria, prioridade e estado de resolução. Além disso, apresenta uma visão quantitativa da densidade de defeitos observada durante o desenvolvimento, permitindo acompanhar a qualidade da implementação da linguagem.

## Métrica de Densidade de Defeitos

A densidade de defeitos corresponde à razão entre o número de defeitos identificados e o tamanho do produto avaliado. Neste trabalho, considera-se:

- Total de defeitos encontrados: **2**
- Tamanho aproximado do código da linguagem: 2.003 linhas de código (KLOC)
- Densidade de Defeitos = 2 defeitos por mil linhas de código (KLOC) aproximadamente.

## Registro de Defeitos

|  ID   | Defeito                                                                                                               | Categoria                   | Prioridade | Status    |
| :---: | --------------------------------------------------------------------------------------------------------------------- | --------------------------- | ---------- | --------- |
| DEF01 | Chamadas de funções sem parâmetros eram rejeitadas durante a análise sintática.                                       | Funcional                   | Alta       | Corrigido |
| DEF02 | A lista de argumentos de chamadas de funções aceitava parâmetros incompatíveis com os tipos declarados.               | Semântico                   | Média      | Corrigido |
| DEF03 | A linguagem permitia o uso de variáveis antes de sua declaração.                                                      | Semântico                   | Alta       | Corrigido |
| DEF04 | A linguagem permitia atribuições de valores incompatíveis com o tipo declarado da variável.                           | Semântico                   | Alta       | Corrigido |
| DEF05 | A linguagem permitia operações aritméticas entre operandos de tipos incompatíveis.                                    | Semântico                   | Alta       | Corrigido |
| DEF06 | A linguagem permitia comparações entre valores de tipos incompatíveis.                                                | Semântico                   | Alta       | Corrigido |
| DEF07 | A linguagem permitia chamadas de funções com quantidade incorreta de parâmetros.                                      | Semântico                   | Alta       | Corrigido |
| DEF08 | A linguagem permitia chamadas de funções com argumentos incompatíveis em relação aos tipos dos parâmetros declarados. | Semântico                   | Alta       | Corrigido |
| DEF09 | A linguagem permitia o retorno de valores incompatíveis com o tipo declarado da função.                               | Semântico                   | Alta       | Corrigido |
| DEF10 | A linguagem permitia o acesso a listas utilizando índices diferentes do tipo inteiro.                                 | Semântico                   | Alta       | Corrigido |
| DEF11 | A linguagem permitia listas contendo quantidade de elementos diferente da capacidade declarada.                       | Semântico                   | Alta       | Corrigido |
| DEF12 | A gramática aceitava comandos sem ponto e vírgula ao final da instrução.                                              | Gramática                   | Alta       | Corrigido |
| DEF13 | A gramática aceitava blocos condicionais sem o fechamento correto de chaves.                                          | Gramática                   | Alta       | Corrigido |
| DEF14 | A gramática aceitava expressões com parênteses desbalanceados.                                                        | Gramática                   | Alta       | Corrigido |
| DEF15 | A gramática permitia declarações de variáveis sem especificação de tipo.                                              | Gramática                   | Alta       | Corrigido |
| DEF16 | A gramática permitia declarações de listas sem o fechamento correto dos colchetes.                                    | Gramática                   | Média      | Corrigido |
| DEF17 | A gramática aceitava declarações de funções sem a definição do tipo de retorno.                                       | Gramática                   | Alta       | Corrigido |
| DEF18 | A gramática aceitava expressões aritméticas incompletas.                                                              | Gramática                   | Alta       | Corrigido |
| DEF19 | A geração da representação intermediária atribuía identificadores duplicados para variáveis locais.                   | Representação intermediária | Alta       | Corrigido |
| DEF20 | A representação intermediária era gerada sem respeitar a precedência dos operadores aritméticos.                      | Representação intermediária | Alta       | Corrigido |
| DEF21 | A representação intermediária não gerava instruções de retorno para funções com valor de retorno.                     | Representação intermediária | Alta       | Corrigido |
| DEF22 | A representação intermediária ignorava os parâmetros durante chamadas de funções.                                     | Representação intermediária | Alta       | Corrigido |
| DEF23 | A representação intermediária associava funções de saída à rotina de impressão incorreta.                             | Representação intermediária | Alta       | Corrigido |
| DEF24 | A representação intermediária gerava rótulos duplicados para estruturas condicionais.                                 | Representação intermediária | Alta       | Corrigido |
| DEF25 | A representação intermediária gerava desvios incorretos para estruturas de repetição.                                 | Representação intermediária | Alta       | Corrigido |
