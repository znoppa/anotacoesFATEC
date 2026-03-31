16/03/2026

---

## 🎯 Objetivo da Aula
Apresentar o terceiro modelo genérico de desenvolvimento de software: **Integração e Configuração** (também conhecido como **Reuso de Software**). O foco é entender como a utilização de componentes, funções e classes pré-existentes pode acelerar e melhorar a criação de novas aplicações.

---

## ♻️ O que é Reuso de Software?

**Definição:** É a prática de utilizar componentes, códigos, modelos ou soluções já existentes para desenvolver novos sistemas, **evitando criar tudo do zero**.

- **A forma mais comum:** Uso de bibliotecas, funções, classes e frameworks (ex: copiar um código de um projeto antigo para o atual).
- **Evolução:**
  - *Anos 2000:* Frameworks, Componentes reutilizáveis, Open Source.
  - *Hoje:* APIs, Microsserviços, Pacotes (NPM, Maven) e Plataformas Cloud.

### 📜 Contexto Histórico
- **1968:** A ideia surgiu com *Doug McIlroy*, que queria que o software funcionasse como **"Circuitos Integrados" (CIs)** da eletrônica, fabricados em massa e selecionados em catálogos.
- **Anos 80:** A indústria passou a dar atenção à ideia devido ao aumento da complexidade dos sistemas. Em 1980, surgiu o primeiro projeto universitário sobre o tema (Universidade da Califórnia).

---

## ⚙️ O Modelo: Integração e Configuração

A premissa deste modelo é que a construção de software é cara e lenta. Para reduzir custos, prazos e aumentar a qualidade, propõe-se a utilização de componentes previamente desenvolvidos. 

Neste modelo, o desenvolvimento se baseia em **três tipos de componentes frequentes**:
1. **Sistemas de aplicação *stand-alone***: Sistemas de uso geral já prontos (de prateleira) configurados para um ambiente particular.
2. **Coleções de objetos / Frameworks**: Pacotes integrados a um framework (Ex: Java Spring Framework).
3. **Web Services (APIs)**: Serviços desenvolvidos em padrões web e disponíveis para uso remoto na internet.

---

## 🔄 Os 5 Estágios do Processo de Reuso

Diferente do modelo em Cascata, o desenvolvimento focado em reuso tem etapas específicas:

| Estágio                             | O que acontece?                                                                                                                                              |
| ----------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **1. Especificação dos Requisitos** | Proposição inicial com descrições breves do essencial (sem detalhar muito no início).                                                                        |
| **2. Descoberta e Avaliação**       | Busca por componentes/sistemas que forneçam a funcionalidade necessária e avaliação de sua adequação.                                                        |
| **3. Refinamento dos Requisitos**   | Os requisitos originais são **modificados para se adaptarem aos componentes encontrados**. Se for impossível adaptar, volta-se para a busca de novas opções. |
| **4. Configuração da Aplicação**    | Se um sistema "de prateleira" for encontrado, ele é configurado para ser utilizado.                                                                          |
| **5. Adaptação e Integração**       | Se não houver sistema pronto, componentes reusáveis são modificados/integrados ou novos componentes são criados para completar o sistema.                    |

---

## ⚖️ Vantagens e Desvantagens do Reuso

### ✅ Vantagens (Benefícios)
 A pratica da reutilização resulta na retenção do conhecimento na empresa e a coloca numa posição alta por desenvolver de forma rápida softwares de qualidade elevada
- **Redução de tempo e esforço:** Menos código a ser escrito do zero.
- **Redução de custos e riscos:** Homem-hora menor significa projeto mais barato.
- **Aumento da qualidade:** Como as soluções já foram testadas e validadas anteriormente, a chance de erro é muito menor.
- **Padronização:** A arquitetura das aplicações da empresa fica padronizada, facilitando a manutenção futura.
- **Entrega mais rápida** ao cliente.


### ❌ Desvantagens (Riscos)
Quando desenvolvemos algo com base no reuso, temos que desenvolver um software que possa ser reutilizado com base em um que foi reutilizado, o que gera:

- **Comprometimento dos requisitos:** Como você adapta o requisito ao que já existe no mercado, o produto final pode **não atender 100% às necessidades ideais do cliente**.
- **Perda de controle da evolução:** Novas versões de um componente de terceiros não estão sob o controle da sua equipe de desenvolvimento.
- **Gerência complexa:** Lidar com várias versões de componentes pode ser difícil.

---

## 🗂️ Tipos de Reuso

