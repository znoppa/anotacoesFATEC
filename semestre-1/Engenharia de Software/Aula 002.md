
02/03/2026

---

## 🎯 Objetivos da Aula

- Compreender os **conceitos e modelos** de processo de software
- Apresentar **três modelos genéricos** de processo e as situações em que são aplicáveis
- Conhecer as **atividades fundamentais** da engenharia de requisitos, desenvolvimento, testes e evolução
- Compreender por que os processos devem ser organizados para **lidar com mudanças** nos requisitos e projetos
- Compreender o conceito de **melhoria do processo de software** e os fatores que afetam a qualidade

---

## 🔥 O Problema: A Crise do Software

### A cena ilustrativa
A aula começa com uma história hipotética: um grupo de desenvolvedores talentosos e motivados tem uma ideia brilhante para um aplicativo. Trancam-se numa sala, vivem à base de pizza e café, e após meses de trabalho intenso o app fica pronto. O lançamento é um sucesso... **por uma semana.**

### Os problemas que surgem:
- O app **crasha** com mais de 100 usuários
- O botão de "esqueci a senha" simplesmente **não funciona**
- Uma atualização do sistema operacional **quebra metade** das funcionalidades
- Clientes pedem um novo recurso que os devs juram ser **impossível** de adicionar sem reescrever tudo do zero

**Diagnóstico:** Tinham talento e boa ideia, mas **faltou engenharia**.

### O cenário histórico
Nas décadas iniciais da computação, histórias assim eram **a regra, não a exceção**. Projetos de software:

- **Estouravam o orçamento** → Custavam muito mais do que o planejado
- **Atrasavam meses ou até anos** → Entregues longe do prazo original
- **Eram cheios de defeitos (bugs)** → Falhavam de maneiras inesperadas e críticas
- **Não atendiam às necessidades reais** → Entregavam algo diferente do que o cliente queria
- **Eram impossíveis de manter** → Ninguém conseguia entender o código para consertar ou melhorar

Esse conjunto de desafios ficou conhecido como **"A Crise do Software"**.

---

## 💡 A Solução: Aplicar Engenharia ao Software

A Engenharia de Software **não é apenas "programar"**. É a aplicação de uma **abordagem sistemática, disciplinada e quantificável** para o desenvolvimento, operação e manutenção de software.

Em outras palavras, é tratar a criação de software **não como uma arte informal**, mas como uma **disciplina de engenharia** — com métodos, processos, ferramentas e melhores práticas.

### O que a Engenharia de Software permite construir:

| Atributo                          | Descrição                                                                                                                                |
| --------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------- |
| **1. Qualidade e Confiabilidade** | O software funciona como esperado, é robusto e seguro                                                                                    |
| **2. Previsibilidade**<br>        | Conseguimos estimar prazos e custos com muito mais precisão                                                                              |
| **3. Eficiência**                 | Usamos recursos (tempo, pessoas, dinheiro) da melhor forma possível                                                                      |
| **4. Manutenibilidade**           | O software é bem estruturado para que outras pessoas possam entendê-lo, consertá-lo e evoluí-lo facilmente                               |
| **5. Adequação às Necessidades**  | Entendemos profundamente o problema do cliente **antes** de começar a codificar, garantindo que entregaremos o que ele realmente precisa |

---

## ⚙️ O Processo de Software

Um processo de software é um **conjunto de atividades relacionadas** que levam à produção de um sistema de software.

### Pontos-chave:
- Existem **muitos tipos diferentes** de sistemas de software
- **Não há um método universal** de engenharia de software aplicável a todos eles
- Consequentemente, **não existem processos de software universalmente aplicáveis**
- O processo utilizado nas diferentes empresas depende:
  - Do **tipo de software** sendo desenvolvido
  - Dos **requisitos do cliente**
  - Das **habilidades das pessoas** que o desenvolvem

### As 4 Atividades Fundamentais (presentes em TODO processo)

1. **Especificação** → A funcionalidade do software e as restrições sobre sua operação devem ser definidas
2. **Desenvolvimento** → O software deve ser produzido para atender à especificação
3. **Validação** → O software deve ser validado para garantir que atenda o que o cliente deseja
4. **Evolução** → O software deve evoluir para atender às mudanças nas necessidades dos clientes

---

## 🏗️ Estrutura do Processo de Software

Estrutura aplicável à **maioria dos projetos**, sejam de pequena, média ou alta complexidade:

