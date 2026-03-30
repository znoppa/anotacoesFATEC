25/02/2026

Links de interesse
github.com/maromo71/algoritmos

## Comandos no Prompt (cmd)

| Comando             | Descrição                                            |
| ------------------- | ---------------------------------------------------- |
| `cd \`              | Vai para a raiz do disco                             |
| `md nome_diretorio` | Cria um diretório                                    |
| `cd nome_diretorio` | Entra no diretório indicado                          |
| `code . `           | Inicializa aplicações no PATH neste caso é o VS code |
## Introdução a Programação
### Programas de Computador
Programas são conjuntos de instruções organizadas para
realizar tarefas específicas.
- Podem ser simples (ex .: scripts de cálculo).
- Ou extremamente complexos (ex .: sistemas operacionais,
jogos).
- Escrito em código-fonte (compreensível por humanos).
- Traduzido para código binário (compreensível pelo
hardware).

### Exemplos de Programas
- Planilhas eletrônicas para cálculos financeiros.
- Aplicativos como navegadores da web.
- Softwares empresariais e sistemas bancários.
- Jogos interativos e aplicações educacionais.

### Linguagem de Máquina
- Composta por instruções binárias (0 e 1).
- Diretamente interpretada pelo processador.
- Extremamente eficiente, mas inviável para humanos.
- Exemplo: Código binário do navegador Chrome.

#### Limitações da Linguagem de Máquina
- Difícil de interpretar e modificar.
- Propensa a erros durante a escrita.
- Pouco eficiente para desenvolvimento em larga escala.

### Exemplos de Linguage de Programação

| Linguagem | Utilidade                                       |
| --------- | ----------------------------------------------- |
| C         | Usada para sistemas embarcado e de baixo nível. |
| Python    | Ideal para ciência de dados e automação.        |
| Java      | Muito usada em sistemas corporativos e android  |
### Compiladores
- Tradução do código-fonte par código de máquina
- Ferramenta essencial no desenvolvimento de software
- Permite execução eficiente no hardware

#### Processo de compilação
1. Leitura do código-fonte
2. Tradução para código intermediário
3. Geração de binários executáveis
![[AlgoritmosELogicadeProgramacaoAula002_01.png]]
##### C
  📄 programa.c                     (código-fonte)
         │
         ▼
  ┌──────────────────┐
  │ Pré-processador  │              (#include, #define, macros)
  └──────────────────┘
         │
         ▼
  📄 programa.i                     (código expandido)
         │
         ▼
  ┌──────────────────┐
  │   Compilador                       │              (análise sintática + semântica)
  └──────────────────┘
         │
         ▼
  📄 programa.s                     (código Assembly)
         │
         ▼
  ┌──────────────────┐
  │   Assembler                         │              (traduz Assembly → código de máquina)
  └──────────────────┘
         │
         ▼
  📦 programa.o / .obj              (arquivo OBJETO)
         │
         ▼
  ┌──────────────────┐
  │     Linker                              │───── 📚 Bibliotecas (.a / .so / .lib / .dll)
  └──────────────────┘
         │
         ▼
  ⚙️ programa.exe (Win)             (executável FINAL)
     programa     (Linux/macOS)


Código-fonte em C (`.c`) → O pré-processador expande macros e includes → O GCC compila o código, gerando um arquivo objeto (`.o` / `.obj`) → O linker faz a ligação com as bibliotecas utilizadas → Gera o executável (`.exe` no Windows, sem extensão no Linux/macOS)

##### Java
  📄 Programa.java        (código-fonte legível)
         │
         ▼
     ┌────────┐
     │ javac  │            (compilador)
     └────────┘
         │
         ▼
  📦 Programa.class        (bytecode — ÚNICO para todos os SOs)
         │
    ┌────┼────────┐
    ▼         ▼                   ▼
  ┌───┐┌─────┐┌───────┐
  │JVM││ JVM    ││  JVM        │    (cada SO tem sua própria JVM)
  │Win  ││Linux   ││ macOS    │
  └───┘└─────┘└───────┘
Código-fonte em Java (`.java`) → O javac (Java Compiler) compila o código-fonte, traduzindo-o para um código intermediário chamado bytecode, gerando um arquivo `.class` → A JVM (Java Virtual Machine) interpreta/executa o bytecode, rodando o programa em Windows, Linux e macOS.


### Máquina Virtuais (VMs)
- Camada intermediária entre o software e  hardware.
- Permitem portabilidade entre diferentes sistemas operacionais.
- Usadas para execução simultânea de múltiplos sistemas.

