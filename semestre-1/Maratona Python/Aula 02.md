Data: 07/03/2026

---

# Base do Código em Python

## 1️⃣ Variáveis

Uma **variável** é um espaço na memória do computador usado para **guardar um valor**.

Em Python você **não precisa declarar o tipo antes**, basta atribuir um valor.

Exemplo do seu código:

```python
nome = "Zelia da Silva"
```

Aqui:

- `nome` → nome da variável
    
- `"Zelia da Silva"` → valor armazenado
    
- o `=` → operador de atribuição
    

Python identifica automaticamente o tipo.

---

# 2️⃣ Tipos de Valores (Tipos de Variáveis)

Os principais tipos usados em Python são:

## 🔹 String (str)

Representa **texto**.

Sempre entre **aspas**.

```python
nome = "Zelia da Silva"
```

Exemplos:

```python
cidade = "Mogi Guaçu"
curso = "ADS"
```

No seu código:

```python
print(nome)
```

Isso imprime o valor da variável.

---

## 🔹 Inteiro (int)

Números **sem casas decimais**.

Exemplo:

```python
idade = 20
ano = 2026
```

---

## 🔹 Float (float)

Números **com casas decimais**.

Exemplo:

```python
preco = 21.00
altura = 1.75
```

---

## 🔹 Boolean (bool)

Valores lógicos.

```python
True
False
```

Exemplo:

```python
ativo = True
logado = False
```

---

# 3️⃣ A Função print()

Serve para **mostrar algo na tela**.

Exemplo do seu código:

```python
print(nome)
```

Saída:

```
Zelia da Silva
```

---

# 4️⃣ Acessando Caracteres da String

Python permite acessar **cada letra de um texto**.

```python
print(nome[0])
```

Resultado:

```
Z
```

Porque o Python conta assim:

|posição|letra|
|---|---|
|0|Z|
|1|e|
|2|l|
|3|i|
|4|a|

Python sempre começa do **zero**.

---

# 5️⃣ Fatiamento de String (Slice)

Você também pode pegar **partes do texto**.

No seu código:

```python
print(nome[0:4])
```

Resultado:

```
Zeli
```

Explicação:

```
inicio : fim
```

Mas o **fim não é incluído**.

Outro exemplo seu:

```python
print(nome[3:7])
```

Resultado:

```
ia d
```

---

# 6️⃣ Manipulação de Texto

Python tem várias funções para trabalhar com strings.

### 🔹 Upper

Transforma tudo em **maiúsculo**

```python
print(nome.upper())
```

Resultado:

```
ZELIA DA SILVA
```

---

### 🔹 Lower

Transforma tudo em **minúsculo**

```python
print(nome.lower())
```

Resultado:

```
zelia da silva
```

---

# 7️⃣ Imutabilidade das Strings

Strings em Python são **imutáveis**.

Isso significa:

👉 Você **não altera o texto original**, você cria um **novo**.

Seu código explica isso:

```python
print(nome.replace("Silva", "Souza"))
```

Isso **não altera a variável**.

Para alterar:

```python
nome = nome.replace("Silva", "Souza")
```

Agora a variável passa a valer:

```
Zelia da Souza
```

---

# 8️⃣ Removendo Espaços (strip)

No seu código:

```python
exemplo = "                     ola turma"
```

Isso possui vários espaços.

Usando:

```python
print(exemplo.strip())
```

Resultado:

```
ola turma
```

Remove **espaços no começo e no fim**.

---

# 9️⃣ Split (quebrar texto)

O `split()` divide um texto em **partes**.

Seu exemplo:

```python
frase = "Fui pescar ontem, estava escuro"
print(frase.split(" "))
```

Resultado:

```
['Fui', 'pescar', 'ontem,', 'estava', 'escuro']
```

Isso cria um **vetor (lista)**.

---

# 🔟 Vetores (Listas)

Quando você faz:

```python
fatia = frase.split(" ")
```

Você cria uma **lista**.

Exemplo:

```
['Fui', 'pescar', 'ontem,', 'estava', 'escuro']
```

Acessando posição:

```python
print(fatia[0])
```

Resultado:

```
Fui
```

---

# 11️⃣ Separando dados estruturados

Seu código tem um exemplo muito usado em sistemas:

