25/03/2026
# 📘 Aula 006 — Estruturas de Controle (Resumo Completo)

---

## 1. O que são Estruturas de Controle?

São **comandos que alteram o fluxo padrão de execução** (sequencial) de um programa. Sem elas, o programa executaria linha por linha, sem tomar decisões ou repetir ações.

**Analogia:** Pense no GPS. Ele não apenas segue uma rota fixa — ele **decide** qual caminho tomar dependendo do trânsito (decisão) e pode **repetir** instruções como "vire à direita" até você chegar ao destino (repetição).

**Dois grandes grupos:**

| Tipo | Para que serve | Estruturas |
|---|---|---|
| **Decisão** | Controla o fluxo com base em condições | `if/else`, `switch` |
| **Repetição** | Executa blocos de código múltiplas vezes | `for`, `while`, `do-while` |

---

## 2. Estruturas de Decisão

### 2.1 — If / Else

Executa um bloco de código **se** uma condição for verdadeira. Caso contrário, executa o bloco `else`.

**Sintaxe:**
```c
if (condição) {
    // executado se condição for TRUE
} else {
    // executado se condição for FALSE
}
```

**Exemplo — verificar número positivo:**
```c
// Em C
if (numero > 0) {
    printf("Número positivo");
} else {
    printf("Número negativo ou zero");
}
```

```java
// Em Java
if (numero > 0) {
    System.out.println("Número positivo");
} else {
    System.out.println("Número negativo ou zero");
}
```

```python
# Em Python
if numero > 0:
    print("Número positivo")
else:
    print("Número negativo ou zero")
```

**If encadeado (else if) — múltiplas condições:**
```c
if (nota >= 7) {
    printf("Aprovado");
} else if (nota >= 5) {
    printf("Recuperação");
} else {
    printf("Reprovado");
}
```

> 💡 **Regra de ouro:** O `else` só executa se o `if` for **false**. O `else if` cria uma nova condição intermediária. Apenas **um** dos blocos será executado.

---

### 2.2 — Switch

Executa diferentes blocos de código com base no **valor exato** de uma variável. É mais limpo que vários `else if` quando se testa o mesmo valor múltiplas vezes.

**Sintaxe:**
```c
switch (variável) {
    case valor1:
        // bloco de código
        break;
    case valor2:
        // outro bloco
        break;
    default:
        // bloco padrão (se nenhum case bater)
}
```

**Exemplo — dia da semana:**
```c
// Em C
switch (dia) {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    default:
        printf("Outro dia");
}
```

```java
// Em Java
switch (dia) {
    case 1:
        System.out.println("Domingo");
        break;
    case 2:
        System.out.println("Segunda-feira");
        break;
    default:
        System.out.println("Outro dia");
}
```

```python
# Em Python (versão 3.10+, usando match)
match dia:
    case 1:
        print("Domingo")
    case 2:
        print("Segunda-feira")
    case _:
        print("Outro dia")
```

> ⚠️ **O `break` é obrigatório!** Sem ele, o código "cai" para o próximo `case` e executa tudo até encontrar um `break` ou o fim do switch. Isso se chama **fall-through** e é um erro comum.

**Comparação: If vs Switch**

| Critério | `if / else if` | `switch` |
|---|---|---|
| Tipo de condição | Qualquer expressão lógica | Valor **exato** de uma variável |
| Legibilidade | Pode ficar verboso com muitos casos | Mais limpo para muitos valores |
| Uso típico | Intervalos, comparações complexas | Menus, dias, meses, opções fixas |

---

## 3. Estruturas de Repetição (Laços)

### 3.1 — For

Repete um bloco de código por um **número fixo e conhecido de vezes**.

**Sintaxe:**
```c
for (inicialização; condição; incremento) {
    // bloco de código
}
```

| Parte | O que faz | Executado |
|---|---|---|
| `inicialização` | Cria e define o contador | **Uma única vez** (no início) |
| `condição` | Verifica se continua | **Antes de cada iteração** |
| `incremento` | Atualiza o contador | **Após cada iteração** |

**Exemplo — imprimir 1 a 5:**
```c
// Em C
for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
// Saída: 1 2 3 4 5
```

```java
// Em Java
for (int i = 1; i <= 5; i++) {
    System.out.println(i);
}
```

```python
# Em Python
for i in range(1, 6):  # range(1, 6) gera: 1, 2, 3, 4, 5
    print(i)
```

**Passo a passo da execução:**
```
i=1 → 1 <= 5? SIM → imprime 1 → i++ → i=2
i=2 → 2 <= 5? SIM → imprime 2 → i++ → i=3
i=3 → 3 <= 5? SIM → imprime 3 → i++ → i=4
i=4 → 4 <= 5? SIM → imprime 4 → i++ → i=5
i=5 → 5 <= 5? SIM → imprime 5 → i++ → i=6
i=6 → 6 <= 5? NÃO → para o loop ✅
```

> 💡 **Quando usar `for`:** Quando você **sabe quantas vezes** o loop vai repetir antes de começar.

---

### 3.2 — While

