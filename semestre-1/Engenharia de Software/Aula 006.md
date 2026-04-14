Data: 13/04

Primeira aula com a **Ana Célia** 
Email: ana.portes@cps.sp.gov.br

Materiais:
**Livro: **https://engsoftmoderna.info/
2 - Processos : https://engsoftmoderna.info/cap2.html
2.1 e 2.2 - Leitura

Atividade: [[ADS - ESI(noite) Atividade - Processos de SW.pdf]]

Implantação: Se refere a implantação do software no seu local de uso, mais voltado a disposição da contratante/empresa para o uso do software;

Implementação: Se refere a construção do software, implementando um software, programando uma funcionalidade, geralmente no final do software.

---
# 📚 Capítulo 2 – Processos

---

## 🔹 2.1 Importância de Processos

### 📌 Analogia com fábricas

A produção de um carro em uma fábrica segue um processo bem definido: primeiro as chapas são cortadas e prensadas, depois o carro é pintado e, por fim, são instalados os componentes mecânicos.

Da mesma forma, o software também precisa de um processo com passos claros, embora seja menos mecânico e mais dependente de esforço intelectual.

---

### 📌 Definição

Um **processo de software** é o conjunto de:

- passos  
- tarefas  
- eventos  
- práticas  

que devem ser seguidos para produzir um sistema.

---

### 📌 Por que seguir um processo?

Alguns questionam a necessidade de processos, citando exemplos como:

- Linux (sistema operacional)
- TeX (sistema de formatação de texto)

Esses sistemas foram inicialmente desenvolvidos por um único indivíduo. Nesses casos:

- o processo é **pessoal**
- baseado nas decisões do próprio desenvolvedor
- o impacto é restrito a ele

---

### ⚠️ Realidade atual

- Sistemas modernos são **complexos**
- São desenvolvidos por **equipes**
- Casos de “desenvolvedores heróis” são raros

---

### 📊 Importância nas equipes

Processos são essenciais para:

- Coordenar o trabalho  
- Organizar tarefas  
- Motivar equipes  
- Avaliar desempenho  
- Garantir alinhamento com objetivos da empresa  

Sem processo:

- Times trabalham de forma **descoordenada**
- Produtos podem não ter **valor de negócio**
- Desenvolvedores ficam **perdidos e desalinhados**

---

## 🔹 2.2 Manifesto Ágil

### 📜 Contexto histórico

Os primeiros processos (década de 70) eram baseados no modelo **cascata**, com fases sequenciais:

- Requisitos → Projeto → Implementação → Testes → Manutenção

Esse modelo foi inspirado em outras engenharias (civil, mecânica, etc.).

---

### ⚠️ Problemas identificados (1970–1990)

Projetos de software frequentemente:

- atrasavam  
- ultrapassavam custos  
- eram cancelados  

---

### 📊 CHAOS Report (1994)

Produzido pela empresa Standish Group:

- Mais de **55% dos projetos** atrasavam entre **51% e 200%**  
- Pelo menos **12%** atrasavam mais de **200%**  
- Cerca de **40%** ultrapassavam orçamento em até **200%**  

---

### 🧠 Conclusão

Software é diferente de outros produtos de engenharia porque:

- requisitos mudam com frequência  
- clientes não sabem exatamente o que querem  
- mudanças ocorrem durante o projeto  

---

### 🏔 Encontro de Snowbird (2001)

Um grupo de especialistas criou o **Manifesto Ágil**, propondo uma nova abordagem de desenvolvimento.

---

### 💡 Valores do Manifesto Ágil

Valorizar mais:

- **Indivíduos e interações** do que processos e ferramentas  
- **Software funcionando** do que documentação abrangente  
- **Colaboração com o cliente** do que negociação de contratos  
- **Resposta a mudanças** do que seguir um plano  

---

### ⚙️ Características dos processos ágeis

- Ciclos curtos (≈ 1 mês ou menos)  
- Desenvolvimento **iterativo e incremental**  
- Prioridade nas funcionalidades mais importantes  

---

### 🔄 Funcionamento

Cada iteração:

1. Implementa funcionalidades prioritárias  
2. Entrega um incremento funcional  
3. Cliente valida  
4. Novo ciclo começa  

---

### ⚠️ Observações importantes

- Iterações **não são mini-cascatas**  
- Nem todo incremento precisa ser colocado em produção  
- Implantação depende de fatores externos:
  - risco  
  - marketing  
  - infraestrutura  
  - treinamento  

---

### 🛠 Outras características dos métodos ágeis

#### 📄 Documentação

- Apenas o essencial  
- Evita documentos longos e obsoletos  

---

#### 📋 Planejamento

- Menos detalhado  
- Requisitos evoluem durante o projeto  

---

#### 🧠 Design

- Não existe **big design up front**  
- Design evolui ao longo das iterações  

---

#### 👥 Equipes

