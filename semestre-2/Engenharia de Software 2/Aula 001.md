---
tipo: aula
semestre: 2
disciplina: Engenharia de Software 2
aula: 1
data: 2026-08-12
status: em-revisao
revisao: false
aliases:
  - ES2 001 — Análise e Engenharia de Requisitos
  - Análise de Requisitos
tags:
  - ads/semestre-2
  - disciplina/engenharia-de-software-2
  - requisitos
  - engenharia-de-requisitos
---

# Aula 001 — Análise e Engenharia de Requisitos

> [!abstract] Em uma frase
> A **engenharia de requisitos** busca compreender o problema do cliente, identificar suas necessidades, modelar e especificar uma solução adequada e validar se todos os envolvidos possuem a mesma visão do sistema.

## Objetivos

- Entender o que é análise ou engenharia de requisitos.
- Conhecer as principais etapas do processo de análise de requisitos.
- Diferenciar requisitos de projeto e requisitos de produto.
- Diferenciar requisitos funcionais e não funcionais.
- Reconhecer problemas comuns na definição de requisitos.
- Conhecer técnicas de levantamento e análise de requisitos.
- Iniciar a definição de um projeto em grupo por meio do tema e do problema.

---

## 1. O que é Análise de Requisitos?

A **Análise de Requisitos**, também chamada de **Engenharia de Requisitos**, é o conjunto de atividades utilizadas para descobrir, compreender, documentar, organizar e validar aquilo que um sistema precisa fazer e quais restrições deve respeitar.

Ela funciona como uma ponte entre o **problema do cliente** e a **solução que será desenvolvida**.

Antes de programar, é necessário entender:

- qual problema realmente precisa ser resolvido;
- quem utilizará o sistema;
- quais informações serão necessárias;
- quais funcionalidades deverão existir;
- quais limitações precisam ser consideradas;
- como saberemos se a solução atende ao cliente.

> [!important] Ideia principal
> Um sistema tecnicamente bem desenvolvido ainda pode ser um projeto ruim se resolver o problema errado. A análise de requisitos reduz esse risco ao alinhar clientes, usuários, analistas e desenvolvedores antes e durante o desenvolvimento.

## 2. Etapas da Análise de Requisitos

### 2.1 Reconhecer o problema

Nesta etapa ocorre o primeiro contato aprofundado com o problema que deverá ser resolvido.

O analista busca compreender a visão do cliente e o contexto em que o sistema será utilizado. Normalmente são levantadas informações sobre:

- o problema atual;
- os usuários envolvidos;
- os objetivos do projeto;
- processos existentes;
- limitações conhecidas;
- expectativas do cliente;
- contexto da organização.

Essa fase está diretamente relacionada ao planejamento e à definição inicial do sistema.

**Exemplo:** um restaurante relata atrasos e erros na comunicação entre garçons, balcão e cozinha. Antes de propor um sistema, o analista precisa entender como os pedidos circulam atualmente e onde os erros acontecem.

### 2.2 Avaliar o problema e sintetizar uma solução

Depois de compreender o problema, o analista organiza as informações levantadas e identifica quais dados e processos serão necessários para solucioná-lo.

A partir disso, são comparadas possíveis alternativas para selecionar a solução mais adequada.

A solução pode ser extremamente específica ou mais ampla.

**Exemplos:**

- substituir uma impressora incompatível;
- reorganizar um processo interno;
- integrar dois sistemas já existentes;
- desenvolver um novo sistema web;
- automatizar uma tarefa manual.

> [!note] Síntese da solução
> A síntese é uma descrição resumida da solução proposta para o problema. Ela deve explicar **o que será feito** e **por que essa alternativa atende à necessidade identificada**.

### 2.3 Modelar — Modelagem

A **modelagem** representa o sistema de uma forma mais simples e organizada, facilitando o entendimento antes da implementação.

Os modelos podem representar:

- funcionalidades;
- usuários e atores;
- informações e dados;
- processos;
- comportamento do sistema;
- interação entre partes do sistema.

