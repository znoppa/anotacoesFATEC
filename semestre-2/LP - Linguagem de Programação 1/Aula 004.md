---
tipo: aula
semestre: 2
disciplina: Linguagem de Programação 1
aula: 4
data: 2026-08-10
status: em-revisao
revisao: false
aliases:
  - LP 004 — Estruturas de repetição
tags:
  - ads/semestre-2
  - disciplina/linguagem-de-programacao-1
  - linguagem/c
---

# Aula 004 — Estruturas de Repetição

> [!abstract] Em uma frase
> Em C, os laços `for`, `while` e `do..while` permitem repetir blocos de comandos, variando principalmente na forma e no momento em que a condição de repetição é verificada.

## Objetivos

- Compreender a estrutura e o funcionamento do laço `for`.
- Identificar as partes de inicialização, condição e atualização de um `for`.
- Entender como podem surgir laços infinitos e como o `break` pode interrompê-los.
- Reconhecer um laço `for` sem corpo.
- Utilizar o comando `while` quando a quantidade de repetições depende de uma condição.
- Diferenciar `while` de `do..while`.
- Comparar os três tipos de laço apresentados no material.
- Praticar estruturas de repetição nos exercícios propostos.

## 1. Comando `for`

O comando `for` é uma estrutura de repetição usada para executar um bloco de comandos várias vezes. Segundo o material, ele é especialmente útil quando já se sabe antecipadamente quantas vezes o bloco deverá ser executado.

### Sintaxe

```c
for (inicializacao; condicao; atualizacao) {
    // bloco de comandos
}
```

A estrutura possui três partes:

| Parte | Função |
|---|---|
| **Inicialização** | É executada uma única vez no início do laço e normalmente define a variável de controle. |
| **Condição** | É verificada antes de cada iteração. Se for verdadeira, o bloco é executado; se for falsa, o laço termina. |
| **Atualização** | É executada após cada iteração e normalmente altera a variável de controle. |

### Exemplo — números de 1 a 5

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

Neste exemplo:

- `i` começa com o valor `1`;
- antes de cada repetição, verifica-se `i <= 5`;
- após cada iteração, `i` é incrementado com `i++`;
- o laço imprime os valores de `1` até `5`.

## 2. Cuidado com o laço infinito

O material apresenta um `for` sem condição de término como uma forma de criar um laço infinito:

```c
for (inicializacao; ; incremento) {
    // comandos
}
```

Sem uma condição de término, o laço continua sendo executado indefinidamente. Para interromper um laço desse tipo, o material utiliza o comando `break`.

> [!important] `break`
> Quando `break` é executado dentro do laço, a repetição é encerrada imediatamente e o programa continua a partir das instruções que aparecem depois do laço.

### Exemplo apresentado no material

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char ch;

    printf("Pressione 'X' para sair do loop.\n");

    for (;;) {
        ch = getchar();

        if (ch == 'X' || ch == 'x')
            break;

        printf("Letra: %c\n", ch);
    }

    return 0;
}
```

O `for (;;) ` não possui inicialização, condição ou atualização. A saída acontece quando o usuário digita `X` ou `x` e o `break` é executado.

## 3. Laço sem conteúdo

Um `for` também pode não possuir comandos em seu corpo. O material destaca o ponto e vírgula ao final da estrutura:

```c
for (inicializacao; condicao; incremento);
```

Nesse caso, o próprio `for` executa suas etapas de controle repetidamente, mas não há um bloco de instruções associado ao corpo do laço.

O material mostra esse recurso como uma forma rudimentar de consumir tempo e criar uma espera:

```c
unsigned long int delay;

printf("Iniciando...\n");

for (delay = 0; delay < 100000000; delay++);

printf("Finalizado!\n");
```

> [!warning] Tempo de espera variável
> O próprio material ressalta que esse método é rudimentar e que o tempo real de espera pode variar de acordo com a máquina e o compilador.

## 4. Comando `while`

O `while` executa repetidamente um bloco enquanto uma condição permanecer verdadeira.

### Sintaxe

```c
while (condicao) {
    // bloco de comandos
}
```

A condição é avaliada **antes de cada iteração**. Se já for falsa na primeira verificação, o bloco não é executado.

### Exemplo — contador

```c
#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 5) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}
```

Quando `contador` passa a valer `6`, a condição `contador <= 5` torna-se falsa e o laço termina.

### Observações sobre o `while`

O material destaca dois pontos:

1. algo dentro do laço precisa modificar a condição para que ela possa eventualmente se tornar falsa; caso contrário, pode ocorrer um laço infinito;
2. `while` é especialmente útil quando não se sabe antecipadamente quantas vezes o bloco deverá ser executado, pois a repetição depende de uma condição que pode mudar durante a execução.

## 5. Comando `do..while`

O `do..while` também repete um bloco com base em uma condição, mas possui uma diferença fundamental em relação ao `while`: a condição é verificada **depois** da execução do bloco.

Por isso, o bloco é executado pelo menos uma vez.

### Sintaxe

```c
do {
    // bloco de comandos
} while (condicao);
```

> [!important] Diferença principal
> No `while`, a condição é verificada antes do bloco. No `do..while`, o bloco é executado primeiro e a condição é verificada depois.

### Exemplo — contador

```c
#include <stdio.h>

