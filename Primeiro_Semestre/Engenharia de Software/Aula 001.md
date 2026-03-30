23 / 02 / 2026
gihub: https://github.com/profmauricioaneves/fatecEngenhariaSoftware1

# 00 - Engenharia de Software 1 - Aula Introdutória
## 📌 Objetivo da Disciplina
Aplicar princípios da Engenharia de Software na implementação de sistemas de informação e iniciar a modelagem de requisitos.

## 📚 Bibliografia
- **Pressman** - Engenharia de Software, 6ª ed.
- **Sommerville** - Engenharia de Software, 8ª ed.

---

## 🔑 O que é Engenharia de Software?

> Disciplina da Computação voltada ao desenvolvimento e manutenção de sistemas de forma **sistemática, disciplinada e quantificável**.

**Objetivo principal:** Criar software de alta qualidade, dentro de prazos e custos previstos.

---

## 📜 Origem Histórica

### Crise do Software (décadas 1960-70)
Problemas enfrentados:
- Projetos atrasados ou nunca concluídos
- Custos estourados
- Muitos erros nos softwares
- Manutenção difícil e cara
- Documentação insuficiente

> **Marco inicial:** Conferência da OTAN em **1968**, onde o termo "Software Engineering" foi oficializado.

---

## 📊 Comparativo: Engenharia de Software vs Outras Engenharias

| Aspecto                     | Engenharia de Software                                                       | Engenharia Civil                                                | Engenharia Mecânica                                         |
| --------------------------- | ---------------------------------------------------------------------------- | --------------------------------------------------------------- | ----------------------------------------------------------- |
| Produto Final               | Sistemas e aplicações digitais intangíveis                                   | Estruturas físicas como prédios, pontes, estradas               | Máquinas, motores, veículos e equipamentos                  |
| Matéria Prima               | Código fonte, dados, algoritmos, documentação                                | Concreto, aço, madeira, materiais de construção                 | Metais, polímeros, fluidos, combustíveis                    |
| Base de Conhecimento        | Computação, lógica, algoritmos, UX, redes                                    | Física, cálculo estrutural, resistência dos materiais           | Física, termodinâmica, dinâmica de sistemas                 |
| Processo de Desenvolvimento | Análise de requisitos, projeto, codificação, testes, implantação, manutenção | Projeto arquitetônico, cálculo estrutural, construção, inspeção | Projeto mecânico, prototipagem, testes funcionais, produção |
| Ferramentas                 | IDEs, repositórios, frameworks, servidores                                   | Trena, nível, softwares CAD, guindastes                         | Torno mecânico, fresadora, CAD/CAM, bancada de teste        |
| Prototipagem                | Versão beta ou MVP (Produto Mínimo Viável)                                   | Maquete física ou 3D                                            | Protótipo físico ou simulação                               |
| Normas e Padrões            | Padrões de codificação, metodologias ágeis, ISO/IEC                          | Normas de construção (ABNT/ISO)                                 | Normas técnicas e de segurança (ABNT/ISO)                   |
| Manutenção                  | Correção de bugs, atualização de funcionalidades, melhoria de desempenho     | Reforma, reforço estrutural                                     | Troca de peças, lubrificação, ajuste mecânico               |

---

## 📈 Evolução da Engenharia de Software

| Período | Características |
|---------|-----------------|
| **1960-70** | Modelo Cascata, linguagens de alto nível, metodologias estruturadas |
| **1980** | Qualidade, ferramentas CASE, POO emergindo |
| **1990** | Java/C++, internet, testes automatizados |
| **2000** | **Manifesto Ágil (2001)**, integração contínua, desenvolvimento distribuído |
| **2010+** | DevOps, nuvem, IA, apps mobile, DevSecOps |

---

## 🎯 Objetivos da Engenharia de Software

1. Métodos sistemáticos (análise, projeto, implementação, testes)
2. Organização e documentação adequadas
3. Controle de qualidade e gerenciamento de mudanças
4. Modelos e processos (cascata, ágil, incremental)
5. Ferramentas para produtividade

---

## ✅ Importância

A Engenharia de Software garante que o produto final:
- ✔️ Atenda às necessidades do cliente
- ✔️ Seja entregue no prazo e orçamento
- ✔️ Tenha qualidade, desempenho e segurança
- ✔️ Seja fácil de manter e evoluir

---

> **Conclusão:** É uma das áreas mais estratégicas da Computação, combinando conhecimento técnico, metodológico e de gestão para criar soluções digitais que sustentam praticamente todos os setores da sociedade moderna.

# 01 - Fundamentos da Engenharia de Software
## 📌 Objetivos da Disciplina
- Aplicar conceitos de engenharia de software na especificação de requisitos, análise e projeto de sistemas
- Apresentar técnicas de teste e manutenção
- Ensinar o ciclo de vida do desenvolvimento de software

