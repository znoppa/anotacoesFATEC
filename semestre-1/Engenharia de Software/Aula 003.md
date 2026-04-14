09/03/2008

# 📘 Resumo Completo – Aula 4: Desenvolvimento Incremental

**Disciplina:** Engenharia de Software e Aplicações – Fatec Arthur de Azevedo

---

## 1. Revisão do Modelo em Cascata

Antes de entrar no modelo incremental, o professor fez uma revisão do modelo em cascata para servir de base de comparação.

**Vantagens:**
- **Documentação rígida** em cada fase do processo, o que facilita rastreabilidade e auditoria
- **Aderência a outros modelos** – pode ser combinado com outros processos de software

**Desvantagens:**
- Projetos reais **raramente seguem um fluxo sequencial** puro; na prática, sempre há idas e vindas
- É **difícil para o cliente definir todos os requisitos logo no início** – muitas vezes o cliente só entende o que quer quando vê algo funcionando
- **Difícil adequação a mudanças** de requisitos ao longo do projeto
- Uma **versão executável só fica pronta no final** de todo o processo, o que significa que o cliente pode esperar meses (ou anos) sem ver nada rodando

---

## 2. O que é Desenvolvimento Incremental?

O desenvolvimento incremental (também chamado de **evolucionário** por alguns autores) é baseado em uma ideia simples:

> Desenvolver uma **implementação inicial**, obter **feedback** dos usuários e fazer o software **evoluir através de várias versões**, até alcançar o sistema ideal.

	As atividades de **especificação, desenvolvimento e validação** acontecem de forma **intercalada** (concorrente), e não separada como no cascata. Isso permite um retorno rápido para o cliente a cada ciclo. - Ao invés de ser divididas por etapas
	
-> especificação, desenvolvimento e validação

Essa abordagem ==é atualmente a **mais comum** para desenvolvimento de aplicações e produtos de software==, e pode ser:

- **Dirigida por plano:** os incrementos são identificados e planejados antecipadamente
- **Ágil:** os incrementos iniciais são definidos, mas os posteriores dependem do progresso e da prioridade do cliente
- Na maioria dos casos, é uma **mistura das duas**
![[Desenvolvimento Incremental, exemplo.png]]


### Analogia com a vida real

O desenvolvimento incremental reflete a maneira como resolvemos problemas no dia a dia: **raramente elaboramos uma solução completa de antemão**. Em vez disso, caminhamos em uma série de passos, retrocedendo quando erramos e ajustando o rumo.

---

## 3. Os Dois Tipos de Desenvolvimento Evolucionário

### 3.1 Desenvolvimento Exploratório

Trabalha **diretamente com o cliente** para explorar seus requisitos e entregar um sistema final. É uma abordagem que privilegia **aprendizado, experimentação rápida e adaptação**, especialmente em contextos de incerteza.

**Objetivo:** ==Reduzir incerteza técnica e de produto por meio de experimentos, aprendizado contínuo e ajustes iterativos.==

**Características:**
- **Aprendizado contínuo** – cada iteração revela hipóteses que ainda não foram confirmadas
- **Pesquisa guiada por experimentos** – hipóteses são testadas com experimentos bem delimitados
- **Adaptativo** – planos podem mudar com base nos resultados obtidos
- **Foco em riscos críticos** – prioriza as maiores incertezas que podem comprometer o projeto

**Diferença para o desenvolvimento tradicional:** o caminho não é linear; o objetivo principal é **aprender**, mais do que entregar um produto estável desde o início.

**Quando usar:**
- Alta incerteza de requisitos ou tecnologia - por exemplo, qual a linguagem que irá ser melhor para desenvolver (TCC), as vezes no meio do caminho voce percebe que talvez C# pode ser uma melhor opção do que HTML

- Projetos de inovação ou com novas plataformas onde pouco se sabe sobre viabilidade
- Alto risco técnico ou de negócio que exige validação precoce
- Equipes ágeis que precisam de feedback rápido para redirecionar esforços

> **Exemplo:** Uma startup que quer criar um app de saúde com IA, mas não sabe ao certo quais funcionalidades os usuários realmente usariam. Ela desenvolve versões exploratórias, testa com um grupo de usuários, aprende com o uso real e vai moldando o produto.

---

### 3.2 Prototipação Throwaway (Descartável)