- Pequenas (≈ até 10 pessoas)  
- Alta colaboração  

---

#### ⚙️ Práticas modernas

- Programação em pares  
- Testes automatizados  
- Integração contínua  

---

### 🧩 Natureza dos métodos ágeis

- Processos **leves**
- Pouca documentação
- Alta adaptabilidade

---

## 🔹 2.3 Extreme Programming (XP)

### 📌 Visão geral

XP é um método ágil voltado para sistemas com:

- requisitos vagos  
- mudanças frequentes  

Características:

- ciclos curtos  
- design incremental  
- pouca documentação  
- times pequenos  

---

### 💡 Valores

- Comunicação  
- Simplicidade  
- Feedback  
- Coragem  
- Respeito  
- Qualidade de vida  

---

### 📌 Princípios

- Humanidade  
- Economicidade  
- Benefícios mútuos  
- Melhorias contínuas  
- Falhas são naturais  
- Pequenos passos (*baby steps*)  
- Responsabilidade pessoal  

---

### ⚙️ Práticas

#### 🔹 Processo

- Cliente dentro do time  
- Histórias de usuário  
- Iterações curtas  
- Planejamento de releases  
- Planning poker  
- Slack  

---

#### 🔹 Programação

- Design incremental  
- Programação em pares  
- TDD (Test-Driven Development)  
- Build automatizado  
- Integração contínua  

---

#### 🔹 Gerência

- Métricas leves  
- Ambiente colaborativo  
- Contratos de escopo aberto  

---

## 🔹 2.4 Scrum

### 📌 Definição

- Método ágil focado em **gerenciamento de projetos**
- Iterativo e incremental

---

### ⚠️ Diferença XP x Scrum

- XP → foco em desenvolvimento (programação)  
- Scrum → foco em gerenciamento  

---

### 👥 Papéis

#### 🧑‍💼 Product Owner

- Define visão do produto  
- Prioriza backlog  
- Maximiza valor  

---

#### 🧑‍🏫 Scrum Master

- Facilita o processo  
- Remove impedimentos  
- Não é chefe  

---

#### 👨‍💻 Time de Desenvolvimento

- Multidisciplinar  
- Auto-organizável  
- Define soluções técnicas  

---

### 📦 Artefatos

- Backlog do Produto  
- Backlog do Sprint  
- Quadro Scrum  
- Burndown  

---

### 🔄 Eventos

- Planejamento do Sprint  
- Sprint (até 1 mês)  
- Daily Scrum  
- Revisão  
- Retrospectiva  

---

### 🔁 Fluxo

1. PO apresenta histórias  
2. Time seleciona tarefas  
3. Sprint ocorre  
4. Incremento é entregue e avaliado  

---

## 🔹 2.5 Kanban

### 📌 Origem

- Criado na Toyota (anos 50)  
- Adaptado para software em 2004  

---

### ⚙️ Características

- Fluxo contínuo  
- Sem sprints  
- Sem papéis fixos  
- Foco em eficiência  

---

### 📋 Quadro Kanban

Colunas típicas:

- Backlog  
- Especificação  
- Implementação  
- Revisão  

Recursos:

- Limite WIP (Work In Progress)  
- Sistema *pull* (puxar tarefas conforme capacidade)  

---

### 👥 Equipe

- Auto-organizável  
- Cada membro escolhe tarefas  

---

## 🔹 2.6 Quando NÃO usar métodos ágeis

Situações onde ágil pode não ser ideal:

- Falta de visão inicial → necessidade de design prévio  
- Domínio novo → exige documentação detalhada  
- Requisitos estáveis → menos necessidade de cliente  
- Sistemas críticos → exigem documentação formal  
- Empresas hierárquicas → dificultam autonomia  
- Contratos rígidos → dificultam escopo aberto  

---

### 📌 Mesmo em contextos tradicionais

Algumas práticas ágeis ainda são úteis:

- Times pequenos  
- Desenvolvimento iterativo  

---

## 🔹 2.7 Outros Métodos Iterativos

### 🌀 Modelo Espiral

- Desenvolvimento iterativo baseado em riscos  

Etapas:

1. Definir objetivos  
2. Analisar riscos  
3. Desenvolver e testar  
4. Planejar próxima iteração  

📌 Iterações longas (6 a 24 meses)

---

### 🏗 Processo Unificado (RUP)

Fases:

1. **Inception** → viabilidade  
2. **Elaboração** → requisitos + arquitetura  
3. **Construção** → desenvolvimento  
4. **Transição** → implantação  

Características:

- Uso de UML  
- Ferramentas CASE  
- Organização por disciplinas  

---

## 📌 Resumo Geral

- Todo software segue um processo  
- Processos ágeis surgiram para lidar com mudanças  
- XP, Scrum e Kanban são os principais métodos ágeis  
- Nem sempre o ágil é ideal  
- Métodos como Espiral e RUP ainda são relevantes  