Dependendo do projeto, podem ser utilizados diagramas, fluxogramas, modelos de processos, protótipos ou diagramas UML.

A modelagem serve como suporte para a síntese da solução e reduz ambiguidades entre as pessoas envolvidas no projeto.

### 2.4 Especificar os requisitos

Nesta fase os requisitos identificados são documentados de maneira clara e organizada.

A especificação pode incluir:

- funções do sistema;
- interfaces;
- regras de negócio;
- requisitos de desempenho;
- requisitos de segurança;
- restrições técnicas;
- contexto de utilização;
- integrações necessárias.

Quanto mais importante for um requisito, mais importante é que ele seja **claro, verificável e compreendido por todos**.

### 2.5 Revisar — Revisão dos requisitos

A revisão é realizada para verificar se os requisitos realmente representam aquilo que o projeto precisa entregar.

Cliente, usuários, analistas e equipe de desenvolvimento podem participar dessa validação.

A revisão busca encontrar:

- requisitos duplicados;
- inconsistências;
- ambiguidades;
- informações ausentes;
- requisitos conflitantes;
- necessidades que foram interpretadas incorretamente.

O objetivo é chegar a uma **visão compartilhada do sistema**.

> [!tip] Pergunta útil na revisão
> “Se a equipe entregar exatamente o que está escrito neste requisito, o cliente considerará a necessidade atendida?”

---

## 3. Tipos de Requisitos

Os requisitos podem ser analisados por diferentes perspectivas.

### 3.1 Requisitos do projeto

São requisitos relacionados à maneira como o projeto será conduzido, gerenciado e entregue.

Podem envolver:

- objetivos de negócio;
- orçamento;
- prazo;
- equipe;
- processo de gerenciamento;
- forma de implantação;
- forma de entrega do produto.

### 3.2 Requisitos do produto

São requisitos relacionados diretamente ao produto ou sistema que será construído.

Podem envolver:

- funcionalidades;
- características técnicas;
- segurança;
- desempenho;
- disponibilidade;
- compatibilidade;
- usabilidade;
- armazenamento de dados.

---

## 4. Requisitos Funcionais e Não Funcionais

### 4.1 Requisitos Funcionais — RF

Os **requisitos funcionais** descrevem **o que o sistema deve fazer**.

Eles representam funcionalidades, serviços, comportamentos e ações oferecidas pelo sistema aos usuários ou a outros sistemas.

**Exemplos:**

- O sistema deve permitir o cadastro de clientes.
- O sistema deve permitir que um administrador cadastre produtos.
- O sistema deve calcular automaticamente o valor total do pedido.
- O sistema deve permitir a recuperação de senha por e-mail.

A descrição pode variar de acordo com o público.

- Para o **cliente**, o requisito pode ser escrito em um nível mais alto e de fácil compreensão.
- Para os **desenvolvedores**, ele pode ser detalhado com regras, validações, fluxos alternativos e critérios específicos.

> [!example] Exemplo em dois níveis
> **Alto nível:** O sistema deve permitir realizar pedidos.
>
> **Mais específico:** O sistema deve permitir que o cliente selecione produtos disponíveis, informe quantidade, revise o carrinho e confirme o pedido antes do envio.

### 4.2 Requisitos Não Funcionais — RNF

Os **requisitos não funcionais** descrevem propriedades, qualidades e restrições do sistema.

Eles não indicam apenas uma função, mas estabelecem **como o sistema deve se comportar ou quais condições deve atender**.

**Exemplos:**

- O sistema deve responder às principais operações em até 2 segundos em condições normais de uso.
- As senhas devem ser armazenadas utilizando um mecanismo seguro de hash.
- O sistema deve funcionar nos principais navegadores modernos.
- O sistema deve manter disponibilidade mínima definida para o serviço.
- O aplicativo deve utilizar no máximo determinado espaço de armazenamento.

Algumas categorias comuns são:

