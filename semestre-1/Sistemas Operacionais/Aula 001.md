10/ 02/ 2026


# Conceitos - Gerenciador de Recursos
## Processos
- Linux
### Escalonamento

## S.O.
Os sistemas operacionais tem a função de gerenciar recursos e organizar os processos do computador, garantindo um funcionamento e fluxo de programas limpo, ordenado e rápido.

## Gerenciador de Memória
- Aqui, vamos entender como o SO gerencia e aloca a memória.
- Tudo que está aberto no SO será processado na memória.
- Vamos estudar algoritmos que tiram 100% da capacidade da memória para que ela seja utilizada ao máximo.

## SO - Linux
## Comandos / Serviços
- Conectar com SSH (Protocolo de conexão máquina-máquina)

## ShellScript

## Docker / Container



# S.O.
- Usuário para interagir com o computador deveria conhecer profundamente diversos detalhes sobre hardware do equipamento, o que tornaria seu trabalho lento e com grandes possibilidades de erros.
- **SO NÃO É EXECUTADO DE FORMA LINEAR**(Começo, Meio e Fim), como aplicações convencionais.
- Executa as suas rotinas concorrentemente em função de eventos assíncronos, ou seja, eventos que podem ocorrer a qualquer momento.
- CONCEITOS DE PROCESSOS / THREADS
- Serve como uma proteção dos recursos do Hardware.
## Hardware X S.O.
- Hardware sozinho não oferece um ambiente de utilização simples para resolução computacional de problemas.
- SISTEMAS OPERACIONAIS
	- Possibilita uso eficiente e controlado dos recursos de hardware;
	- Implementa políticas e estruturas de software de modo a assegurar um melhor desempenho do sistema de computação.
## Funções Básicas
- Facilidade de Acesso aos Recursos - Ao utilizar discos, monitores, impressoras, Dvd's, etc, o usuário não se preocupa como é realizado o acesso.
	- Ex: Leitura de um Arquivo
- Rotinas específicas controladas pelo SO para acionar o mecanismo, posicionamento na trilha e setor correto da informação, transferência dos dados para a memória e informar ao programa da conclusão da operação.
- Compartilhamento de recurso de forma organizada e protegida -> como diversos usuários compartilham o mesmo recurso é necessário controlar o uso concorrente.
	- Ex: Uso compartilhado de uma impressora por vários usuários
## Componentes de Hardware
- Processador
- Memória
- Memória Cache
## SO como agente de recurso.
- Provedor de interface conveniente a seus usuários.
- SO's modernos gerenciam todas as partes de um Sistema Complexo.
- Permite que múltiplos programas sejam executados ao "mesmo tempo".
	- Podem ser abertos simultaneamente, mas não rodam ao mesmo tempo. Todos os processos passam para o processador.
	- O processador "enfileira" os programas e executa parte deles a cada ciclo.
- **==Tarefa principal==** é manter o controle sobre ==**quem==** está utilizando ==**qual== recurso, garantindo suas requisições de recursos.
## Estrutura S.O.
- Formado por um conjunto de rotinas
- A dificuldade de compreender a estrutura e funcionamento do SO está relacionado ao fato de que ele não é como uma aplicação tipicamente sequencial.

# Processos
## Tipos de SO
### Monoprogramáveis / Monotarefa

- Voltados tipicamente para a execução de um único programa
- Qualquer outra aplicação, para ser executada, deveria aguardar o término do programa corrente.
- Processador; a memória e os periféricos permanecem exclusivamente dedicados à execução de um único programa.
![[Pasted image 20260210213930.png]]
### Multiprogramáveis / Multitarefa
- Recursos compartilhados entre as diversas aplicações; enquanto um programa espera por um evento, outros programas podem estar processando neste mesmo intervalo de tempo.
- O sistema operacional se incumbe de gerenciar o acesso concorrente aos seus diversos recursos.
![[Pasted image 20260210214145.png]]
### Processos 
- Conceito Fundamental e mais importante para os SO
- ==Uma abstração de um programa em execução==
 
 Adendo: Bibliografia
- Sistemas Operacionais Mordenos - Tanenbaum 1ª Edição
- Sistemas Operacionais Mordenos - Tanenbaum 2ª Edição
- Arquitetura de Sistemas Operacionais - Editora LTC