```python
texto1 = "Antonio Carlos;Paga 21,00;Dia 18/03"
```

Separando:

```python
print(texto1.split(";"))
```

Resultado:

```
['Antonio Carlos', 'Paga 21,00', 'Dia 18/03']
```

Agora você pode acessar cada parte.

---

# 12️⃣ len() — tamanho

Conta quantos caracteres existem.

Exemplo do seu código:

```python
print(len(vetor[0]))
```

Se `vetor[0]` for:

```
Antonio Carlos
```

Resultado:

```
14
```

---

# 📊 Resumo da Base do Python

|Conceito|Exemplo|Função|
|---|---|---|
|Variável|`nome = "Ana"`|Guardar valor|
|print|`print(nome)`|Mostrar na tela|
|String|`"texto"`|Texto|
|Inteiro|`10`|Número|
|Float|`10.5`|Decimal|
|Boolean|`True`|Lógico|
|Slice|`nome[0:4]`|Parte do texto|
|Upper|`upper()`|Maiúsculo|
|Lower|`lower()`|Minúsculo|
|Replace|`replace()`|Trocar texto|
|Split|`split()`|Quebrar texto|
|Len|`len()`|Contar caracteres|

---

# Listas em Python (Vetores)

Em Python, o que em outras linguagens chamamos de **vetor ou array**, chamamos de **lista**.

Características principais:

- São **dinâmicas** (não precisam de tamanho definido)
    
- Guardam **vários valores**
    
- São **sequenciais**
    
- Cada item possui um **índice (posição)**
    

Exemplo básico:

```python
valores = [1, 4, 7, 9, 11]
```

Aqui temos:

|posição|valor|
|---|---|
|0|1|
|1|4|
|2|7|
|3|9|
|4|11|

Python **sempre começa no índice 0**.

---

# Exibindo uma Lista

Para mostrar todos os elementos:

```python
print(valores)
```

Saída:

```
[1, 4, 7, 9, 11]
```

---

# Acessando um elemento específico

Podemos acessar um item pela **posição**.

Exemplo:

```python
print(valores[3])
```

Saída:

```
9
```

Porque:

|posição|valor|
|---|---|
|0|1|
|1|4|
|2|7|
|3|9|

---

# Fatiamento de Lista (Slice)

Podemos pegar **partes da lista**.

Formato:

```
lista[inicio:fim]
```

Regra importante:

- **primeiro é INCLUSIVE**
    
- **último é EXCLUSIVE**
    

Exemplo do seu código:

```python
print(valores[3:3])
```

Resultado:

```
[]
```

Porque começa no **3** e termina no **3**, então **não pega nada**.

---

Outro exemplo:

```python
print(valores[2:4])
```

Resultado:

```
[7, 9]
```

Explicação:

|posição|valor|
|---|---|
|2|7|
|3|9|
|4|11|

O **4 é exclusivo**, então **11 não entra**.

---

# Criando outra Lista

Exemplo do seu código:

```python
lista = [32, 1, 7, 8, 0, 21]
```

Saída ao imprimir:

```python
print(lista)
```

Resultado:

```
[32, 1, 7, 8, 0, 21]
```

---

# Adicionando elementos na Lista

Para inserir novos valores usamos:

```
append()
```

Exemplo:

```python
lista.append(14)
```

Isso adiciona **no final da lista**.

Resultado:

```
[32, 1, 7, 8, 0, 21, 14]
```

---

# Inserindo vários valores com Loop

Seu código usa **for + range** para adicionar vários valores digitados.

```python
for i in range(10):
    lista.append(int(input("Digite um valor: ")))
```

Explicação:

|elemento|função|
|---|---|
|for|estrutura de repetição|
|range(10)|repete 10 vezes|
|input()|recebe dados do teclado|
|int()|converte texto para número|

Importante:

⚠️ Tudo que vem do **input** é **string**.

Por isso usamos:

```python
int(input())
```

para converter para **inteiro**.

---

# Exemplo de Execução

Se o usuário digitar:

```
5
8
3
10
2
7
9
6
1
4
```

A lista final será:

```
[32, 1, 7, 8, 0, 21, 14, 5, 8, 3, 10, 2, 7, 9, 6, 1, 4]
```