int main() {
    int contador = 1;

    do {
        printf("%d\n", contador);
        contador++;
    } while (contador <= 5);

    return 0;
}
```

Assim como no exemplo com `while`, o contador imprime os valores de `1` a `5`. Quando chega a `6`, a condição deixa de ser verdadeira e a repetição termina.

### Observações sobre o `do..while`

- É útil quando se deseja garantir que o bloco seja executado pelo menos uma vez.
- Também é necessário que algo dentro do laço modifique a condição para evitar uma repetição infinita.

## 6. Exemplo integrado — escolha pelo número

O material combina `do..while` e `switch` em um exemplo de escolha de frutas. O `do..while` repete a entrada enquanto o valor estiver fora do intervalo `1` a `3`. Depois, o `switch` apresenta a fruta escolhida.

```c
int escolha;

do {
    printf("Escolha a fruta pelo número:\n");
    printf("\t(1)...Mamão\n");
    printf("\t(2)...Abacaxi\n");
    printf("\t(3)...Laranja\n");

    scanf("%d", &escolha);
} while (escolha < 1 || escolha > 3);

printf("Você escolheu ");

switch (escolha) {
    case 1:
        printf("Mamão.\n");
        break;
    case 2:
        printf("Abacaxi.\n");
        break;
    case 3:
        printf("Laranja.\n");
        break;
}
```

Esse exemplo também conecta o conteúdo desta aula com as estruturas de seleção estudadas na [[semestre-2/LP - Linguagem de Programação 1/Aula 003|Aula 003]].

## 7. Resumo dos laços

| Laço | Verificação / execução | Uso apresentado no material |
|---|---|---|
| `while` | A condição é verificada antes de cada iteração. | Quando a quantidade de iterações é desconhecida e depende de uma condição. |
| `for` | Inicialização uma vez; condição antes de cada iteração; atualização após cada iteração. | Quando a quantidade de iterações é conhecida ou pode ser determinada. |
| `do..while` | A condição é verificada após a execução do bloco. | Quando o bloco precisa ser executado pelo menos uma vez. |

## 8. `break` e `continue`

A agenda do Material 004 lista os comandos `break` e `continue` entre os tópicos da aula.

O `break` aparece desenvolvido nos exemplos de laço infinito: ele interrompe imediatamente a repetição e a execução continua após o laço.

> [!note] Sobre `continue`
> Embora `continue` apareça na agenda do Material 004, as páginas fornecidas não apresentam uma seção específica com sua sintaxe ou um exemplo de utilização. Por isso, esta anotação registra o tópico sem acrescentar uma explicação externa ao material.

## 9. Exercícios do Material 004

> [!todo] Prática
> 1. **Progressão Aritmética (PA):** crie um programa que gere uma PA cuja razão seja informada pelo usuário. A série deve possuir 10 termos e começar no número `1`.
> 2. **Soma de números:** leia uma série de números inteiros `N`, com `0 <= N <= 20`, calcule a soma dos valores e encerre a leitura quando for digitado `0`, exibindo então a soma.
> 3. **Contagem de números pares:** receba 10 números inteiros e conte quantos são pares.
> 4. **Conversão de temperatura:** crie uma tabela de Fahrenheit para Celsius, de `0` a `100 °F`, variando de 1 em 1 grau, usando `C = (F - 32) / 1.8`.
> 5. **Análise de valores inteiros:** leia 5 valores inteiros, identifique o maior e o menor e calcule a média dos números inseridos.

## 10. Conexões

- [[semestre-2/LP - Linguagem de Programação 1/Aula 003|Aula 003 — Estruturas de Controle: Blocos, Decisão e Seleção]] — apresenta as estruturas de decisão usadas em conjunto com os laços.
- [[semestre-1/Algoritmos e lógica de programação/Aula 006|Algoritmos — Aula 006: Estruturas de Controle]] — permite relacionar a lógica de repetição estudada anteriormente com a sintaxe utilizada em C.

## Revisão ativa

> [!question] Perguntas
> - Quais são as três partes presentes na sintaxe do `for`?
> - Em que momento a condição do `while` é verificada?
> - Por que o `do..while` sempre executa o bloco pelo menos uma vez?
> - O que pode acontecer se nenhuma instrução modificar a condição de um `while` ou `do..while`?
> - O que acontece quando `break` é executado dentro de um laço?
> - Em que situação o material recomenda o uso de `for`?
> - Em que situação o material recomenda o uso de `while`?
> - Qual é a diferença entre um laço infinito e um laço sem conteúdo?

## Materiais

- `LP_004.pdf` — Professor Maromo, Material 004.

---

[[01 - Painel/00 - Início|Início]] · [[semestre-2/LP - Linguagem de Programação 1/Aula 003|← Aula anterior — Aula 003]]
