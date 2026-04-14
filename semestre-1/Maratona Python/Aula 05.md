## 📚 Filas em Python (com exemplo prático)

Uma **fila (queue)** é uma estrutura de dados que segue o princípio **FIFO (First In, First Out)** — ou seja, _o primeiro cliente que entra é o primeiro a ser atendido_.

No exemplo abaixo, simulamos uma **fila de atendimento de clientes**, como em um banco, onde não há prioridade.

---

## 🧠 Estrutura utilizada

Para implementar a fila de forma eficiente, usamos o módulo `collections` com a estrutura `deque`, que permite inserções e remoções rápidas:

```python
import collections as deque
```

A fila é criada com:

```python
def criar_fila():
    return deque.deque()
```

---

## ⚙️ Operações da fila no código

O sistema implementa todas as operações clássicas de uma fila:

### ➕ Inserir cliente (Enqueue)

Adiciona um cliente ao final da fila:

```python
def inserir_fila(fila, elemento):
    fila.append(elemento)
```

---

### ➖ Remover cliente (Dequeue)

Remove o primeiro cliente da fila:

```python
def remover_fila(fila):
    if not fila:
        raise IndexError("Remoção em lista vazia")
    return fila.popleft()
```

---

### 👀 Visualizar próximo cliente (Peek)

Permite ver quem será atendido, sem remover:

```python
def visualizar_proximo(fila):
    if not fila:
        raise IndexError("Não há mais clientes")
    return fila[0]
```

---

### 📋 Exibir toda a fila

Mostra todos os clientes na ordem de atendimento:

```python
def exibir_fila(fila):
    if not fila:
        raise IndexError("Não há mais clientes a serem atendidos.")
    return list(fila)
```

---

### ❓ Verificar se a fila está vazia

```python
def esta_vazia(fila):
    return len(fila) == 0
```

---

### 📏 Tamanho da fila

```python
def tamanho_fila(fila):
    return len(fila)
```

---

## 🖥️ Interface com menu

O programa utiliza um menu interativo no terminal para permitir que o usuário escolha as operações:

- Inserir cliente
    
- Remover cliente
    
- Ver próximo cliente
    
- Verificar se a fila está vazia
    
- Ver tamanho da fila
    
- Exibir ordem completa
    
- Sair do programa
    

Exemplo:

```python
def criar_menu():
    print(" 1 - Inserir cliente na fila")
    print(" 2 - Remover cliente na fila")
    ...
```

---

## 🔁 Funcionamento geral

A função `main()` controla o programa:

- Cria a fila
    
- Exibe o menu continuamente
    
- Executa ações com base na escolha do usuário
    
- Trata erros (como tentar remover de fila vazia)
    

```python
if __name__ == "__main__":
    main()
```

---

## 💡 O que esse código demonstra

Esse projeto mostra na prática:

- Como implementar uma fila em Python
    
- Como aplicar o conceito de FIFO
    
- Uso eficiente da estrutura `deque`
    
- Tratamento de erros com `try/except`
    
- Interação com o usuário via terminal
    

---

## 🚀 Possíveis melhorias

Se quiser evoluir esse sistema, você pode:

- Adicionar **prioridade de atendimento**
    
- Criar uma interface gráfica
    
- Salvar a fila em arquivo
    
- Usar classes ao invés de funções