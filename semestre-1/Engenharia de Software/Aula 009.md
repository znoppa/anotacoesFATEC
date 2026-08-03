---
tipo: aula
semestre: 1
disciplina: Engenharia de Software
aula: 9
data: 2026-05-11
status: em-revisao
revisao: false
aliases:
  - ES 009 — UML e casos de uso
tags:
  - ads/semestre-1
  - disciplina/engenharia-software
---

11/05/2026

---

# 📅 Aula — Atividade de Modelagem

> 👩‍🏫 **Profa. Ana Célia Portes**
> 📖 **Disciplina:** Engenharia de Software I
> 🎯 **Tema:** Atividade de Modelagem • Modelo de Casos de Uso

---

## 1. Atividades do Processo de Engenharia de Software

São **5 atividades genéricas** que compõem o processo:

| # | Atividade |
|:---:|:---|
| 1 | **Comunicação** |
| 2 | **Planejamento** |
| 3 | **Modelagem** ⭐ |
| 4 | **Construção** |
| 5 | **Implantação** |

---

## 2. Modelagem

### 📌 Definição
A atividade de modelagem é **iniciada na fase de análise de requisitos**, com o objetivo de garantir o **entendimento entre o cliente e os desenvolvedores** sobre o que o produto de software deve fazer.

### 🎯 Propósito
Uso de **modelos e diagramas** para representar:
- 👤 **Visão do usuário** sobre o software
- 🛠️ **Visão técnica** do produto

---

### 👤 Visão do Usuário

Representação dos **requisitos do cliente**:
- Funcionalidades e operações
- Características solicitadas pelo cliente
- Comportamento esperado para o produto

### 🛠️ Visão Técnica

Representação das características do produto necessárias para que os **desenvolvedores possam construí-lo**:
- Arquitetura
- Interface do usuário
- Estruturas de dados
- Detalhes sobre os componentes

---

## 3. UML — Unified Modeling Language

- **Linguagem unificada de modelagem**
- Usada para **modelagem e documentação** de sistemas de software
- Criada nos **anos 90** para apoiar a abordagem de **orientação a objetos**

### 🔍 Duas Visões da UML

| Visão | Foco |
|:---|:---|
| **Estática / Estrutural** | Objetos, operações e atributos |
| **Dinâmica / Comportamental** | Colaboração entre objetos e mudanças de estado |

---

## 4. Diagramas da UML

### 🏗️ Estruturais
- Classes
- Objetos
- Pacotes
- Componentes
- Implantação
- Estrutura composta
- Perfil

### 🎬 Comportamentais
- **Caso de uso** ⭐ *(foco da aula)*
- Sequência
- Comunicação
- Máquina de estados
- Atividades
- Interação
- Temporização

---

## 5. Modelo de Casos de Uso

### 📌 O que é?
- Mostra as **funções do sistema** do ponto de vista do **usuário**
- **Complementa** a especificação dos **requisitos funcionais**

### 📦 Composição do Modelo
1. **Diagrama de Casos de Uso**
2. **Descrição**
3. **Fluxos de Eventos**

---

## 6. Diagrama de Casos de Uso

É a **parte mais visível** do modelo. Composto por:

- 👥 **Atores**
- ⚙️ **Casos de Uso**
- 🔗 **Relacionamentos**

---

### 👥 Ator

- **Entidade externa** ao sistema que participa de um (ou mais) caso de uso
- Papéis representados por:
  - 👤 Pessoas
  - 💻 Dispositivos de hardware
  - 🖥️ Outros sistemas computacionais
- **Não fazem parte do sistema** — residem fora dele
- Interagem com o sistema por meio de **envio e/ou recebimento de mensagens**

> 🎨 **Notação:** representado por um "boneco palito"

---

### ⚙️ Caso de Uso

- Representa uma **"funcionalidade"** do sistema ou um **requisito funcional**

> 💡 **Dica da professora:** Iniciar o nome do caso de uso com um **verbo no infinitivo**.
> Ex.: *Cadastrar cliente*, *Emitir relatório*, *Registrar pagamento*