---

# Tamanho da Lista

Para saber quantos elementos existem usamos:

```
len()
```

Exemplo:

```python
print(len(lista))
```

Saída:

```
17
```

Isso significa que a lista possui **17 elementos**.

---

# Resumo das Operações com Lista

|Operação|Código|Função|
|---|---|---|
|Criar lista|`lista = [1,2,3]`|Criar vetor|
|Mostrar lista|`print(lista)`|Exibir|
|Acessar posição|`lista[2]`|Elemento específico|
|Fatiamento|`lista[1:4]`|Parte da lista|
|Adicionar valor|`append()`|Adicionar no final|
|Loop|`for`|Repetição|
|Entrada usuário|`input()`|Receber valor|
|Converter tipo|`int()`|Texto → número|
|Tamanho lista|`len()`|Quantidade de itens|

---

# Código Final Organizado

Baseado no seu exemplo:

```python
# Lista (vetor) em Python

valores = [1, 4, 7, 9, 11]

print(valores)
print(valores[3])

print(valores[3:3])
print(valores[2:4])

lista = [32, 1, 7, 8, 0, 21]

print(lista)

lista.append(14)

print(lista)

for i in range(10):
    lista.append(int(input("Digite um valor: ")))

print(lista)

print(len(lista))
```

---
# Operações com Listas em Python

## 1️⃣ insert() — Inserir em uma posição específica

O `insert()` permite adicionar um elemento **em uma posição específica da lista**.

Sintaxe:

```python
lista.insert(posicao, valor)
```

Exemplo:

```python
lista = [10, 20, 30, 40]

lista.insert(2, 25)

print(lista)
```

Resultado:

```
[10, 20, 25, 30, 40]
```

Explicação:

|posição|valor|
|---|---|
|0|10|
|1|20|
|2|25|
|3|30|
|4|40|

O valor **25 foi inserido na posição 2**.

---

# 2️⃣ remove() — Remover um valor

Remove **um valor específico da lista**.

Sintaxe:

```python
lista.remove(valor)
```

Exemplo:

```python
lista = [10, 20, 30, 40]

lista.remove(30)

print(lista)
```

Resultado:

```
[10, 20, 40]
```

⚠️ Importante:

- remove **o primeiro valor encontrado**
    
- se o valor **não existir**, dá erro.
    

---

# 3️⃣ pop() — Remover pela posição

O `pop()` remove um elemento **pela posição (índice)**.

Sintaxe:

```python
lista.pop(posicao)
```

Exemplo:

```python
lista = [5, 10, 15, 20]

lista.pop(2)

print(lista)
```

Resultado:

```
[5, 10, 20]
```

Porque removemos o valor **15**.

---

### Pop sem posição

Se usar apenas:

```python
lista.pop()
```

Ele remove **o último elemento**.

Exemplo:

```python
lista = [1, 2, 3, 4]

lista.pop()

print(lista)
```

Resultado:

```
[1, 2, 3]
```

---

# 4️⃣ sort() — Ordenar a lista

Ordena os valores **em ordem crescente**.

Sintaxe:

```python
lista.sort()
```

Exemplo:

```python
lista = [8, 3, 1, 10, 5]

lista.sort()

print(lista)
```

Resultado:

```
[1, 3, 5, 8, 10]
```

---

### Ordem decrescente

```python
lista.sort(reverse=True)
```

Exemplo:

```python
lista = [8, 3, 1, 10, 5]

lista.sort(reverse=True)

print(lista)
```

Resultado:

```
[10, 8, 5, 3, 1]
```

---

# 5️⃣ reverse() — Inverter a lista

O `reverse()` **inverte a ordem dos elementos**.

Exemplo:

```python
lista = [1, 2, 3, 4]

lista.reverse()

print(lista)
```

Resultado:

```
[4, 3, 2, 1]
```

⚠️ Não ordena, apenas **inverte**.

---

# 6️⃣ Percorrendo uma lista com for

Muito usado em Python.

Exemplo:

```python
lista = [10, 20, 30, 40]

for item in lista:
    print(item)
```

Saída:

```
10
20
30
40
```

Aqui o `for` pega **cada elemento da lista**.

---

# 7️⃣ Percorrendo com índice

