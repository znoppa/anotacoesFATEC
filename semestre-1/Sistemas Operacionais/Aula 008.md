---
tipo: aula
semestre: 1
disciplina: Sistemas Operacionais
aula: 8
data: 2026-04-14
status: em-revisao
revisao: false
aliases:
  - SO 008 — chmod, chown e grupos
tags:
  - ads/semestre-1
  - disciplina/sistemas-operacionais
---

**Data:** 14/04

---
# 🖥️ Sistemas Operacionais — Uso do Linux
## 👤 Usuários (Ubuntu)

- **Usuário:** `aluno`
- **Senha:** `aluno`
---
- **Root:** `root`
- **Senha:** `aluno`
---
- **Usuário:** `Joao`
- **Senha:** `aluno`
----

###  Linux — Comando `chmod`

O comando `chmod` é usado para **alterar as permissões** de arquivos e diretórios.

Sintaxe:

```
chmod [quem][operação][permissão] arquivo
```

Exemplo:

```
chmod u+x script.sh
```

➡️ adiciona permissão de execução ao dono do arquivo

---

## 📋 Tabela — Estrutura do `chmod`

```
| Símbolo | Significado                          |
|---------|--------------------------------------|
| u       | user (dono do arquivo)               |
| g       | group (grupo)                        |
| o       | others (outros usuários)             |
| a       | all (todos: user + group + others)   |
| +       | adiciona permissão                   |
| -       | remove permissão                     |
| =       | define exatamente a permissão        |
| r       | read (ler)                           |
| w       | write (escrever)                     |
| x       | execute (executar)                   |
```

---

## 🧠 Como ler

```
chmod u+r arquivo.txt
```

- `u` → dono
- `+` → adicionar
- `r` → leitura

➡️ adiciona permissão de leitura ao dono

---

## 📌 Exemplos práticos

### ➕ Dar execução ao dono

```
chmod u+x arquivo.sh
```

---

### ➖ Remover escrita do grupo

```
chmod g-w arquivo.txt
```

---

### 👥 Dar leitura para todos

```
chmod a+r arquivo.txt
```

---

### 🎯 Definir permissão exata

```
chmod u=rwx arquivo.txt
```

➡️ dono terá apenas `rwx`

---

## 🔐 Relação com permissões

|Permissão|Função|
|---|---|
|`r`|ler o arquivo|
|`w`|editar / escrever|
|`x`|executar como programa|

---

## 💡 Exemplo visual

Antes:

```
-rw-r--r--
```

Depois:

```
chmod a+x arquivo.sh
```

Resultado:

```
-rwxr-xr-x
```

---
### 👤 Linux — Comando `chown`

O comando `chown` é usado para **alterar o proprietário (dono)** e/ou o **grupo** de um arquivo ou diretório.

Sintaxe:

```
chown [novo_usuario]:[novo_grupo] arquivo
```

Exemplo:

```
chown aluno arquivo.txt
```

➡️ altera o dono do arquivo para `aluno`

---

## 📋 Tabela — Estrutura do `chown`

```
| Parte                 | Significado                                      ||----------------------|--------------------------------------------------|| novo_usuario         | novo dono do arquivo                             || :novo_grupo          | novo grupo do arquivo                            || arquivo              | nome do arquivo ou diretório                     || -R                   | aplica recursivamente em pastas e subpastas      |
```

---

## 🧠 Como ler

```
chown aluno arquivo.txt
```

- `aluno` → novo proprietário
- `arquivo.txt` → arquivo alterado

➡️ muda o dono do arquivo para o usuário `aluno`

---

## 📌 Exemplos práticos

### 👤 Alterar apenas o dono

```
chown aluno arquivo.txt
```

---

### 👥 Alterar dono e grupo

```
chown aluno:professores arquivo.txt
```

- dono → `aluno`
- grupo → `professores`

---

### 🗂️ Alterar apenas o grupo

```
chown :professores arquivo.txt
```

---

### 📁 Aplicar em diretório e subpastas

```
chown -R aluno:aluno projetos
```

➡️ altera tudo dentro da pasta `projetos`

---

## 🔍 Verificando com `ls -l`

Antes:

```
-rw-r--r-- 1 root root arquivo.txt
```

Depois:

```
chown aluno:aluno arquivo.txt
```

Resultado:

```
-rw-r--r-- 1 aluno aluno arquivo.txt
```

---

## ⚠️ Observação importante

Normalmente precisa de permissão de administrador:

```
sudo chown aluno arquivo.txt
```

---
### # Linux — Gerenciamento de Grupos (`groupadd` + `gpasswd`)

Os grupos são usados para **organizar usuários e permissões** dentro do sistema.

---

## 📋 Tabela — Comandos de grupo

```
| Comando                          | Explicação                                                   |
|----------------------------------|--------------------------------------------|
| groupadd nome_grupo              | Cria um novo grupo                          |                                  |
| groupadd -g ID nome_grupo        | Cria grupo com GID específico               |                
| gpasswd -a usuario grupo         | Adiciona um usuário ao grupo                |                
| gpasswd -d usuario grupo         | Remove um usuário do grupo                  
|               
| cat /etc/group                   | Mostra os grupos existentes no sistema      
```

---

## 👥 Criar grupo

```
sudo groupadd alunos
```

➡️ cria o grupo `alunos`

---

## ➕ Adicionar usuário ao grupo

Para adicionar um usuário a um grupo, usamos:

```
sudo gpasswd -a aluno alunos
```

### 🔍 Explicação

- `gpasswd` → gerencia grupos
- `-a` → **add** (adicionar)
- `aluno` → usuário
- `alunos` → grupo

➡️ adiciona o usuário `aluno` ao grupo `alunos`

---

## ➖ Remover usuário do grupo

Para remover:

```
sudo gpasswd -d aluno alunos
```

### 🔍 Explicação

- `-d` → **delete** (remover)

➡️ remove o usuário `aluno` do grupo `alunos`

---

## 🔍 Verificar grupos

```
cat /etc/group
```

Exemplo:

```
alunos:x:1002:aluno
```

- `alunos` → nome do grupo
- `1002` → GID
- `aluno` → usuário no grupo