O objetivo é criar um **protótipo rápido e barato** para compreender melhor requisitos que foram mal entendidos. Esse protótipo **será descartado** após cumprir seu papel — ele **não vai para produção**.
- Validar ideias, requisitos e conceitos rapidamente sem investir tempo ou recursos em um protótipo final
	- Não iremos usar, vamos somente dar uma passada para adquirir o conhecimento e validar as ideias.

**Características:**
- **Rápida de criar** – foco no aprendizado, não na perfeição
- **Barata** – usa técnicas simples, materiais comuns ou código mínimo
- **Temporária** – será descartada após extrair insights
- **Não ambígua** – deve ser claramente distinguível de algo "para produção", evitando que alguém queira aproveitar o código do protótipo no produto final

**Quando usar:**
- Novas ideias de produto ou características incertas - é uma boa usarmos este protótipo para identificar quais vão ser as características principais
- Necessidade de testar usabilidade, fluxo de trabalho ou viabilidade técnica sem compromisso com a implementação final 
- Quando o objetivo é alinhar stakeholders sobre direções possíveis

**Tipos de protótipo:**

| Tipo                                              | Uso                                                                                           |
| ------------------------------------------------- | --------------------------------------------------------------------------------------------- |
| **Protótipo de papel / lo-fi** (Baixa Fidelidade) | Fluxos de interação, rascunhos de interface, testes de usabilidade rápidos                    |
| **Código mínimo**                                 | Trechos de código que simulam o comportamento essencial (conceito de MVP de baixa fidelidade) |
| **Ferramentas rápidas** (Figma, Balsamiq, Marvel) | Interfaces interativas sem código real                                                        |
| **Provas de conceito (PoC)**                      | Validar se uma abordagem tecnológica é viável, sem construir o produto final                  |

> **Exemplo:** Uma equipe precisa decidir se usa reconhecimento facial ou biometria digital para autenticação. Cria uma PoC rápida com cada tecnologia, testa a viabilidade e descarta o código. A decisão é tomada com base no que aprendeu, e a implementação real é feita do zero com qualidade de produção.

---

## 4. Vantagens do Desenvolvimento Incremental (em relação ao Cascata)

O Sommerville destaca **três grandes vantagens**:

Desenvolvimento de forma incremental (1° Encontro ----> Implementação)
A cada entrega agregamos um valor ao nosso produto.


1. ==**Custo reduzido para mudanças de requisitos**==
   - Como o software é feito em partes pequenas, a quantidade de análise e documentação que precisa ser refeita é **significativamente menor** do que no cascata
   - Se um requisito muda, você ajusta o incremento atual ou planeja para o próximo, sem refazer tudo

1. ==**Feedback mais fácil e frequente do cliente**==
   - O cliente vê o **software funcionando** e pode comentar, em vez de tentar avaliar o projeto por meio de documentos técnicos
   - É muito mais fácil para um cliente dizer "isso não é o que eu quero" olhando uma tela rodando do que lendo um documento de especificação

1. ==**Entrega antecipada de software útil**==
   - Mesmo sem toda a funcionalidade pronta, o cliente já pode **usar e obter valor** do software mais cedo
   - Os incrementos iniciais geralmente incluem a funcionalidade **mais importante ou mais urgente**

**Observação importante:** adotar desenvolvimento incremental **não significa necessariamente entregar cada incremento ao cliente**. É possível desenvolver incrementalmente e expor o sistema aos comentários dos clientes sem implantá-lo no ambiente de produção.

---

## 5. Desvantagens e Problemas

### Do ponto de vista da gestão:

Se você não se atentar a documentação o resultado é você acabar corrompendo a estrutura do software e não visualizar a evolução dele.

1. ==**O processo não é visível**==
   - Gerentes precisam de resultados regulares para medir progresso
   - Se o sistema evolui rapidamente, não é econômico produzir documentação completa de cada versão
   - Isso gera dificuldade na gerência da documentação do projeto
   - Como você cobra por algo que você não sabe quanto tempo vai levar?

1. ==**Degradação da estrutura do software**==
   - À medida que novos incrementos são adicionados, mudanças regulares tendem a deixar o código **bagunçado** - e você não documenta...
   - Novas funcionalidades são adicionadas "de qualquer maneira possível", tornando cada vez **mais caro e difícil** adicionar novas características
   - **Solução dos métodos ágeis:** refatorar (melhorar e reestruturar) o software **regularmente**

