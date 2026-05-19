# Aula 007

14/04/2026

## Usando o Linux:

Maneiras de usar o Ubuntu no computador
- Instalar em uma partição do disco pelo pendrive
- WSL -> Baixável na Microsoft Store como um app
	- O Ubuntu fica dentro do sistema do windows em um nível prático
- HyPervision -> VirtualBox (Máquina Virtual) que usa um arquivo .iso
	- Cria uma instância nova no nível de Hardware. 
	- Entradas do computador são subdivididas entre os dois SOs
- Aplicações WEB de simulação

Usando como o  exemplo o  WSL:

Ao abrirmos, devemos definir o username do UNIX e a senha.

Após isso será feita a instalação, quando ela for finalizada vamos nos deparar com a possibildade de digitar no ==prompt de comando==
```
user@hostname:~$
```
user -> Usuário digitado anteriormente
hostname -> Nome da máquina
~ -> Path, o caminho de arquivos onde você está digitando
$ -> Indicação do tipo de usuário, caso fosse "#" indicaria um administrador

### Comandos!

| Sintaxe                  | O que faz                        | Parâmetros                                                                                                                                           |
| ------------------------ | -------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- |
| `whoami`                 | Exibe o username atual           |                                                                                                                                                      |
| `pwd`                    | Mostra o Path                    |                                                                                                                                                      |
| `ls`                     | Lista os diretórios              | `-la`                                                                                                                                                |
| `clear`                  | Limpa a tela                     |                                                                                                                                                      |
| `cd`                     | Navega entre diretórios          | `cd [nome do diretório]` = entra numa pasta  <br>`cd ..` = sair da pasta atual                                                                       |
| `mv`                     | Move arquivos ou diretórios      |                                                                                                                                                      |
| `cp`                     | Copia arquivos ou diretórios     |                                                                                                                                                      |
| `touch`                  | Cria um arquivo vazio            |                                                                                                                                                      |
| `mkdir` (make directory) | Cria uma pasta                   |                                                                                                                                                      |
| `cat` (concatenate)      | Exibe, cria e concatena arquivos | `-n` = numera as linhas  <br>`cat > arquivo` = cria arquivo  <br>`cat >> arquivo` = acrescenta ao final  <br>`cat arq1 arq2 > arq3` = junta arquivos |
| `man` (manual)           | Mostra o manual do comando       | `man [comando]` = ex: `man ls`  <br>Navega com setas ↑↓  <br>`q` = sair do manual                                                                    |
| exit                     | Sai do sistema                   |                                                                                                                                                      |
Comandos como o `ls` podem requisitar parâmetros. Por exemplo ao digitarmos `ls -la`
ele vai exibir os diretórios em **listas** (l) e **todos** os diretórios (a)

### Usuário Root
O root é o superusuário em sistemas Unix/Linux. Ele possui controle total sobre o sistema operacional.
- UID 0 — É o identificador único do root
- Permissão irrestrita — Pode ler, escrever e executar qualquer arquivo
- Gerencia tudo — Usuários, processos, serviços, rede, hardware, kernel
- Diretório home — `/root`
- Sem restrições de segurança — Ignora permissões de arquivos

### Permissões

#### Estrutura das Permissões

Quando você executa `ls -l`, a saída é algo assim:

bash

```
drwxr-xr-x  2  root  root  4096  abr 14 21:00  minha_pasta-rw-r--r--  1  root  root  1024  abr 14 21:00  arquivo.txt
```

A string de permissão tem 10 caracteres, divididos em 4 partes:

```
d | rwx | r-x | r-x│    │     │     ││    │     │     └── Outros (others) — todos os demais usuários│    │     └──────── Grupo (group) — grupo dono do arquivo│    └────────────── Dono (user/owner) — quem criou└─────────────────── Tipo do arquivo
```

---

##### 1. Tipo do Arquivo (1º caractere)

|Símbolo|Significado|
|---|---|
|`-`|Arquivo comum|
|`d`|Diretório|
|`l`|Link simbólico|
|`b`|Dispositivo de bloco (ex: disco)|
|`c`|Dispositivo de caractere (ex: terminal)|
|`s`|Socket|
|`p`|Pipe (FIFO)|

---