Executa um bloco de código **enquanto** a condição for verdadeira. A condição é verificada **antes** de cada execução.

**Sintaxe:**
```c
while (condição) {
    // bloco de código
}
```

**Exemplo — imprimir 1 a 5:**
```c
// Em C
int i = 1;
while (i <= 5) {
    printf("%d\n", i);
    i++;
}
```

```java
// Em Java
int i = 1;
while (i <= 5) {
    System.out.println(i);
    i++;
}
```

```python
# Em Python
i = 1
while i <= 5:
    print(i)
    i += 1
```

> ⚠️ **Cuidado com loop infinito!** Se esquecer o `i++` dentro do `while`, a condição nunca se tornará falsa e o programa travará. **Sempre garanta que a condição eventualmente se torne false.**

> 💡 **Quando usar `while`:** Quando você **não sabe quantas vezes** o loop vai repetir — por exemplo, ler dados até o usuário digitar "sair".

---

### 3.3 — Do-While

Similar ao `while`, mas com uma diferença crucial: executa o bloco **pelo menos uma vez** antes de verificar a condição.

**Sintaxe:**
```c
do {
    // bloco de código
} while (condição);
```

**Exemplo — imprimir 1 a 5:**
```c
// Em C
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 5);
```

```java
// Em Java
int i = 1;
do {
    System.out.println(i);
    i++;
} while (i <= 5);
```

> 💡 **Quando usar `do-while`:** Quando o bloco precisa executar **ao menos uma vez** independente da condição. Exemplo clássico: **menus interativos** — exibe o menu primeiro, depois verifica se o usuário quer continuar.

---

### 3.4 — Comparação: While vs Do-While

| Característica | `while` | `do-while` |
|---|---|---|
| Verifica condição | **Antes** de executar | **Depois** de executar |
| Execuções mínimas | **0** (pode não executar nada) | **1** (sempre executa ao menos uma vez) |
| Uso típico | Condição pode ser falsa desde o início | Precisa executar pelo menos uma vez |

**Exemplo que mostra a diferença:**
```c
int i = 10;

// While: condição (10 <= 5) é FALSE → não executa nada
while (i <= 5) {
    printf("While: %d\n", i);
}

// Do-While: executa primeiro, DEPOIS verifica → imprime "10" uma vez
do {
    printf("Do-While: %d\n", i);
} while (i <= 5);
```

---

### 3.5 — Resumo Comparativo dos Laços

| Laço | Quando usar | Verifica condição | Execuções mínimas |
|---|---|---|---|
| `for` | Número **fixo e conhecido** de repetições | Antes | 0 |
| `while` | Número **desconhecido**, condição pode falhar logo | Antes | 0 |
| `do-while` | Precisa executar **ao menos uma vez** | Depois | 1 |

---

## 4. Controle de Laços: Break e Continue

### 4.1 — Break

**Para o laço imediatamente**, independente da condição. Também sai do `switch`.

```c
// Exemplo: parar ao chegar em 5
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;  // Sai do loop quando i = 5
    }
    printf("%d\n", i);
}
// Saída: 1 2 3 4
// (o 5 não é impresso porque o break vem antes do printf)
```

```python
# Em Python
for i in range(1, 11):
    if i == 5:
        break
    print(i)
# Saída: 1 2 3 4
```

> 💡 **Uso comum do `break`:** Buscar um elemento em uma lista — quando encontrar, para o loop.

---

### 4.2 — Continue

**Pula a iteração atual** e vai direto para a próxima, sem parar o loop.

```c
// Exemplo: imprimir de 1 a 10, pulando o 5
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        continue;  // Pula o printf quando i = 5
    }
    printf("%d\n", i);
}
// Saída: 1 2 3 4 6 7 8 9 10
```

```python
# Em Python
for i in range(1, 11):
    if i == 5:
        continue
    print(i)
# Saída: 1 2 3 4 6 7 8 9 10
```

> 💡 **Diferença crucial:**
> - `break` → **termina** o loop
> - `continue` → **pula** a iteração atual, mas o loop **continua**

**Tabela comparativa:**

| Comando | O que faz | Loop continua? |
|---|---|---|
| `break` | Sai do loop imediatamente | ❌ Não |
| `continue` | Pula a iteração atual | ✅ Sim |

---

## 5. Aplicações Práticas

| Aplicação | Estrutura usada |
|---|---|
| **Menus interativos** | `switch` + `do-while` (exibe menu, lê opção, processa) |
| **Processamento de grandes volumes de dados** | `for` ou `while` (percorrer listas, arquivos, registros) |
| **Validação de entrada** | `while` (repetir até o usuário digitar dado válido) |
| **Problemas condicionais complexos** | `if/else if/else` encadeados |
| **Busca com parada antecipada** | `for` + `break` |
| **Filtrar dados** | `for` + `continue` |

---

## ✅ Resolução dos Exercícios de Fixação

### Exercício 1 — Determinar se um número é par ou ímpar usando `if`

```c
// Em C
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é PAR\n", numero);
    } else {
        printf("%d é ÍMPAR\n", numero);
    }
    return 0;
}
```