1. **Comunicação** → Contempla alta comunicação e colaboração com o cliente/usuário e abrange o **levantamento de requisitos**
2. **Planejamento** → Descreve as **tarefas técnicas**, os **riscos prováveis**, os **recursos necessários**, os **produtos** que serão produzidos e um **cronograma**
3. **Modelagem** → Constrói **modelos** que permitem ao desenvolvedor e ao cliente entender melhor os requisitos do software e o software que atenderá esses requisitos
4. **Construção** → Contempla a **criação dos códigos** e a **execução de testes**
5. **Implantação** → **Avaliação e feedback** do cliente quanto ao software desenvolvido

---

## ✅ Atributos de um Bom Software

- **Facilidade de manutenção** → O software deve evoluir para atender às necessidades de mudança
- **Confiança** → O software deve ser confiável
- **Eficiência** → O software não deve desperdiçar os recursos do sistema
- **Usabilidade** → O software deve ser aceito pelos usuários para o qual foi projetado. Isso significa que ele deve ser **compreensível**, **usável** e **compatível** com outros sistemas

---

## 📐 Modelos de Processo de Software

Um modelo de processo de software — também chamado de **ciclo de vida de desenvolvimento de software** — é uma **representação simplificada** de um processo de software.

- Cada modelo representa um processo a partir de uma **perspectiva particular**, fornecendo apenas **informações parciais**
- São descrições **gerais e abstratas** dos processos
- Devem ser encarados como **estruturas de processo** que podem ser **ampliadas e adaptadas**

### Os 3 modelos apresentados:
1. **Modelo em Cascata** *(foco desta aula)*
2. Desenvolvimento Incremental *(próximas aulas)*
3. Integração e Configuração *(próximas aulas)*

---

## 🌊 O Modelo em Cascata — Em Profundidade

### Origem
- **Primeiro modelo** de processo de desenvolvimento de software a ser publicado
- Derivado dos modelos utilizados na **engenharia de grandes sistemas militares**
- Apresenta o desenvolvimento como uma **série de estágios sequenciais** (daí o nome "cascata" — uma fase "cai" para a próxima)
- É um exemplo de **processo dirigido por plano**: é necessário **planejar e criar um cronograma de todas as atividades** antes de começar o desenvolvimento

---

### Os 5 Estágios do Modelo em Cascata

#### 1️⃣ Análise e Definição dos Requisitos
- Os **serviços**, as **restrições** e as **metas** do sistema são estabelecidos por meio de **consulta aos usuários**
- Depois, são definidos **em detalhes** e servem como uma **especificação do sistema**

#### 2️⃣ Projeto do Sistema e do Software
- O processo de projeto **reparte os requisitos** entre requisitos de sistemas de **hardware** e de **software**
- Estabelece uma **arquitetura global** do sistema
- O projeto de software envolve a **identificação e descrição das abstrações fundamentais** do sistema de software e seus **relacionamentos**

- Notas Vitor: Nesta parte do projeto fazemos os diagramas, tal como os de "Use Case", que são casos que os usuários poderão realizar, exemplo em um sistema de gestão, o gestor teria mais funcionalidades de uso que o funcionário
- Nesta fase não fazemos testes, apenas quando passamos para a próxima fase, caso ele falhe nos testes voltamos a está etapa e retornamos a coleta de requisitos e modificamos o projeto para suprir este erro.

#### 3️⃣ Implementação e Teste de Unidade
- O projeto de software é realizado como um **conjunto de programas ou unidades de programa**, ou seja, todas as funcionalidades construídas separadamente agora são utilizadas de forma unificada, todas as etapas do sistema como exemplo:
	O login -> entrada no software -> cadastro de um produto -> visualização -> edição do mesmo, entre outras. 
  Essa etapa foca em verificar se o sistema conjunto funciona ou identificar os erros no caminho a ser seguido

- O **teste de unidade** envolve a **verificação de cada unidade**, conferindo se satisfazem a sua especificação

#### 4️⃣ Integração e Teste de Sistema
- As unidades de programa são **integradas e testadas como um sistema completo**
- O objetivo é garantir que os **requisitos de software tenham sido cumpridos**
- Após os testes, o sistema de software é **entregue ao cliente**

#### 5️⃣ Operação e Manutenção
- **Normalmente a fase mais longa** do ciclo de vida
- O sistema é **instalado e colocado em uso**
- A manutenção envolve:
  - **Corrigir erros** que não foram descobertos nas primeiras fases
  - **Melhorar a implementação** das unidades do sistema
  - **Aperfeiçoar os serviços** à medida que novos requisitos são descobertos

---

### 📄 Sobre a Documentação e Sequenciamento

- O resultado de **cada fase** consiste em **um ou mais documentos** que são **aprovados**

- _A **fase seguinte não deve começar** até que a fase anterior tenha terminado_
	Esse motivo se dá ao fato de que se um erro for encontrado na etapa seguinte, o mesmo deve ser retornado a anterior ou até mesmo ao início para encontrar o motivo da ocorrência 

