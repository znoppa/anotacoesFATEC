---
tipo: aula
semestre: 2
disciplina: Linguagem de Programação 1
aula: 5
data: 2026-08-17
status: em-revisao
revisao: false
aliases:
  - LP 005 — Matrizes, Vetores e Strings
tags:
  - ads/semestre-2
  - disciplina/linguagem-de-programacao-1
  - linguagem/c
---

# Aula 005 — Matrizes, Vetores e Strings

> [!abstract] Em uma frase
> Em C, vetores e matrizes armazenam conjuntos de elementos do mesmo tipo, enquanto strings são vetores de `char` terminados pelo caractere nulo `\0` e normalmente manipulados com funções específicas da biblioteca padrão.

## Objetivos

- Compreender o conceito de matrizes e vetores em C.
- Declarar e inicializar vetores unidimensionais.
- Entender índices e a organização dos elementos em memória.
- Declarar e percorrer matrizes bidimensionais e N-dimensionais.
- Utilizar laços `for` aninhados para percorrer matrizes 2D.
- Entender como strings são representadas em C.
- Diferenciar um caractere `char` de uma string.
- Utilizar `printf`, `puts`, `scanf` e `fgets` para entrada e saída de strings.
- Conhecer funções de manipulação, comparação, conversão e formatação de strings.
- Praticar vetores, matrizes e strings com os exercícios propostos no Material 005.

## 1. Matrizes

Matrizes são estruturas de dados utilizadas para armazenar conjuntos de elementos com características similares. Cada matriz possui um nome e seus elementos são acessados por meio de **índices**.

O material divide as matrizes em:

- **unidimensionais** — normalmente chamadas de vetores;
- **multidimensionais** — utilizam mais de um índice para acessar seus elementos.

> [!important] Mesmo tipo de dado
> Os elementos de uma matriz pertencem ao mesmo tipo de dado.

### Forma geral de declaração

```c
tipo_da_variavel nome_da_variavel[tamanho];
```

Exemplo:

```c
int numeros[5];
```

Esse comando reserva espaço para cinco valores do tipo `int`.

## 2. Vetores — matrizes unidimensionais

Um vetor usa apenas um índice para identificar cada posição.

### Exemplos de declaração

```c
int numeros[5];
float notas[10];
char nome[50];
```

No último caso, `nome` é um vetor de caracteres que pode ser utilizado para armazenar uma string.

### Inicialização na declaração

```c
int diasMes[12] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};
```

Também é possível deixar que o compilador determine o tamanho do vetor:

```c
int algunsNumeros[] = {2, 4, 6, 8, 10};
```

Nesse caso, o vetor terá cinco posições.

### Vetor de strings

```c
char nomes[5][20];
```

O exemplo do material representa cinco strings, cada uma com espaço reservado para até 20 caracteres.

## 3. Índices e representação em memória

Considere o vetor apresentado no material:

```c
int v[5] = {10, 12, 14, 16, 18};
```

Os índices válidos são:

| Índice | Valor |
|---|---:|
| `0` | `10` |
| `1` | `12` |
| `2` | `14` |
| `3` | `16` |
| `4` | `18` |

> [!important] Índices começam em zero
> Um vetor declarado com `5` posições utiliza os índices de `0` até `4`.

O Material 005 também apresenta uma representação simplificada dos endereços de memória. No exemplo, os endereços de valores `int` aparecem incrementados de quatro em quatro, ilustrando que cada elemento ocupa uma região própria da memória.

## 4. Carga inicial de vetores

Quando um vetor local é apenas declarado sem inicialização, suas posições podem conter valores indeterminados, chamados no material de **"lixo"**.

### Inicialização manual

```c
int meuVetor[5] = {1, 2, 3, 4, 5};
```

### Inicialização com zeros

```c
int meuVetor[5] = {0};
```

Todos os elementos serão inicializados com zero.

### Inicialização parcial

```c
int meuVetor[5] = {1, 2};
```

O resultado será equivalente a:

```c
int meuVetor[5] = {1, 2, 0, 0, 0};
```

O material resume essa regra dizendo que, quando um vetor possui `N` posições e apenas `k` valores são informados na carga inicial, com `k < N`, as demais posições são preenchidas com zero.

### Tamanho automático

```c
int meuVetor[] = {1, 2, 3, 4, 5};
```

O compilador determina o tamanho com base na quantidade de valores da inicialização.

## 5. Leitura e impressão de um vetor

O Material 005 utiliza os laços estudados na [[semestre-2/LP - Linguagem de Programação 1/Aula 004|Aula 004]] para percorrer um vetor.