```java
// Em Java
import java.util.Scanner;

public class ParImpar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Digite um número: ");
        int numero = sc.nextInt();

        if (numero % 2 == 0) {
            System.out.println(numero + " é PAR");
        } else {
            System.out.println(numero + " é ÍMPAR");
        }
        sc.close();
    }
}
```

```python
# Em Python
numero = int(input("Digite um número: "))

if numero % 2 == 0:
    print(f"{numero} é PAR")
else:
    print(f"{numero} é ÍMPAR")
```

---

### Exercício 2 — Soma dos números de 1 a 100 usando `for`

> **Fórmula para verificar:** $$\sum_{i=1}^{100} i = \frac{100 \times 101}{2} = 5050$$

```c
// Em C
#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;  // soma = soma + i
    }

    printf("Soma de 1 a 100: %d\n", soma);
    // Saída: Soma de 1 a 100: 5050
    return 0;
}
```

```java
// Em Java
public class SomaFor {
    public static void main(String[] args) {
        int soma = 0;

        for (int i = 1; i <= 100; i++) {
            soma += i;
        }

        System.out.println("Soma de 1 a 100: " + soma);
        // Saída: 5050
    }
}
```

```python
# Em Python
soma = 0

for i in range(1, 101):  # range(1, 101) = 1 até 100
    soma += i

print(f"Soma de 1 a 100: {soma}")
# Saída: 5050

# Versão simplificada em Python:
print(sum(range(1, 101)))  # Saída: 5050
```

---

### Exercício 3 — Imprimir 1 a 10 exceto o 5, usando `continue`

```c
// Em C
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Pula o número 5
        }
        printf("%d\n", i);
    }
    // Saída: 1 2 3 4 6 7 8 9 10
    return 0;
}
```

```java
// Em Java
public class SemCinco {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                continue;
            }
            System.out.println(i);
        }
        // Saída: 1 2 3 4 6 7 8 9 10
    }
}
```

```python
# Em Python
for i in range(1, 11):
    if i == 5:
        continue
    print(i)
# Saída: 1 2 3 4 6 7 8 9 10
```

---

### Exercício 4 — Switch para exibir os meses de 1 a 12

```c
// Em C
#include <stdio.h>

int main() {
    int mes;
    printf("Digite o número do mês (1-12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:  printf("Janeiro\n");   break;
        case 2:  printf("Fevereiro\n"); break;
        case 3:  printf("Março\n");     break;
        case 4:  printf("Abril\n");     break;
        case 5:  printf("Maio\n");      break;
        case 6:  printf("Junho\n");     break;
        case 7:  printf("Julho\n");     break;
        case 8:  printf("Agosto\n");    break;
        case 9:  printf("Setembro\n");  break;
        case 10: printf("Outubro\n");   break;
        case 11: printf("Novembro\n");  break;
        case 12: printf("Dezembro\n");  break;
        default: printf("Mês inválido! Digite entre 1 e 12.\n");
    }
    return 0;
}
```

```java
// Em Java
import java.util.Scanner;

public class Meses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Digite o número do mês (1-12): ");
        int mes = sc.nextInt();

        switch (mes) {
            case 1:  System.out.println("Janeiro");   break;
            case 2:  System.out.println("Fevereiro"); break;
            case 3:  System.out.println("Março");     break;
            case 4:  System.out.println("Abril");     break;
            case 5:  System.out.println("Maio");      break;
            case 6:  System.out.println("Junho");     break;
            case 7:  System.out.println("Julho");     break;
            case 8:  System.out.println("Agosto");    break;
            case 9:  System.out.println("Setembro");  break;
            case 10: System.out.println("Outubro");   break;
            case 11: System.out.println("Novembro");  break;
            case 12: System.out.println("Dezembro");  break;
            default: System.out.println("Mês inválido!");
        }
        sc.close();
    }
}
```

```python
# Em Python (match - versão 3.10+)
mes = int(input("Digite o número do mês (1-12): "))

match mes:
    case 1:  print("Janeiro")
    case 2:  print("Fevereiro")
    case 3:  print("Março")
    case 4:  print("Abril")
    case 5:  print("Maio")
    case 6:  print("Junho")
    case 7:  print("Julho")
    case 8:  print("Agosto")
    case 9:  print("Setembro")
    case 10: print("Outubro")
    case 11: print("Novembro")
    case 12: print("Dezembro")
    case _:  print("Mês inválido!")
```

---

## 6. Revisão Geral da Aula

| Estrutura | Tipo | Característica principal |
|---|---|---|
| `if / else` | Decisão | Executa blocos com base em condição verdadeira/falsa |
| `switch` | Decisão | Compara valor exato, ideal para múltiplos casos fixos |
| `for` | Repetição | Número **fixo** de iterações |
| `while` | Repetição | Repete **enquanto** condição for verdadeira (testa antes) |
| `do-while` | Repetição | Executa **pelo menos uma vez** (testa depois) |
| `break` | Controle de laço | **Para** o loop imediatamente |
| `continue` | Controle de laço | **Pula** a iteração atual |
	