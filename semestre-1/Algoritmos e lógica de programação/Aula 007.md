Data: 01/04/2026

----------
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