##### 2. Permissões (caracteres 2 a 10)

Cada grupo de 3 caracteres representa:

|Letra|Permissão|Valor Octal|
|---|---|---|
|`r`|Read — Leitura|4|
|`w`|Write — Escrita|2|
|`x`|Execute — Execução|1|
|`-`|Sem permissão|0|

---

##### 3. Tabela Octal Completa

|Octal|Binário|Permissão|Significado|
|---|---|---|---|
|`0`|`000`|`---`|Nenhuma|
|`1`|`001`|`--x`|Somente execução|
|`2`|`010`|`-w-`|Somente escrita|
|`3`|`011`|`-wx`|Escrita + execução|
|`4`|`100`|`r--`|Somente leitura|
|`5`|`101`|`r-x`|Leitura + execução|
|`6`|`110`|`rw-`|Leitura + escrita|
|`7`|`111`|`rwx`|Todas as permissões|

---

##### 4. Exemplos Práticos

|Permissão|Octal|Significado|
|---|---|---|
|`drwxr-xr-x`|`755`|Diretório: dono faz tudo, grupo e outros leem/executam|
|`-rw-r--r--`|`644`|Arquivo: dono lê/escreve, grupo e outros só leem|
|`-rwx------`|`700`|Arquivo: somente o dono faz tudo|
|`drwx------`|`700`|Diretório: somente o dono acessa|
|`-rwxr-xr-x`|`755`|Executável: todos executam, só o dono altera|
|`drwxrwxrwx`|`777`|Diretório: todos fazem tudo (perigoso!)|
|`-rw-rw----`|`660`|Arquivo: dono e grupo leem/escrevem, outros nada|

---

##### 5. Comandos para Alterar Permissões

-  `chmod` — Alterar permissões

```
# Modo octal
chmod 755 minha_pasta
chmod 644 arquivo.txt

# Modo simbólico
chmod u+x script.sh        # Adiciona execução para o dono
chmod g-w arquivo.txt       # Remove escrita do grupo
chmod o-rwx pasta/          # Remove tudo dos outros
chmod a+r documento.pdf     # Adiciona leitura para todos (a = all)
chmod u+rwx,g+rx,o-rwx pasta/  # Combinado
```

- `chown` — Alterar dono e grupo


```
chown root arquivo.txt     # Muda o dono
chown root:admin arquivo.txt # Muda dono e grupo
chown -R root:root /var/www/ # Recursivo (aplica em tudo dentro)
```

- `chgrp` — Alterar somente o grupo


```
chgrp developers projeto/chgrp -R www-data /var/www/html/
```

---

##### 6. Permissões Especiais

|Permissão|Octal|Símbolo|Descrição|
|---|---|---|---|
|SUID|`4000`|`s` no user|Executa com permissão do dono do arquivo|
|SGID|`2000`|`s` no group|Executa com permissão do grupo / herda grupo em diretórios|
|Sticky Bit|`1000`|`t` no others|Só o dono pode apagar seus arquivos (ex: `/tmp`)|

- Exemplos:


```
chmod 4755 script.sh     # SUID ativado  → -rwsr-xr-x
chmod 2755 pasta/        # SGID ativado  → drwxr-sr-x
chmod 1777 /tmp          # Sticky bit    → drwxrwxrwt
```

---

##### 7. Verificando Permissões


```
# Listar permissões ls -l
# Listar permissões de diretórios (sem mostrar conteúdo)ls -ld pasta/
# Ver permissões em formato octalstat -c "%a %n" arquivo.txt# Saída: 644 arquivo.txt
```

---

##### 8. Resumo Visual Rápido

| Posição | Caractere(s) | Parte           | Permissão                    | Cálculo | Octal |
| ------- | ------------ | --------------- | ---------------------------- | ------- | ----- |
| 1       | `-`          | Tipo            | Arquivo comum                | —       | —     |
| 2-4     | `rwx`        | Dono (user)     | Leitura + Escrita + Execução | 4+2+1   | 7     |
| 5-7     | `r-x`        | Grupo (group)   | Leitura + Execução           | 4+0+1   | 5     |
| 8-10    | `r-x`        | Outros (others) | Leitura + Execução           | 4+0+1   | 5     |