- desempenho;
- segurança;
- confiabilidade;
- disponibilidade;
- usabilidade;
- escalabilidade;
- compatibilidade;
- restrições de hardware e software.

### Resumo

| Tipo | Pergunta principal | Exemplo |
|---|---|---|
| Requisito funcional | **O que o sistema deve fazer?** | Permitir cadastrar um cliente |
| Requisito não funcional | **Como o sistema deve funcionar ou quais limites deve respeitar?** | Responder em até 2 segundos |

---

## 5. Problemas comuns com requisitos

A engenharia de requisitos pode se tornar complexa porque os requisitos:

- podem vir de **várias fontes**;
- podem não refletir as **reais necessidades dos usuários**;
- podem ser **inconsistentes ou incompletos**;
- podem ser interpretados de formas diferentes por clientes e desenvolvedores;
- podem mudar durante o projeto;
- podem possuir um **alto custo de alteração** quando mudanças importantes são descobertas somente após desenvolvimento, testes ou implantação.

### Exemplo de requisito ambíguo

> “O sistema deve ser rápido.”

O problema é que a palavra **rápido** não possui um critério objetivo.

Uma versão melhor seria:

> “O sistema deve carregar a tela inicial em até 2 segundos em condições normais de operação.”

Assim o requisito passa a ser mensurável e testável.

> [!warning] Quanto mais tarde, maior pode ser o impacto
> Um erro de entendimento descoberto durante uma conversa pode exigir apenas a correção de uma frase. O mesmo erro descoberto depois que banco de dados, interface, regras e integrações já foram implementados pode exigir alterações em várias partes do sistema.

---

## 6. Técnicas de Análise e Levantamento de Requisitos

As técnicas de levantamento ajudam o analista a descobrir as necessidades dos usuários e compreender o contexto do problema.

### 6.1 Entrevistas

Conversas estruturadas ou semiestruturadas com clientes, usuários e outras partes interessadas.

Permitem aprofundar respostas, identificar dificuldades e entender diferentes pontos de vista.

**Boa para:** compreender processos, regras de negócio e necessidades específicas.

### 6.2 Brainstorming

Reunião em que os participantes propõem livremente ideias, problemas, funcionalidades ou soluções antes de realizar uma seleção e organização posterior.

O objetivo inicial é gerar possibilidades sem limitar excessivamente a discussão.

**Boa para:** explorar soluções, levantar funcionalidades e descobrir necessidades ainda pouco definidas.

### 6.3 Questionários

Conjunto de perguntas distribuído para várias pessoas, normalmente utilizando perguntas abertas, fechadas ou escalas de avaliação.

É útil quando existe um grande número de usuários ou quando entrevistas individuais seriam inviáveis.

**Boa para:** coletar opiniões e informações de muitas pessoas de maneira padronizada.

### 6.4 Leitura e análise de documentos

Consiste em estudar materiais que já existem na organização, como:

- formulários;
- planilhas;
- relatórios;
- manuais;
- contratos;
- procedimentos internos;
- sistemas anteriores;
- leis e normas aplicáveis.

Essa técnica ajuda a descobrir regras e processos que muitas vezes não são mencionados nas entrevistas.

**Boa para:** compreender processos existentes e identificar regras formais do negócio.

### 6.5 Observação e análise social — Etnografia

O analista observa os usuários realizando suas atividades no ambiente real de trabalho.

Em alguns casos, ele acompanha o processo por um período para compreender dificuldades, improvisações e comportamentos que os próprios usuários podem não perceber ou mencionar.

É uma forma de **vivenciar e observar o problema no contexto em que ele realmente acontece**.

**Boa para:** descobrir necessidades implícitas e diferenças entre o processo documentado e o processo realmente executado.

### 6.6 Prototipagem

Consiste em construir uma representação inicial da solução para validar requisitos com os usuários.

O protótipo pode representar telas, navegação, fluxo ou comportamento esperado do sistema.