Também podemos acessar **a posição do elemento**.

Exemplo:

```python
lista = [10, 20, 30, 40]

for i in range(len(lista)):
    print(lista[i])
```

Explicação:

|comando|função|
|---|---|
|len(lista)|tamanho da lista|
|range()|gera sequência|
|lista[i]|acessa posição|

Saída:

```
10
20
30
40
```

---

# 8️⃣ Exemplo completo juntando tudo

```python
lista = [8, 3, 6, 1]

print("Lista original:", lista)

lista.append(10)

lista.insert(2, 5)

lista.remove(3)

lista.pop()

lista.sort()

print("Lista ordenada:", lista)

lista.reverse()

print("Lista invertida:", lista)

print("Percorrendo lista:")

for item in lista:
    print(item)
```

Resultado exemplo:

```
Lista original: [8, 3, 6, 1]
Lista ordenada: [1, 5, 6, 8]
Lista invertida: [8, 6, 5, 1]

8
6
5
1
```

---

# 📊 Resumo das Funções de Lista

|Função|O que faz|
|---|---|
|append()|Adiciona no final|
|insert()|Adiciona em posição específica|
|remove()|Remove pelo valor|
|pop()|Remove pela posição|
|sort()|Ordena lista|
|reverse()|Inverte ordem|
|len()|Conta elementos|

---

# Tuplas em Python

Uma **tupla** é uma estrutura muito parecida com a **lista**, mas com uma diferença principal:

⚠️ **Tuplas são imutáveis**

Isso significa que **não podemos alterar os valores depois de criá-las**.

---

# 1️⃣ Criando uma Tupla

Enquanto listas usam **colchetes `[]`**, tuplas usam **parênteses `()`**.

Exemplo:

```python
numeros = (10, 20, 30, 40)
```

Aqui criamos uma tupla com **4 valores**.

---

# 2️⃣ Exibindo a Tupla

Para mostrar os valores:

```python
print(numeros)
```

Resultado:

```
(10, 20, 30, 40)
```

---

# 3️⃣ Acessando Elementos

Assim como nas listas, usamos **índices**.

Exemplo:

```python
print(numeros[2])
```

Resultado:

```
30
```

Tabela de posições:

|posição|valor|
|---|---|
|0|10|
|1|20|
|2|30|
|3|40|

Python **sempre começa no índice 0**.

---

# 4️⃣ Fatiamento de Tupla

Também podemos pegar partes da tupla.

Exemplo:

```python
print(numeros[1:3])
```

Resultado:

```
(20, 30)
```

Regra:

- primeiro índice → **inclusivo**
    
- último índice → **exclusivo**
    

---

# 5️⃣ Tuplas são Imutáveis

Diferente das listas, **não podemos modificar valores**.

Exemplo:

```python
numeros[1] = 50
```

Isso gera erro:

```
TypeError: 'tuple' object does not support item assignment
```

Isso acontece porque a tupla **não pode ser alterada**.

---

# 6️⃣ Por que usar Tuplas?

Tuplas são usadas quando os dados **não devem ser alterados**.

Exemplos comuns:

- coordenadas (x, y)
    
- datas
    
- informações fixas
    
- retorno de funções
    

Exemplo:

```python
coordenada = (10, 25)

print(coordenada[0])
print(coordenada[1])
```

---

# 7️⃣ Tupla com um único elemento

Aqui existe uma pegadinha:

```python
tupla = (5)
```

Isso **não é tupla**, é um inteiro.

Para criar tupla de um elemento:

```python
tupla = (5,)
```

A vírgula é obrigatória.

---

# 8️⃣ Percorrendo uma Tupla

Podemos usar **for**, igual às listas.

Exemplo:

```python
numeros = (10, 20, 30, 40)

for n in numeros:
    print(n)
```

Saída:

```
10
20
30
40
```

---

# 9️⃣ Contando elementos

Usamos `len()`.

```python
numeros = (10, 20, 30)

print(len(numeros))
```

Resultado:

```
3
```

---

# 🔟 Métodos das Tuplas

Tuplas têm poucos métodos.

### count()

Conta quantas vezes um valor aparece.

```python
tupla = (1, 2, 3, 2, 4, 2)

print(tupla.count(2))
```

Resultado:

```
3
```

---

### index()

Mostra a posição de um valor.

```python
tupla = (10, 20, 30)

print(tupla.index(20))
```

Resultado:

```
1
```

---

# Diferença entre Lista e Tupla

|Característica|Lista|Tupla|
|---|---|---|
|Símbolo|`[]`|`()`|
|Alterável|Sim|Não|
|append()|Sim|Não|
|remove()|Sim|Não|
|Uso comum|dados que mudam|dados fixos|

---

# Exemplo Completo

```python
dados = ("Carlos", 25, "Programador")

print(dados)

print(dados[0])

print(dados[1:3])

for item in dados:
    print(item)

print(len(dados))
```

Saída:

```
('Carlos', 25, 'Programador')
Carlos
(25, 'Programador')

Carlos
25
Programador

3
```

---

# Resumo

|Conceito|Explicação|
|---|---|
|Tupla|Estrutura de dados imutável|
|Parênteses|`()`|
|Índice|Começa em 0|
|Slice|`tupla[1:3]`|
|len()|Conta elementos|
|count()|Conta ocorrências|
|index()|Mostra posição|

---

# Desempacotamento de Tuplas

O **desempacotamento** acontece quando pegamos os valores de uma tupla e **atribuímos cada valor a uma variável separada automaticamente**.

Exemplo básico:

```python
dados = ("Carlos", 25, "Programador")

nome, idade, profissao = dados

print(nome)
print(idade)
print(profissao)
```

Resultado:

```
Carlos
25
Programador
```

Aqui aconteceu o seguinte:

|variável|valor recebido|
|---|---|
|nome|Carlos|
|idade|25|
|profissao|Programador|

Python pegou cada posição da tupla e colocou em uma variável.

---

# Como o Python faz isso

A tupla:

```
("Carlos", 25, "Programador")
```

é distribuída assim:

```
nome      = "Carlos"
idade     = 25
profissao = "Programador"
```

Isso é o **desempacotamento**.

---

# Regra Importante

O número de **variáveis deve ser igual ao número de valores**.

Exemplo que funciona:

```python
tupla = (10, 20, 30)

a, b, c = tupla
```

Mas isso dá erro:

```python
a, b = (10, 20, 30)
```

Erro:

```
ValueError: too many values to unpack
```

Porque existem **3 valores para apenas 2 variáveis**.

---

# Desempacotamento direto

Nem precisamos criar a tupla antes.

Podemos fazer direto:

```python
nome, idade = ("Ana", 22)

print(nome)
print(idade)
```

Resultado:

```
Ana
22
```

---

# Usado para trocar valores

Python permite **trocar valores de variáveis facilmente** usando desempacotamento.

Exemplo:

```python
a = 5
b = 10

a, b = b, a

print(a)
print(b)
```

Resultado:

```
10
5
```

Isso acontece porque Python cria uma **tupla temporária**.

---

# Desempacotamento em loops

Muito comum ao percorrer listas ou tuplas.

Exemplo:

```python
pessoas = [("Ana", 20), ("Carlos", 25), ("Maria", 30)]

for nome, idade in pessoas:
    print(nome, idade)
```

Resultado:

```
Ana 20
Carlos 25
Maria 30
```

Cada tupla da lista é **desempacotada automaticamente**.

---

# Usando o operador *

Python permite capturar **vários valores ao mesmo tempo**.

Exemplo:

```python
numeros = (1, 2, 3, 4, 5)

a, *resto = numeros

print(a)
print(resto)
```

Resultado:

```
1
[2, 3, 4, 5]
```

Aqui:

|variável|valor|
|---|---|
|a|1|
|resto|[2,3,4,5]|

---

Outro exemplo:

```python
a, b, *resto = (10, 20, 30, 40, 50)

print(a)
print(b)
print(resto)
```

Resultado:

```
10
20
[30, 40, 50]
```

---

# Exemplo prático completo

```python
dados = ("João", 28, "Analista")

nome, idade, cargo = dados

print("Nome:", nome)
print("Idade:", idade)
print("Cargo:", cargo)
```

Saída:

```
Nome: João
Idade: 28
Cargo: Analista
```

---

# Resumo do Desempacotamento