> 🎨 **Notação:** representado por uma **elipse**

---

## 7. Relacionamentos

São **ligações** entre:
- Atores e casos de uso
- Dois casos de uso
- Dois atores

### Tipos de Relacionamento

| Tipo | Símbolo | Característica |
|:---|:---:|:---|
| **Associação** | — (linha) | Comunicação entre ator e caso de uso |
| **Inclusão** | «include» | Comportamento **obrigatório** |
| **Extensão** | «extend» | Comportamento **opcional** (condicional) |
| **Generalização** | ▷ (seta vazia) | Herança entre atores ou casos de uso |

---

### 🔗 Associação

- Indica uma **comunicação** entre um ator e um caso de uso
- Um ator pode estar associado a **um ou mais** casos de uso
- Um caso de uso pode estar associado a **um ou mais** atores

---

### ➕ Inclusão `«include»`

- Indica que o caso de uso **base incorpora o comportamento** de outro caso de uso
- O caso de uso incluído é executado como **parte** do caso de uso que o inclui
- A execução é **OBRIGATÓRIA** ✅

> 📌 Exemplo: *Realizar pagamento* «include» *Validar cartão*

---

### 🔀 Extensão `«extend»`

- Representa que o caso de uso base **incorpora o comportamento** de outro caso de uso em um **ponto específico**
- A execução do caso de uso estendido **NÃO é obrigatória** ❌
- Só é executado em uma **situação específica** — o **ponto de extensão (condição)** deve ser descrito no diagrama

> 📌 Exemplo: *Realizar saque* «extend» *Imprimir comprovante* (só se o cliente solicitar)

---

### 🧬 Generalização

Pode ocorrer em dois contextos:

**Entre atores:**
- Um ator **desempenha as mesmas funções** de outro ator
- Pode ainda desempenhar **funções extras**

**Entre casos de uso:**
- Um caso de uso derivado **herda o significado** de um caso de uso base quanto ao seu comportamento

> 📌 Exemplo: *Gerente* herda de *Funcionário* (faz tudo que o funcionário faz + funções extras)

---

## 8. Atividade Resolvida — Sistema de Controle de Estacionamento

### 📋 Cenário
- Controle feito pela **placa do veículo** (deve estar cadastrada)
- **Entrada:** funcionário insere a placa → sistema registra data/horário → imprime comprovante
- Se veículo **não cadastrado** → funcionário realiza o cadastro
- **Saída:** funcionário registra a placa → sistema calcula valor
- Se cliente for **mensalista** → adiciona valor à conta
- **Gerente** acessa o sistema para emitir **relatório diário**

### 🎭 Atores Identificados
- 👤 **Funcionário**
- 👨‍💼 **Gerente**

### ⚙️ Casos de Uso Identificados
- Registrar entrada do veículo
- Cadastrar veículo
- Registrar saída do veículo
- Calcular valor
- Adicionar valor à conta do mensalista
- Emitir relatório diário

### 🔗 Relacionamentos Sugeridos
- *Registrar entrada* «extend» *Cadastrar veículo* (só se não estiver cadastrado)
- *Registrar saída* «include» *Calcular valor* (sempre acontece)
- *Calcular valor* «extend» *Adicionar à conta do mensalista* (só se for mensalista)
- **Gerente** pode herdar de **Funcionário** (generalização)

---

## 9. Modelagem Ágil

> ⚠️ **Lembrete importante:** O principal objetivo é **construir software**, NÃO elaborar modelos e documentos.

### 📐 Princípios

- ✅ **Seja econômico**
- ✅ **Seja simples**
- ✅ **Seja flexível**
- ✅ **Declare um objetivo específico** para cada modelo
- ✅ **Obtenha feedback** sobre os modelos elaborados

---

## 📚 Referências da Aula

- 📘 **Pressman, R. S.** — *Engenharia de Software*, 6ª edição, **capítulo 5**
- 📘 **Falbo, R. A.** — *Notas de Aula de Engenharia de Software*
- 🎥 **Vídeo recomendado:** [Tutorial de Caso de Uso UML](https://youtu.be/ab6eDdwS3rA)