```c
#include <stdio.h>

int main() {
    int numeros[5];
    int i;

    printf("Digite 5 numeros:\n");

    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOs numeros digitados foram:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
```

O mesmo índice `i` é utilizado tanto na leitura quanto na impressão dos elementos.

## 6. Matrizes bidimensionais — 2D

Uma matriz 2D pode ser visualizada como uma tabela formada por **linhas e colunas**. O material também a descreve como um **vetor de vetores**.

### Sintaxe básica

```c
tipo nome_da_matriz[num_linhas][num_colunas];
```

### Exemplo

```c
int minhaMatriz[3][4];
```

Essa matriz possui:

- 3 linhas;
- 4 colunas;
- 12 elementos no total.

### Outros exemplos

```c
int matriz[2][2];
float valores[3][4];
```

### Inicialização de matriz 2D

```c
int tabela[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Também é possível omitir a quantidade de linhas quando ela pode ser determinada pela inicialização:

```c
int matrizAuto[][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

## 7. Matrizes N-dimensionais

A mesma ideia pode ser expandida para mais dimensões.

### Matriz tridimensional

```c
int cubo[2][3][4];
```

O material sugere visualizar essa estrutura como duas matrizes de `3 x 4`.

### Inicialização de uma matriz 3D

```c
int matriz3D[2][2][2] = {
    {{1, 2}, {3, 4}},
    {{5, 6}, {7, 8}}
};
```

## 8. Percorrendo uma matriz 2D

A forma mais comum apresentada no material é utilizar **laços aninhados**: um laço percorre as linhas e outro percorre as colunas.

```c
for (int i = 0; i < num_linhas; i++) {
    for (int j = 0; j < num_colunas; j++) {
        // trabalhar com minhaMatriz[i][j]
    }
}
```

O índice `i` representa a linha e o índice `j` representa a coluna.

### Exemplo — matriz 3x3 com valores aleatórios

O material apresenta um exemplo que utiliza `rand()`, `srand()` e `time()` para preencher uma matriz quadrada `3 x 3` com valores aleatórios entre `1` e `9`.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[3][3];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = (rand() % 9) + 1;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## 9. Strings em C

O Material 005 destaca que a linguagem C possui limitações para manipular strings diretamente. Entre elas:

- não é possível realizar todas as operações desejadas apenas com atribuições diretas;
- strings não são concatenadas diretamente com um operador próprio;
- muitas operações dependem de funções especializadas.

Por isso, C utiliza bibliotecas com funções específicas para manipulação de texto.

## 10. `char` x string

| Aspecto | `char` | String |
|---|---|---|
| Definição | Um único símbolo alfabético, numérico ou especial | Sequência de caracteres terminada por `\0` |
| Tipo | `char` | Array de `char` |
| Tamanho | 1 byte, tipicamente | quantidade de caracteres + espaço para `\0` |
| Representação | aspas simples | aspas duplas |
| Exemplo | `char letra = 'B';` | `char nome[6] = "Hello";` |

### Exemplo

```c
char letra = 'B';
char nome[6] = "Hello";
```

A string `"Hello"` possui cinco caracteres visíveis, mas o vetor precisa também armazenar o terminador `\0`.

## 11. O terminador `\0`

O caractere nulo `\0` marca o final de uma string em C.

O material apresenta a ideia usando uma string curta: mesmo que um vetor possua muitas posições, as funções de manipulação identificam o fim do conteúdo útil quando encontram `\0`.

Exemplo conceitual:

```text
'Z'  'É'  '\0'
```

> [!important] Por que `\0` importa?
> Funções como `strlen()` e `strcpy()` dependem do terminador para saber onde a string termina.

## 12. Carga inicial de strings

A declaração e a carga inicial seguem a lógica dos vetores.

```c
char nome[20] = "André";
```

O material também apresenta formas equivalentes de inicialização por caracteres e com tamanho automático.

```c
char nome[] = "André";
```

## 13. Leitura e escrita de strings

### `printf()`

É utilizado para imprimir dados formatados na saída padrão.

```c
char nome[] = "João";
printf("Olá, %s!\n", nome);
```

Para strings, o especificador utilizado no exemplo é `%s`.

### `puts()`

Imprime uma string e adiciona uma quebra de linha ao final.

```c
char saudacao[] = "Olá, Mundo!";
puts(saudacao);
```

### `scanf()`

Pode ser utilizado para ler uma palavra e armazená-la em um vetor de caracteres.

```c
char nome[50];
printf("Digite seu nome: ");
scanf("%s", nome);
```

No exemplo do material, `%s` realiza a leitura de uma palavra.

## 14. `gets()` e `fgets()`

O Material 005 chama atenção para a função `gets()`.

> [!warning] `gets()` é insegura
> Segundo o material, `gets()` foi removida do padrão C11 por não verificar o tamanho do buffer, podendo provocar desbordamento de buffer.

Exemplo antigo:

```c
char frase[100];
gets(frase);
```

A recomendação apresentada no slide é utilizar `fgets()`:

```c
char frase[100];
fgets(frase, sizeof(frase), stdin);
```

Com `fgets()`, é informado o tamanho máximo da leitura.

## 15. Manipulação de strings

O material destaca que a manipulação de strings aparece em várias situações de programação, como:

- entrada e saída de dados;
- processamento de texto;
- arquivos de texto;
- entradas do usuário;
- comunicação por redes.

As funções especializadas são apresentadas como importantes por motivos de segurança, eficiência, consistência e facilidade de uso.

### Biblioteca `string.h`

Várias das funções estudadas pertencem à biblioteca:

```c
#include <string.h>
```

## 16. Funções básicas de manipulação

| Função | Finalidade apresentada no material |
|---|---|
| `strcpy()` | Copia uma string para outra. |
| `strncpy()` | Copia uma quantidade específica de caracteres. |
| `strcat()` | Concatena uma string ao final de outra. |
| `strncat()` | Concatena uma quantidade específica de caracteres. |
| `strlen()` | Retorna o comprimento de uma string. |

### `strcpy()`

```c
char origem[] = "Olá";
char destino[50];

strcpy(destino, origem);
```

### `strncpy()`

O exemplo do material reforça a necessidade de inserir manualmente o terminador quando se copia apenas parte da string.

```c
char origem[] = "Mundo";
char destino[50];

strncpy(destino, origem, 3);
destino[3] = '\0';
```

### `strcat()`

```c
char destino[50] = "Olá, ";
char origem[] = "Mundo";

strcat(destino, origem);
```

### `strncat()`

```c
char destino[50] = "Bom Dia, ";
char origem[] = "Olá";

strncat(destino, origem, 3);
```

### `strlen()`

```c
printf("%zu\n", strlen(destino));
```

Ela retorna o comprimento da string.

## 17. Comparação de strings

| Função | Finalidade |
|---|---|
| `strcmp()` | Compara duas strings. |
| `strncmp()` | Compara uma quantidade específica de caracteres. |
| `strcasecmp()` | Compara ignorando diferenças entre maiúsculas e minúsculas. |

O material observa que `strcasecmp()` **não faz parte do padrão ANSI C**, embora seja amplamente suportada.

### Exemplo com `strcmp()`

```c
char string1[] = "Olá";
char string2[] = "Olá";

if (strcmp(string1, string2) == 0) {
    printf("As strings são iguais.\n");
} else {
    printf("As strings são diferentes.\n");
}
```

No exemplo apresentado, retorno igual a `0` indica igualdade entre as strings comparadas.

## 18. Conversão e formatação

O Material 005 apresenta as seguintes funções:

| Função | Finalidade |
|---|---|
| `sprintf()` | Formata e armazena uma string. |
| `sscanf()` | Lê dados formatados de uma string. |
| `atoi()` | Converte uma string para `int`. |
| `atol()` | Converte uma string para `long int`. |
| `atof()` | Converte uma string para número de ponto flutuante. |

### `sprintf()`

```c
char buffer[100];
int idade = 30;

sprintf(buffer, "Eu tenho %d anos.", idade);
printf("%s\n", buffer);
```

### `sscanf()`

```c
char entrada[] = "123 456.789";
int num1;
double num2;

sscanf(entrada, "%d %lf", &num1, &num2);
```

### `atoi()`

```c
char strInt[] = "42";
int valor = atoi(strInt);
```

### `atol()`

```c
char strLong[] = "1234567890";
long int valor = atol(strLong);
```

### `atof()`

```c
char strDouble[] = "3.14159";
double valor = atof(strDouble);
```

## 19. Resumo rápido

| Estrutura | Exemplo | Acesso |
|---|---|---|
| Vetor | `int v[5];` | `v[i]` |
| Matriz 2D | `int m[3][4];` | `m[i][j]` |
| Matriz 3D | `int m[2][3][4];` | `m[i][j][k]` |
| String | `char nome[50];` | `nome[i]` |

> [!tip] Relação com a Aula 004
> Vetores normalmente são percorridos com um laço. Matrizes 2D normalmente utilizam dois laços aninhados. Por isso, as estruturas de repetição da Aula 004 são fundamentais para trabalhar com o conteúdo desta aula.

## 20. Exercícios — Vetores

> [!todo] Prática
> 1. **Soma dos elementos:** leia um vetor de 10 números inteiros e calcule a soma de todos os elementos.
> 2. **Maior e menor valor:** leia um vetor de 8 posições, encontre o maior e o menor valor e informe suas posições.
> 3. **Inversão de vetor:** leia 15 números inteiros e apresente o vetor em ordem inversa.
> 4. **Contagem de pares e ímpares:** leia 20 números e informe quantos são pares e quantos são ímpares.
> 5. **Números negativos:** leia um vetor de 12 posições, substitua valores negativos por zero e imprima o vetor modificado.

## 21. Exercícios — Matrizes 2D

> [!todo] Prática
> 1. **Soma de matrizes:** leia duas matrizes `3 x 3`, some seus elementos correspondentes e imprima a matriz resultante.
> 2. **Diagonal principal:** leia uma matriz `4 x 4` e imprima sua diagonal principal.
> 3. **Transposta:** leia uma matriz `3 x 3` e imprima sua transposta, trocando linhas por colunas.
> 4. **Maior valor:** leia uma matriz `5 x 5`, encontre o maior valor e informe sua linha e coluna.
> 5. **Multiplicação por escalar:** leia uma matriz `2 x 2` e um inteiro, multiplique cada elemento pelo escalar e imprima o resultado.

## 22. Exercícios — Manipulação de strings

> [!todo] Prática
> 1. **Concatenação:** leia duas strings e utilize `strcat()` para adicionar a segunda ao final da primeira.
> 2. **Comparação:** leia duas strings e utilize `strcmp()` para informar se são iguais ou diferentes.
> 3. **Cópia limitada:** leia uma frase e um número `n`; utilize `strncpy()` para copiar os primeiros `n` caracteres para uma terceira string.
> 4. **Conversão para número:** leia uma string que represente um número decimal e outra que represente um ponto flutuante; converta-as utilizando `atoi()` e `atof()` e imprima a soma.
> 5. **Formatação e leitura:** leia nome, idade e altura; utilize `sprintf()` para formar uma única string e depois `sscanf()` para extrair novamente as informações.

## 23. Erros e cuidados importantes

- Acessar índices fora do tamanho declarado do vetor ou matriz.
- Esquecer que o primeiro índice é `0`.
- Usar um vetor local sem inicializá-lo e assumir que suas posições começam em zero.
- Esquecer o espaço necessário para `\0` ao armazenar strings.
- Confundir um caractere (`'A'`) com uma string (`"A"`).
- Esquecer o terminador após uma cópia parcial com `strncpy()` no padrão mostrado pelo material.
- Utilizar `gets()` apesar do alerta de segurança apresentado na aula.
- Usar funções de strings sem incluir `string.h` quando necessário.

## 24. Conexões

- [[semestre-2/LP - Linguagem de Programação 1/Aula 004|Aula 004 — Estruturas de Repetição]] — os laços `for` são utilizados para percorrer vetores e matrizes.
- [[semestre-2/LP - Linguagem de Programação 1/Aula 003|Aula 003 — Estruturas de Controle: Blocos, Decisão e Seleção]] — condições podem ser utilizadas durante a análise dos elementos de vetores e matrizes.
- [[semestre-1/Algoritmos e lógica de programação/Aula 006|Algoritmos — Aula 006: Estruturas de Controle]] — revisão das estruturas lógicas utilizadas nos percursos e análises desta aula.

## Revisão ativa

> [!question] Perguntas
> - Qual é a diferença entre um vetor e uma matriz 2D?
> - Por que todos os elementos de uma matriz possuem o mesmo tipo?
> - Quais são os índices válidos de `int v[5]`?
> - O que acontece com os elementos restantes quando um vetor é parcialmente inicializado?
> - Por que matrizes 2D normalmente utilizam dois laços `for` aninhados?
> - Qual é a diferença entre `char letra = 'A'` e `char texto[] = "A"`?
> - Qual é a função do caractere `\0`?
> - Qual é a diferença entre `printf()` e `puts()` para exibir strings?
> - Por que o material recomenda `fgets()` em vez de `gets()`?
> - Para que servem `strcpy()`, `strcat()` e `strlen()`?
> - Como `strcmp()` indica que duas strings são iguais no exemplo da aula?
> - Qual é a diferença entre `sprintf()` e `sscanf()`?
> - Para que servem `atoi()`, `atol()` e `atof()`?

## Materiais

- `LP_005.pdf` — Professor Maromo, Material 005.

---

[[01 - Painel/00 - Início|Início]] · [[semestre-2/LP - Linguagem de Programação 1/Aula 004|← Aula anterior — Aula 004]]