|Conceito|Explicação|
|---|---|
|Desempacotamento|Separar valores de uma tupla em variáveis|
|Sintaxe|`a, b, c = tupla`|
|Troca de variáveis|`a, b = b, a`|
|Usado em loops|`for a, b in lista`|
|Operador *|Captura vários valores|

---
# Conjuntos (Set) em Python

Os **conjuntos** são estruturas de dados usadas para **armazenar valores únicos**.

Características principais:

- ❌ **Não aceitam valores repetidos**
    
- ⚡ **São rápidos para busca**
    
- 🔀 **Não possuem ordem garantida**
    
- 🧮 Muito usados para **operações matemáticas de conjuntos**
    

Em Python usamos:

```python
set()
```

---

# 1️⃣ Convertendo uma Lista para Conjunto

Seu primeiro exemplo:

```python
lista = [21, 23, 32, 32, 32, 44, 11, 19, 21, 32]
```

Aqui existem vários **valores repetidos**.

|valor|repetição|
|---|---|
|21|2 vezes|
|32|4 vezes|

---

Agora convertendo:

```python
conjunto = set(lista)
print(conjunto)
```

Resultado:

```
{32, 11, 44, 19, 21, 23}
```

Observe:

- os **valores repetidos desapareceram**
    
- a **ordem mudou**
    

Isso acontece porque **conjuntos não são ordenados**.

---

# 2️⃣ Convertendo novamente para Lista

Depois de remover os repetidos, podemos voltar para lista:

```python
listaconvertida = list(conjunto)
print(listaconvertida)
```

Resultado:

```
[32, 11, 44, 19, 21, 23]
```

Agora temos novamente uma **lista**, mas **sem repetição**.

---

# Fluxo completo do exemplo

```
Lista original
↓
Set (remove repetidos)
↓
Lista novamente
```

Representação:

```
[21,23,32,32,32,44,11,19,21,32]
           ↓
{32,11,44,19,21,23}
           ↓
[32,11,44,19,21,23]
```

---

# 3️⃣ Forma prática de remover repetidos

No **Código 06** você usa uma forma muito comum em Python.

```python
lista = [21, 11, 11, 11, 23, 45, 66, 66, 7]
```

Transformando direto:

```python
lista = list(set(lista))
```

Isso faz **duas coisas ao mesmo tempo**:

1️⃣ converte para **set**  
2️⃣ remove repetidos  
3️⃣ converte de volta para **lista**

Resultado:

```
[66, 7, 11, 45, 21, 23]
```

---

# 4️⃣ Ordenando a lista

Como a ordem muda, usamos:

```python
lista.sort()
```

Isso organiza os valores **em ordem crescente**.

Resultado final:

```
[7, 11, 21, 23, 45, 66]
```

---

# Importante sobre sort()

`sort()` funciona **in-place**.

Isso significa:

⚠️ Ele **altera a própria lista**, não cria outra.

Por isso fazemos:

```python
lista.sort()
print(lista)
```

E não:

```python
print(lista.sort())
```

Porque `sort()` **não retorna valor**.

---

# Código final explicado

```python
lista = [21, 11, 11, 11, 23, 45, 66, 66, 7]

# remove repetidos
lista = list(set(lista))

# ordena
lista.sort()

# exibe
print(lista)
```

Saída:

```
[7, 11, 21, 23, 45, 66]
```

---

# Resumo sobre Conjuntos

|Estrutura|Símbolo|Aceita repetição|
|---|---|---|
|Lista|`[]`|Sim|
|Tupla|`()`|Sim|
|Conjunto|`set()`|Não|

---

# Quando usar Conjuntos

Conjuntos são muito usados para:

- remover **valores duplicados**
    
- verificar **se um valor existe**
    
- operações matemáticas de conjunto
    

Exemplo:

```python
lista = [1,1,2,2,3,3]

lista = list(set(lista))

print(lista)
```

Resultado:

```
[1,2,3]
```

---

# Curiosidade importante (Python avançado)

Sets permitem operações matemáticas como:

|operação|símbolo|exemplo|
|---|---|---|
|União|`|`|
|Interseção|`&`|A & B|
|Diferença|`-`|A - B|

Exemplo:

```python
A = {1,2,3}
B = {3,4,5}

print(A & B)
```

Resultado:

```
{3}
```

---
# Dicionários em Python

Os **dicionários** são estruturas de dados usadas para **armazenar informações em pares chave-valor**.

Eles são definidos usando **chaves `{}`**.

Estrutura:

```python
dicionario = {
    chave: valor
}
```

Exemplo simples:

```python
usuario = {"nome": "ana", "email": "emaildaana@gmail.com"}
```

Aqui temos:

|chave|valor|
|---|---|
|nome|ana|
|email|[emaildaana@gmail.com](mailto:emaildaana@gmail.com)|

---

# Regras importantes dos Dicionários

✔ As **chaves (keys)** devem ser **hasháveis**, ou seja:

- string
    
- número
    
- tupla
    

❌ Não podem ser:

- listas
    
- dicionários
    
- sets
    

✔ Os **valores podem ser qualquer objeto Python**.

---

# Acessando valores do dicionário

Para acessar um valor usamos a **chave**.

Exemplo do seu código:

```python
print(usuario["nome"])
print(usuario["email"])
```

Saída:

```
ana
emaildaana@gmail.com
```

---

# Lista de Dicionários

Você também pode ter **vários dicionários dentro de uma lista**.

Exemplo:

```python
usuarios = [
    {"nome": "Ana", "idade": 22},
    {"nome": "Pedro", "idade": 14},
    {"nome": "Zeca", "idade": 70}
]
```

Estrutura:

```
Lista
│
├── {"nome": "Ana", "idade": 22}
├── {"nome": "Pedro", "idade": 14}
└── {"nome": "Zeca", "idade": 70}
```

---

# Percorrendo a lista de dicionários

Usamos um **for**.

```python
for usuario in usuarios:
   print(f'Nome: {usuario["nome"]}, sua idade: {usuario["idade"]}')
```

Aqui acontece:

1️⃣ O `for` percorre cada elemento da lista  
2️⃣ Cada elemento é um **dicionário**  
3️⃣ Usamos as **chaves** para acessar os valores

Saída:

```
Nome: Ana, sua idade: 22
Nome: Pedro, sua idade: 14
Nome: Zeca, sua idade: 70
```

---

# Dicionário simples com várias pessoas

Seu exemplo:

```python
escoteiros = {
   "Maromo": 21,
   "Pedro": 11,
   "Antonio": 15
}
```

Aqui temos:

|chave|valor|
|---|---|
|Maromo|21|
|Pedro|11|
|Antonio|15|

---

# Percorrendo chaves do dicionário

Usando `.keys()`:

```python
for chave in escoteiros.keys():
   print(f'{chave} tem {escoteiros[chave]} anos')
```

Explicação:

|comando|função|
|---|---|
|keys()|retorna todas as chaves|
|escoteiros[chave]|acessa o valor|

Saída:

```
Maromo tem 21 anos
Pedro tem 11 anos
Antonio tem 15 anos
```

---

# Outra forma mais usada (Python moderno)

Podemos usar `.items()`.

```python
for nome, idade in escoteiros.items():
    print(f'{nome} tem {idade} anos')
```

Saída:

```
Maromo tem 21 anos
Pedro tem 11 anos
Antonio tem 15 anos
```

Isso usa **desempacotamento**.

---

# Métodos importantes de dicionários

|Método|Função|
|---|---|
|keys()|retorna as chaves|
|values()|retorna os valores|
|items()|retorna chave e valor|
|get()|busca valor sem erro|
|update()|atualiza valores|
|pop()|remove item|

---

# Exemplo usando values()

```python
for idade in escoteiros.values():
    print(idade)
```

Saída:

```
21
11
15
```

---

# Resumo

|Estrutura|Símbolo|Exemplo|
|---|---|---|
|Lista|`[]`|`[1,2,3]`|
|Tupla|`()`|`(1,2,3)`|
|Set|`set()`|`{1,2,3}`|
|Dicionário|`{}`|`{"nome":"Ana"}`|

---

# Conceito importante

Dicionários são muito usados para representar **dados estruturados**, como:

- usuários
    
- produtos
    
- registros de banco
    
- JSON de APIs
    

Exemplo real:

```python
produto = {
    "nome": "Notebook",
    "preco": 3500,
    "estoque": 12
}
```

---