O reuso pode ser aplicado em várias fases e de diversas formas:

1. **Reuso Vertical:** Dentro de um **mesmo domínio** de aplicação (comum em Fábricas de Software, criando sistemas parecidos para a mesma área).
2. **Reuso Horizontal:** Componentes genéricos usados em **diferentes domínios** (Ex: bibliotecas de matemática, manipulação de string ou interfaces gráficas).
3. **Reuso Planejado:** Prática sistemática, formal, com forte investimento e apoio da gestão (comum na busca por certificações de maturidade de software).
4. **Reuso Composicional:** Uso de componentes como "blocos de montar" (Ex: Java Server Faces para telas).
5. **Reuso por Geradores de Código:** Reuso a nível de especificação usando ferramentas CASE e UML.
6. **Reuso Caixa Branca:** É preciso **conhecer e expor o código interno** do componente (usando herança em Java/C++ para modificar/adaptar).
7. **Reuso Caixa Preta:** **Não se conhece o código interno**. O reuso se dá através de interfaces ou contratos (APIs). Não há desperdício de tempo tentando entender o código alheio.
8. **Reuso de Código Fonte:** O mais utilizado na prática diária.
9. **Reuso de Projetos e Especificação:** Quanto mais alto o nível (especificação ou projeto ao invés de só o código), **maior é o ganho e o retorno**, pois reusar um projeto implica automaticamente em reusar todo o código gerado a partir dele (Ex: Design Patterns / Padrões de Projeto). 
		- Exemplo, um sistema de gerenciamento de clinicas, onde para veterinária temos cliente como animais com espécies diferentes e em um hospital teríamos humanos diferentes. Ou seja teríamos uma especificação do projeto.

---

## ⚠️ Desafios e Problemas na Adoção do Reuso

Apesar de maravilhoso na teoria, implementar o reuso sistemático é muito difícil por alguns motivos:

- **Mudança Cultural e Psicológica:** Requer mudar a mentalidade da equipe. Há resistência (falta de incentivo, falta de apoio da gestão) e o clássico problema psicológico onde **"engenheiros preferem reescrever tudo do zero do que reutilizar o código dos outros"**.
- **Dificuldade de Compreensão:** Códigos antigos mal documentados são difíceis de reciclar.
- **Repositórios Imaturos:** Manter, catalogar e pesquisar componentes adequados é caro e complexo devido à falta de padronização.
- **Falta de Suporte de Ferramentas:** A maioria das ferramentas CASE clássicas não se integram bem a bibliotecas de componentes.
- **Interações Inesperadas:** Um componente que funciona perfeitamente isolado pode causar erros "surpresa" ao interagir com o seu código novo. A integração **deve ser testada exaustivamente**.

---

## 📐 Granularidade vs. Abstração (O Dilema do Reuso)

Ao projetar para reuso, existem dois fatores de forte tensão:

1. **Granularidade (Tamanho do componente):**
   - *Componentes Maiores:* Trazem maior redução de custos (já resolvem muita coisa de uma vez), mas são difíceis de encaixar em novos contextos.
   - *Componentes Menores:* São fáceis de reutilizar (alto encapsulamento), mas o ganho financeiro de tempo é menor.
   - *Desafio:* Encontrar o equilíbrio perfeito de tamanho.

2. **Nível de Abstração:**
   - Código tem **baixo nível** de abstração (fácil de reusar pontualmente, mas menor ganho global).
   - Requisitos têm **alto nível** de abstração (reusar um requisito inteiro tem um custo inicial maior de modelagem, mas o ganho final para a empresa é imenso).

---

## 📌 Síntese Final

> 1. O **Reuso de Software** visa acabar com a reinvenção da roda, aumentando a produtividade, reduzindo custos e aumentando a qualidade por usar partes já testadas.
> 2. O processo muda em relação ao Cascata tradicional: aqui você levanta requisitos básicos, **pesquisa o que tem pronto no mercado** e **ajusta seus requisitos** para caber naquilo que foi encontrado.
> 3. O maior ganho não está em reusar apenas linhas de código, mas sim **projetos e especificações inteiras**.
> 4. As maiores barreiras para o reuso não são técnicas, mas **culturais, organizacionais e psicológicas** (desenvolvedores que preferem fazer do zero, má documentação, falta de apoio gerencial).
> 5. A prática mais moderna envolve **Caixa Preta** (onde se interage com APIs e microsserviços sem precisar ler o código interno de quem os criou).