Claro, Mestre do Universo! 👑 Aqui vão as anotações completas da aula de hoje, organizadinhas pra você revisar e guardar. 📚

---

# 📘 Anotações de Aula — Shell Script (Bash)

**Data:** 12/05/2026
**Aluno:** Douglas
**Tema:** Estruturas condicionais, manipulação de arquivos e diretórios, logs

---

## 🎯 Conceitos abordados

### 1. Shebang (`#!`)
Primeira linha de todo script — indica qual interpretador usar.

```bash
#!/bin/bash
```

⚠️ **Atenção:** nunca colocar barra no final (`#!/bin/bash/`) — gera o erro `bad interpreter: Not a directory`.

---

### 2. Comando `read`
Lê entrada do usuário.

```bash
read -p "Mensagem: " variavel
```
- `-p` exibe um prompt sem precisar de `echo` antes.

---

### 3. Estruturas condicionais

```bash
if [ condição ]; then
    # comandos
else
    # comandos
fi
```

#### Operadores de teste mais usados:
| Operador | Significado |
|---|---|
| `-e arquivo` | Existe (arquivo ou diretório) |
| `-f arquivo` | É um arquivo regular |
| `-d arquivo` | É um diretório |
| `-s arquivo` | Existe e **não está vazio** |
| `-z string` | String está vazia |
| `!` | Negação |

---

### 4. Boas práticas
- ✅ Sempre usar **aspas duplas** em variáveis: `"$var"` (evita problemas com espaços)
- ✅ Usar **caminhos absolutos** ao invés de depender de `cd`
- ✅ Validar entradas do usuário antes de usar
- ✅ Usar `>>` para **adicionar** ao log (não sobrescrever com `>`)

---

### 5. Comandos úteis

| Comando | Função |
|---|---|
| `clear` | Limpa a tela |
| `cat arquivo` | Exibe conteúdo do arquivo |
| `cp origem destino` | Copia arquivo |
| `mkdir -p pasta` | Cria diretório (e pais, sem erro se existir) |
| `date '+%d/%m/%Y %H:%M:%S'` | Data formatada |
| `$(comando)` | Executa comando e captura resultado |
| `tee -a arquivo` | Escreve na tela **e** no arquivo |

---

# 📝 Exercícios da aula

## 🧩 Exercício 2 — Ler diretório e exibir conteúdo de arquivo

### 📋 Enunciado
- Pedir um diretório ao usuário
- Verificar se ele existe
- Pedir um arquivo dentro desse diretório
- Verificar se o arquivo existe e não está vazio
- Exibir o conteúdo do arquivo

### ✅ Resolução

```bash
#!/bin/bash
clear

read -p "Escolha o diretório: " dir
echo "Diretório escolhido: $dir"

# Monta o caminho completo
caminho_dir="/home/$dir"

if [ -d "$caminho_dir" ]; then
    cd "$caminho_dir" || exit 1
else
    echo "Diretório inexistente"
    exit 1
fi

read -p "Escolha o arquivo: " file
caminho_file="$caminho_dir/$file"

if [ -s "$caminho_file" ]; then
    cat "$caminho_file"
else
    echo "Arquivo inexistente ou vazio"
    exit 2
fi
```

### 🔑 Pontos-chave aprendidos
- Diferença entre `-e` (existe), `-d` (é diretório) e `-f` (é arquivo)
- `-s` substitui a verificação dupla `[ -e arq ] && [ ! -z arq ]`
- Sempre usar caminho absoluto ao manipular arquivos
- `cd` dentro de script **não afeta o shell pai**

### 🐛 Erros comuns enfrentados
- **Shebang com barra extra** (`#!/bin/bash/`) → erro `bad interpreter`
- Não usar aspas nas variáveis → quebra com espaços
- `cat $file` sem caminho completo → arquivo não encontrado

---

## 🧩 Exercício 3 — Cópia de arquivo com log

### 📋 Enunciado
- Pedir arquivo e diretório de destino ao usuário
- Criar arquivo de log para armazenar resultados
- Guardar data e hora atual em uma variável
- Verificar se o diretório existe:
  - Se existir → copiar o arquivo
  - Se não existir → criar o diretório e depois copiar
- Mostrar mensagem na tela e gravar no log

### ✅ Resolução

```bash
#!/bin/bash
clear

# Arquivo de log
log="/home/script/copias.log"

# Data e hora atual
data=$(date '+%d/%m/%Y %H:%M:%S')

# Pede dados ao usuário
read -p "Digite o caminho do arquivo a ser copiado: " arquivo
read -p "Digite o diretório de destino: " destino

# Verifica se o arquivo de origem existe
if [ ! -f "$arquivo" ]; then
    echo "Arquivo '$arquivo' não existe!"
    echo "[$data] ERRO: Arquivo '$arquivo' não encontrado." >> "$log"
    exit 1
fi

# Verifica se o diretório de destino existe
if [ -d "$destino" ]; then
    mensagem="[$data] Diretório '$destino' já existia. Arquivo '$arquivo' copiado com sucesso."
else
    mkdir -p "$destino"
    mensagem="[$data] Diretório '$destino' foi criado. Arquivo '$arquivo' copiado com sucesso."
fi

# Copia o arquivo
cp "$arquivo" "$destino"

# Mostra na tela e grava no log
echo "$mensagem"
echo "$mensagem" >> "$log"

exit 0
```

### 🔑 Pontos-chave aprendidos
- Captura de saída de comandos com `$(...)`
- Formatação de data com `date '+formato'`
- Redirecionamento para arquivo:
  - `>` sobrescreve
  - `>>` adiciona ao final (ideal pra logs)
- `mkdir -p` não dá erro se o diretório já existir
- Estrutura de log padronizada: `[DATA] MENSAGEM`

### 💡 Alternativa elegante com `tee`
```bash
echo "$mensagem" | tee -a "$log"
```
Faz as duas coisas (tela + log) com um comando só.

---

# 🧠 Resumo / Cola rápida

```bash
# Testes em arquivos/diretórios
[ -e X ]   # existe
[ -f X ]   # é arquivo
[ -d X ]   # é diretório
[ -s X ]   # existe e não está vazio
[ -z S ]   # string vazia
[ ! ... ]  # negação

# Captura de comando
data=$(date '+%d/%m/%Y %H:%M:%S')

# Redirecionamento
comando > arquivo    # sobrescreve
comando >> arquivo   # adiciona ao final
comando | tee -a arq # tela + arquivo

# Tornar executável
chmod +x script.sh
./script.sh
```