### Em sistemas grandes e complexos:

- Os problemas se tornam ==**particularmente críticos**== em sistemas grandes, complexos e de vida longa, onde **diferentes times** desenvolvem partes distintas

- Esses sistemas precisam de um **framework ou arquitetura estável** planejada **antecipadamente**, e não desenvolvida de modo incremental

- As responsabilidades de cada time precisam ser **claramente definidas** em relação a essa arquitetura

### Em grandes organizações:

- Organizações grandes têm **procedimentos burocráticos** que evoluíram ao longo do tempo
- Pode haver incompatibilidade entre esses procedimentos e um processo iterativo/ágil mais informal
- Alguns procedimentos existem por boas razões (ex.: garantir conformidade com **regulamentações externas** como normas contábeis ou tributárias)
- Como nem sempre é possível mudar esses procedimentos, **conflitos de processo podem ser inevitáveis**

---

## 6. Exemplos Práticos de Aplicação

- **Web app:** entregar um módulo de autenticação básico (login/logout) como o primeiro incremento, seguido por perfil de usuário, e depois por funcionalidades de pagamento. 

- **Microserviços**: lançar um serviço essencial (por exemplo, catálogo) e, nas semanas seguintes, adicionar serviços de pagamento, carrinho e recomendações, cada um como incrementos independentes que se integram. 

- **Aplicativo mobile:** disponibilizar principalmente a funcionalidade core primeiro (por exemplo, feed) e ir adicionando notificações, offline, e integrações com API externa nos incrementos subsequentes

| Contexto          | Incrementos                                                                                                                    |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------ |
| **Web app**       | 1º: autenticação (login/logout) → 2º: perfil de usuário → 3º: funcionalidades de pagamento                                     |
| **Microserviços** | 1º: catálogo de produtos → 2º: pagamento → 3º: carrinho → 4º: recomendações (cada um como serviço independente que se integra) |
| **App mobile**    | 1º: funcionalidade core (ex.: feed) → 2º: notificações → 3º: modo offline → 4º: integrações com APIs externas                  |

---

## 7. Como Aplicar em um Projeto

1. **Definir o escopo mínimo viável** para o primeiro incremento, que entregue valor observável ao cliente
2. **Estabelecer critérios de término** de cada incremento (refinamento de requisitos, cobertura de testes, métricas de uso)
3. **Adotar CI/CD**, testes automatizados e revisões de código para sustentar integração contínua
4. **Planejar a arquitetura para evoluir**: modularidade, APIs estáveis, contratos de interface bem definidos
5. **Medir o progresso** com métricas de aprendizado e valor entregue (ex.: tempo de espera do usuário, tempo de detecção e correção de bugs, taxa de cobertura de testes)

![[incremento de funcionalidades.png]]
---

## 8. Quadro Comparativo Final

| Aspecto | Cascata | Incremental |
|---|---|---|
| **Fluxo** | Sequencial e linear | Iterativo e intercalado |
| **Requisitos** | Definidos todos no início | Evoluem ao longo do processo |
| **Feedback do cliente** | Só no final | Frequente, a cada incremento |
| **Documentação** | Rígida e completa | Mais leve, pode ser difícil de manter |
| **Entrega de software** | Só ao final do projeto | Antecipada e gradual |
| **Custo de mudanças** | Alto | Reduzido |
| **Visibilidade gerencial** | Alta (documentos formais) | Baixa (evolução rápida) |
| **Risco de degradação do código** | Menor (estrutura definida de uma vez) | Maior (precisa de refatoração constante) |
- Micro Serviços: Usar ferramentas e prover um serviço pequeno não a versão completa do produto por exemplo. 
---

# 🧪 Exercício 1 — Web App (Sistema com Autenticação)

## 📌 Cenário

Uma empresa quer desenvolver um **web app de gerenciamento de usuários e pagamentos**.

Utilizando o **desenvolvimento incremental**, organize a construção do sistema em versões.

---

## 🔹 Incremento 1 — Autenticação básica

Primeiro é desenvolvido o núcleo do sistema.

Funcionalidades:

- Cadastro de usuário
    
- Login
    
- Logout
    
- Validação de senha
    
- Sessão do usuário
    

Objetivo:

Permitir que usuários **entrem no sistema de forma segura**.