Seu objetivo inicial não é necessariamente ser o produto final, mas permitir que o cliente visualize a ideia e diga se ela corresponde ao que precisa.

Após a validação, o protótipo pode:

- ser melhorado e evoluir para uma versão final;
- ser parcialmente reaproveitado;
- ou ser descartado após cumprir seu papel de validação.

**Boa para:** validar interfaces, fluxos e requisitos difíceis de compreender apenas por texto.

### Comparação rápida

| Técnica | Principal vantagem |
|---|---|
| Entrevista | aprofundar necessidades e regras |
| Brainstorming | gerar várias ideias rapidamente |
| Questionário | alcançar muitos usuários |
| Análise de documentos | descobrir processos e regras existentes |
| Etnografia | observar como o trabalho realmente acontece |
| Prototipagem | validar visualmente uma solução antes da implementação |

> [!important] Não existe uma única técnica ideal
> Em projetos reais, é comum combinar várias técnicas. Por exemplo: analisar documentos, entrevistar o cliente, observar o processo e finalmente criar um protótipo para validar o entendimento.

---

## 7. Fluxo resumido da Engenharia de Requisitos

```text
Problema
   ↓
Reconhecimento do contexto
   ↓
Levantamento de informações
   ↓
Avaliação do problema
   ↓
Síntese da solução
   ↓
Modelagem
   ↓
Especificação dos requisitos
   ↓
Revisão e validação
   ↓
Visão compartilhada do sistema
```

---

## 8. Atividade — Projeto em Grupo

O projeto será desenvolvido em etapas. Neste momento devem ser realizadas apenas as **Etapas 0 e 1**.

### Etapa 0 — Elaboração do tema

Selecionar um tema de interesse do grupo.

O tema representa a área ou contexto no qual o projeto será desenvolvido.

**Exemplos:**

- restaurante;
- clínica;
- escola;
- oficina;
- controle financeiro;
- eventos;
- transporte;
- comércio eletrônico.

### Etapa 1 — Definição do problema / caso de uso inicial

Depois de selecionar o tema, o grupo deve definir **qual problema pretende resolver**.

É importante evitar começar pela tecnologia.

Em vez de:

> “Vamos criar um aplicativo.”

Preferir:

> “Pequenos restaurantes possuem dificuldade em organizar pedidos entre atendimento e cozinha, causando atrasos e erros de comunicação.”

A solução tecnológica será definida posteriormente com base no problema e nos requisitos levantados.

#### Perguntas para ajudar a definir o problema

- Quem possui esse problema?
- Em qual contexto ele acontece?
- Como o processo funciona atualmente?
- Qual dificuldade é enfrentada?
- Quais consequências essa dificuldade causa?
- O que deveria melhorar após a solução?

### Etapa 2 — Viabilidade

A análise de viabilidade será realizada posteriormente.

Nessa etapa será avaliado se a solução proposta é viável considerando fatores como tecnologia, recursos, custos, tempo e capacidade de execução.

> [!todo] Para a próxima etapa
> Por enquanto, o grupo deve entregar apenas:
> 1. **Tema escolhido — Etapa 0**
> 2. **Definição clara do problema/caso de uso — Etapa 1**

---

## 9. Revisão rápida

- **Engenharia de requisitos:** entender, documentar e validar necessidades.
- **Reconhecimento:** compreender o problema e seu contexto.
- **Síntese:** selecionar e resumir uma solução adequada.
- **Modelagem:** representar o sistema para facilitar o entendimento.
- **Especificação:** documentar requisitos e restrições.
- **Revisão:** validar se todos possuem a mesma visão.
- **RF:** descreve o que o sistema faz.
- **RNF:** descreve propriedades, qualidades e restrições.
- **Levantamento:** pode utilizar entrevistas, brainstorming, questionários, documentos, etnografia e prototipagem.

## Conexões

- Disciplina anterior: [[semestre-1/Engenharia de Software/00 - Engenharia de Software|Engenharia de Software]]
- Mapa da disciplina: [[00 - Engenharia de Software 2]]