- No desenvolvimento de **hardware** (altos custos de produção), isso faz sentido
- No desenvolvimento de **software**, porém, esses estágios **se sobrepõem e alimentam uns aos outros**:
  - Durante o **projeto** → são identificados problemas com os **requisitos**
  - Durante a **codificação** → são encontrados problemas com o **projeto**
  - E assim por diante...
- **Na prática, o processo nunca é um modelo linear simples**, pois envolve **feedback entre as fases**
 
O Projeto de software envolve toda a descrição DETALHADA do software

---

### ⚠️ O Problema do Congelamento Prematuro

Quando surgem novas informações em uma etapa, os documentos das etapas anteriores devem ser **modificados**. Exemplo: se um requisito é caro demais para ser implementado, o documento de requisitos deve ser alterado para removê-lo.

- Isso requer **aprovação do cliente** → implica **atraso** no processo
- Como consequência, tanto clientes quanto desenvolvedores podem **congelar prematuramente** a especificação para evitar alterações

**Consequências negativas do congelamento prematuro:**
- Os problemas serão **deixados para depois, ignorados ou contornados** por meio de programação
- O sistema pode **não fazer o que o usuário realmente deseja**
- Pode levar a **sistemas mal estruturados**, já que problemas de projeto (design) foram contornados por **artifícios de implementação**

---

### A Fase Final: Operação e Manutenção (Detalhamento)

Durante esta fase:
- O software começa a ser utilizado
- **Erros e omissões** nos requisitos originais são descobertos
- **Falhas de programação e de projeto** emergem
- A **necessidade de novas funcionalidades** é identificada
- O sistema deve **evoluir** para continuar sendo útil
- Realizar mudanças (manutenção) pode envolver a **repetição dos estágios de processos prévios**

---

### ✅ Quando o Modelo em Cascata É ADEQUADO

| Tipo de Sistema                     | Justificativa                                                                                                                                                                                                                                                                                                                                          |
| ----------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **1. Sistemas embarcados**          | O software deve interagir com hardware. Devido à **inflexibilidade do hardware**, não é possível postergar decisões sobre funcionalidade                                                                                                                                                                                                               |
| **2. Sistemas críticos**            | Há necessidade de **ampla análise de segurança (safety) e segurança da informação (security)** da especificação e do projeto. Os documentos devem estar **completos** para que a análise seja possível. É **muito caro** corrigir problemas de segurança na fase de implementação                                                                      |
| **3. Grandes sistemas de software** | Fazem parte de sistemas de engenharia mais amplos, desenvolvidos por **várias empresas parceiras**. O hardware pode usar modelo similar, e as empresas preferem um **modelo comum**. Quando várias empresas estão envolvidas, **especificações completas** são necessárias para permitir o **desenvolvimento independente** dos diferentes subsistemas |

---

### ❌ Quando o Modelo em Cascata NÃO É Recomendado

- Situações em que a **comunicação informal do time é possível**
- Quando os **requisitos de software mudam rapidamente**
- Para esses casos → **desenvolvimento iterativo** e **métodos ágeis** são melhores

---

### 🔬 Variação: Desenvolvimento de Sistema Formal

Uma variação importante do modelo em cascata:

- É criado um **modelo matemático** de uma especificação de sistema
- Esse modelo é **refinado em código executável** usando **transformações matemáticas** que preservam sua consistência
- Exemplo: processos baseados no **método B**
- Utilizado basicamente no desenvolvimento de sistemas com **requisitos rigorosos de segurança (safety), confiabilidade ou segurança da informação (security)**
- **Simplifica** a produção de um caso de segurança, demonstrando a clientes ou reguladores que o sistema **satisfaz na prática** os seus requisitos

### ⚠️ Limitação da abordagem formal:
- Em decorrência dos **altos custos** de desenvolvimento de uma especificação formal, esse modelo **raramente é utilizado**, exceto na engenharia de **sistemas críticos**

---

## 📌 Síntese Final

Douglas, resumindo os pontos mais importantes da aula:

> 1. A **Engenharia de Software** nasceu para resolver a **Crise do Software** — projetos caóticos, caros e que não atendiam às necessidades
> 2. Todo processo de software deve contemplar **especificação, desenvolvimento, validação e evolução**
> 3. O **Modelo em Cascata** é sequencial, dirigido por plano, e foi o primeiro modelo publicado
> 4. Ele funciona bem para **sistemas embarcados, críticos e grandes projetos multi-empresa**
> 5. Seu principal problema é a **rigidez**: na prática, as fases se sobrepõem e o congelamento prematuro de requisitos gera sistemas que não atendem ao usuário
> 6. Para projetos com requisitos voláteis, **métodos ágeis e iterativos** são mais adequados