---

## 📚 Conteúdo Programático
1. Processos de software e desenvolvimento ágil
2. Engenharia de Requisitos
3. Modelagem de software
4. Projetos de Software
5. Implementação e configuração
6. Teste e Evolução de software
7. Reuso e desenvolvimento baseado em componentes

---

## 🔑 Definições Principais

| Conceito | Definição |
|----------|-----------|
| **Software** | Conjunto de instruções, estruturas de dados e documentos (Pressman, 2006) |
| **Engenharia de Software** | Aplicação sistemática, disciplinada e quantificável para desenvolvimento, operação e manutenção de software (IEEE, 1992) |

**Tipos de produtos:**
- **Genéricos** – vendidos para vários clientes (ex: Excel, Word)
- **Personalizados** – desenvolvidos sob medida

---

## 📜 Contexto Histórico
- **Anos 70**: Crise do Software — dificuldade em produzir software com qualidade
- **1968**: Conferência da OTAN em Garmisch (Alemanha) — marco do nascimento da disciplina

---

## ⚠️ Problemas Comuns
- Custos de software superam os de hardware
- Manutenção custa mais que o desenvolvimento
- ~60% custos de desenvolvimento, ~40% de testes
- Prazos e custos não respeitados
- Requisitos mal definidos

---

## 🏗️ Camadas da Engenharia de Software

| Camada          | Descrição                                              |
| --------------- | ------------------------------------------------------ |
| **Processo**    | Une métodos + ferramentas, define sequência e recursos |
| **Métodos**     | Como fazer (análise, projeto, codificação, testes)     |
| **Ferramentas** | Apoio automatizado (CASE, linguagens, bancos de dados) |

---

## 🎯 Princípios Fundamentais
- Evitar dependência de pessoas/processos
- Abstrair aspectos importantes
- Subdividir problemas complexos
- Reutilizar código
- Flexibilização e modularização
---------
### Resumo: Aula comentado

Linguagens de hoje em dia são consideradas de alto nível: São linguagens que falam praticamente a nossa língua, possuem formas mais atualizadas para a criação de programas.
As linguagens antigas são mais brutas, nos forçam a trabalhar mais para criar algo "simples" visto a linguagens atuais, são mais complexas quase chegando a se comparar a programação de máquinas.

# O que não é uma engenharia de software?

- Aprender uma linguagem

# O que é:

- Processos (Modelagens, tipos de sotfwares) + pessoas (Quem trabalha com isso (Stakeholder - será comentado mais a frente))  + qualidade + produto (Código + Documentação)
- Documentação 

Quando falamos sobre construir um produto falamos sobre algo que precisa ser bem pensado desde o começo, por isso o foco principal é a análise de requisitos do sistema, para a produção do mesmo.
Desde o início precisamos focar em boas, principalmente quando tratamos de dados sensíveis, como gestão de renda, bancos, informações pessoais e outras. 

### Mas onde surgiu a Engenharia de Software (Software Engineering)?
	Surgiu em 1968, durante a Conferência de Engenharia de Software organizada pela OTAN (Organizações do Tratado do Atlântico Norte), foi utilizado oficialmente o termo Engenharia de Sotfware para destacar a necessidade de aplicar principios de engenharia ao desenvolvimento de programas.
	
# O que é Software?

**Software é uma solução digital criada para resolver problemas do mundo real.**

Seja na indústria, comércio, hospitais, escolas ou prefeituras — onde houver um processo que precisa ser automatizado ou otimizado, o software entra em ação.

## 💡 A lógica por trás

A estratégia é simples: **pegar um problema grande e dividi-lo em partes menores**, resolvendo cada uma separadamente até que o todo funcione.

## 📦 Exemplo Prático: Padaria

**Problema:** O dono de uma padaria não consegue controlar as vendas, o estoque e o caixa de forma eficiente.

**Solução:** Criar um software dividindo o problema em partes:

| Parte do Problema | Solução no Software |
|-------------------|---------------------|
| Controle de vendas | Módulo de registro de vendas (PDV) |
| Controle de estoque | Módulo que avisa quando um produto está acabando |
| Fechamento de caixa | Módulo que calcula entradas e saídas do dia |
| Relatórios | Módulo que mostra o faturamento por período |

**Resultado:** O dono ganha tempo, reduz erros e toma decisões melhores.

## ✅ Resumindo

	**Software = Problema identificado + Divisão em partes + Automação de processos**

Não importa o tamanho do negócio — o princípio é sempre o mesmo: **entender o problema, quebrar em pedaços menores e construir uma solução que facilite a vida de quem vai usar.**

Na POO criamos classes que servem para solucionar um problema especifico, ela solucionam esse problema e quando precisarmos da solução chamamos está classe, que é isolada das outras e especial onde cada uma é diferente da outra
Exemplo: Herança, Encapsulamento, Polimorfismo