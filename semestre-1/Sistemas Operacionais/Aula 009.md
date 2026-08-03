---
tipo: aula
semestre: 1
disciplina: Sistemas Operacionais
aula: 9
data: 2026-05-05
status: em-revisao
revisao: false
aliases:
  - SO 009 — Shell Script e backup
tags:
  - ads/semestre-1
  - disciplina/sistemas-operacionais
---

# Aula 009 — Shell Script, backup e servidor de arquivos


Data: 05/05/2026

-----
## Shell Script no Linux (Ubuntu) — Lógica, Backup e File Server
### 1. O que é Shell Script?

O Shell Script é uma linguagem interpretada que conversa diretamente com o kernel do sistema operacional através de um interpretador de comandos (shell). No Ubuntu, o mais comum é o Bash (`/bin/bash`).

Ele permite automatizar tarefas administrativas, como:

- Backups automáticos
- Monitoramento de serviços
- Criação de usuários em lote
- Limpeza de logs
- Sincronização entre servidores


#### Criar um arquivo script e editar pelo nano
```
Nano (nomedoarquivo)
```
#### Todo script começa com o shebang:
```
#!/bin/bash
```
#### E precisa de permissão de execução:
```
chmod a+x nome do script
```
> [!warning] Imagem pendente
> A captura citada na anotação original não estava presente no repositório.

#### Para rodar o script, basta acessar seu diretório e inserir:
```
./nomescript
```

Comandos Úteis no NANO:
- Ctrl + o para salvar
- Ctrl + x para sair do arquivo
- Quando usamos crase (`comando`), ele tenta executar o comando se for valido 
Exemplo: - Sujeito a erro de copiar e colar
```
#!/bin/bash
clear
#Estilização do bem vindo
echo -e "\033[01;33;42m --- Bem vindo ao Sistema --- \033[01;37;40m"
# Comentarios no código

echo "Logado com o usuario 'whoami'"
date
echo
echo "Informe seu nome"
read NOME
echo "Seu nome é: $NOME"
read -p "E qual o seu sobrenome: " SOBRENOME
echo "Seu nome completo entao é: $NOME $SOBRENOME"
ANO=$(date +%Y)
echo "0 ano atual é $ANO"
read -p "Qual seu ano de nascimento?" ANONASCIMENTO
echo "Ano que nasceu $ANONASCIMENTO"
IDADE=$( ($ANO-$ANONASCIMENTO))
echo "Sua idade é: $IDADE"

# NADA PODE ESTAR COLADO NO COLCHETE
if [ $IDADE -lt "18" ]
then
	echo "minor"
else
	echo "epstein"
fi

```

---

## 2. Estruturas Lógicas Fundamentais

### 🔹 Variáveis

```bash
#!/bin/bash
NOME="Aluno"
DATA=$(date +%Y-%m-%d)
echo "Olá, $NOME! Hoje é $DATA"

```

### 🔹 Estrutura `if` (condicional)

```bash
#!/bin/bash
ARQUIVO="/etc/passwd"

if [ -f "$ARQUIVO" ]; then
    echo "Arquivo existe!"
elif [ -d "$ARQUIVO" ]; then
    echo "É um diretório."
else
    echo "Não encontrado."
fi

```

Operadores comuns:

|Operador|Significado|
|---|---|
|`-f`|é arquivo|
|`-d`|é diretório|
|`-r`|tem permissão de leitura|
|`-z`|string vazia|
|`-eq`, `-ne`, `-lt`, `-gt`|igual, diferente, menor, maior|

### 🔹 Estrutura `for` (laço)

```bash
#!/bin/bash
for usuario in joao maria pedro; do
    echo "Criando usuário: $usuario"
    # useradd $usuario
done
```

### 🔹 Estrutura `while`

```bash
#!/bin/bash
contador=1
while [ $contador -le 5 ]; do
    echo "Backup tentativa $contador"
    contador=$((contador + 1))
done
```

### 🔹 Estrutura `case`

```bash
#!/bin/bash
read -p "Escolha [1-Backup | 2-Restore]: " opcao
case $opcao in
    1) echo "Iniciando backup..." ;;
    2) echo "Restaurando dados..." ;;
    *) echo "Opção inválida" ;;
esac
```

---

## 3. Script de Backup Completo (Exemplo Prático)

O exemplo abaixo faz backup de um diretório, compacta o arquivo com a data e remove backups antigos:

```bash
#!/bin/bash
# ===========================================
# Script de Backup Automático
# Autores: Vitor Reis e Miguel Zimmermann
# ===========================================

ORIGEM="/home/douglas/documentos"
DESTINO="/mnt/backup"
DATA=$(date +%Y-%m-%d_%H-%M)
LOG="/var/log/backup.log"
DIAS_RETENCAO=7

# Verifica se o destino existe
if [ ! -d "$DESTINO" ]; then
    echo "[$(date)] ERRO: Destino não existe!" >> $LOG
    exit 1
fi

# Verifica se há espaço em disco (mínimo 1GB)
ESPACO=$(df "$DESTINO" | awk 'NR==2 {print $4}')
if [ "$ESPACO" -lt 1048576 ]; then
    echo "[$(date)] ERRO: Espaço insuficiente!" >> $LOG
    exit 1
fi

# Cria o backup compactado
ARQUIVO="$DESTINO/backup_$DATA.tar.gz"
tar -czf "$ARQUIVO" "$ORIGEM" 2>> $LOG

if [ $? -eq 0 ]; then
    echo "[$(date)] Backup criado: $ARQUIVO" >> $LOG
else
    echo "[$(date)] FALHA no backup!" >> $LOG
    exit 1
fi

# Remove backups antigos
for arquivo in $(find $DESTINO -name "backup_*.tar.gz" -mtime +$DIAS_RETENCAO); do
    rm -f "$arquivo"
    echo "[$(date)] Removido antigo: $arquivo" >> $LOG
done

echo "Backup concluído com sucesso!"

```