Benefício:

Já é possível **testar controle de acesso** e estrutura básica do sistema.

---

## 🔹 Incremento 2 — Perfil do usuário

Novas funcionalidades adicionadas:

- Visualizar perfil
    
- Editar dados pessoais
    
- Alterar senha
    
- Upload de foto
    

Objetivo:

Permitir que o usuário **gerencie suas próprias informações**.

Validação:

Usuários podem testar se o sistema **armazena e atualiza dados corretamente**.

---

## 🔹 Incremento 3 — Sistema de pagamento

Agora o sistema ganha funcionalidades mais complexas.

Funcionalidades:

- Adicionar método de pagamento
    
- Processar pagamento
    
- Histórico de pagamentos
    
- Integração com API de pagamento
    

Objetivo:

Transformar o sistema em **uma plataforma funcional de transações**.

---

# 🧪 Exercício 2 — Arquitetura de Microserviços

## 📌 Cenário

Uma empresa quer construir uma **plataforma de e-commerce baseada em microserviços**.

Cada serviço será desenvolvido como um **incremento independente**.

---

## 🔹 Incremento 1 — Serviço de catálogo

Primeiro serviço desenvolvido:

Funcionalidades:

- Listar produtos
    
- Buscar produtos
    
- Visualizar detalhes do produto
    
- API de catálogo
    

Objetivo:

Permitir que o sistema **exiba produtos para os usuários**.

Mesmo sem compras ainda, já é possível **testar o sistema**.

---

## 🔹 Incremento 2 — Serviço de carrinho

Novo serviço integrado ao catálogo.

Funcionalidades:

- Adicionar produto ao carrinho
    
- Remover produto
    
- Atualizar quantidade
    
- Visualizar carrinho
    

Objetivo:

Permitir que usuários **selecionem produtos para compra**.

---

## 🔹 Incremento 3 — Serviço de pagamento

Agora o sistema permite finalizar compras.

Funcionalidades:

- Checkout
    
- Integração com gateway de pagamento
    
- Confirmação de pagamento
    
- Registro de transação
    

Objetivo:

Completar o fluxo de **compra do cliente**.

---

## 🔹 Incremento 4 — Serviço de recomendações

Incremento focado em **melhorar a experiência do usuário**.

Funcionalidades:

- Sugestão de produtos
    
- Histórico de compras
    
- Produtos relacionados
    

Objetivo:

Aumentar engajamento e vendas.

---

# 🧪 Exercício 3 — Aplicativo Mobile

## 📌 Cenário

Uma empresa quer criar um **app de rede social**.

O desenvolvimento será incremental.

---

## 🔹 Incremento 1 — Feed principal

Primeira versão do app.

Funcionalidades:

- Visualizar feed
    
- Curtir postagens
    
- Atualizar feed
    

Objetivo:

Entregar a **funcionalidade principal do aplicativo**.

---

## 🔹 Incremento 2 — Notificações

Novas funcionalidades:

- Notificações de curtidas
    
- Notificações de comentários
    
- Push notifications
    

Objetivo:

Melhorar a **interação entre usuários**.

---

## 🔹 Incremento 3 — Modo offline

Agora o aplicativo ganha melhorias técnicas.

Funcionalidades:

- Cache de posts
    
- Visualização offline
    
- Sincronização automática
    

Objetivo:

Permitir uso do app **mesmo sem internet**.

---

## 🔹 Incremento 4 — Integrações externas

Funcionalidades adicionadas:

- Login com Google
    
- Compartilhamento em redes sociais
    
- Integração com APIs externas
    

Objetivo:

Expandir as funcionalidades do app.

---

# 📌 Conclusão do Exercício

Esses exemplos mostram que no **desenvolvimento incremental**:

- o sistema cresce **versão por versão**
    
- cada incremento adiciona **novas funcionalidades**
    
- o cliente pode **avaliar o sistema cedo**
    
- mudanças podem ser feitas **durante o desenvolvimento**
    

Isso torna o desenvolvimento **mais flexível e menos arriscado**.

---

✅ Se quiser, posso também montar um **exercício mais estilo prova da FATEC**, tipo:

- “Identifique os incrementos de um sistema de biblioteca”
    
- ou
    
- “Transforme um sistema cascata em incremental”
    

Esse tipo de questão **cai muito em Engenharia de Software.**