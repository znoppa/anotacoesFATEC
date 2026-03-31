30/03/2026
# 📖 Dossiê Completo – Aula 6: Desenvolvimento Ágil de Software

**Disciplina:** Engenharia de Software e Aplicações
**Instituição:** Fatec Arthur de Azevedo
**Professor:** Esp. Maurício das Neves
**Data:** 30/03/2026
**Horário:** Segunda-Feira, 19:00 às 22:30

---

## 🎯 1. Objetivos da Aula


- A **lógica do desenvolvimento ágil**, o **Manifesto Ágil** e as diferenças entre ágil e dirigido por plano
- As **práticas importantes** do ágil: Histórias do Usuário, Refatoração, Programação em Pares e Desenvolvimento com Testes a Priori (*test-first*)
- A abordagem **Scrum** e o **gerenciamento ágil de projetos**
- As questões de **escalabilidade** dos métodos ágeis e a **combinação** de abordagens ágeis com dirigidas por plano em grandes sistemas

---

## 🌍 2. Por Que o Ágil Surgiu? O Contexto do Mundo Real

### O Problema do Ambiente Dinâmico
As empresas operam em um **ambiente global em rápida mudança**, precisando responder a:
- Novas oportunidades e mercados
- Mudanças nas condições econômicas
- Surgimento de produtos e serviços concorrentes

Como o software é parte de **quase todas as operações de negócio**, ele precisa ser desenvolvido **rapidamente**. Tão rapidamente que as empresas **estão dispostas a negociar qualidade e comprometer requisitos** se puderem lançar um produto mais rápido.

### O Problema dos Requisitos
Em ambientes dinâmicos, é **praticamente impossível derivar um conjunto completo de requisitos estáveis**, porque:
- Os clientes não conseguem prever como o sistema afetará suas práticas de trabalho
- Não sabem como o sistema irá interagir com outros sistemas
- Não sabem quais operações devem ser automatizadas
- **Os verdadeiros requisitos só ficam claros DEPOIS que o usuário tem contato com o sistema em uso**

### O Fracasso do Modelo Cascata nesse Cenário
O modelo Cascata (dirigido por plano) não funciona bem para esse ambiente porque:
- Quando os requisitos mudam, o projeto ou a implementação precisam ser **retrabalhados e testados novamente**
- Isso gera **atrasos enormes**
- Quando o software finalmente fica pronto, o motivo original de sua criação pode ter mudado tão radicalmente que ele se torna **INÚTIL**

> 💡 **Exceção:** Para sistemas críticos de segurança (controle aeronáutico, sistemas militares), a abordagem dirigida por plano continua sendo a mais indicada, pois exige análise completa do sistema.

---

## 📜 3. A História dos Métodos Ágeis

### Anos 1980 e início dos 1990
- Predominava a crença de que software melhor viria do **planejamento cuidadoso**, **garantia de qualidade formalizada** e **processos rigorosos e controlados**
- Essa crença vinha da comunidade que desenvolvia **grandes sistemas duradouros** (aeroespacial, governamental)
- Exemplos: Sistemas de controle de aeronaves que levavam **até 10 anos** para serem desenvolvidos

### O Problema com Essa Abordagem em Sistemas Menores
Quando processos pesados (dirigidos por plano) foram aplicados a sistemas de negócio de **pequeno ou médio porte**:
- A **sobrecarga de planejamento e documentação dominava** o processo
- Mais tempo era investido em decidir **como** desenvolver do que em programar ou testar
- A insatisfação generalizada levou ao nascimento dos métodos ágeis

### Final dos Anos 1990: O Nascimento do Ágil
Os principais métodos ágeis que surgiram:
- **XP (Extreme Programming)** — criado por Kent Beck
- **Scrum**
- **DSM (Dynamic Systems Development Method)**

---

## 📋 4. O Manifesto Ágil

Criado em *http://agilemanifesto.org* pelos principais desenvolvedores desses métodos. O texto diz:

> *"Estamos descobrindo maneiras melhores de desenvolver software, fazendo-o nós mesmos e ajudando outros a fazerem o mesmo. Através deste trabalho passamos a valorizar:"*

| ✅ Valorizamos MAIS (Esquerda) | ⚖️ Tem valor, mas valorizamos MENOS (Direita) |
|:---|:---|
| **Indivíduos e interações** | ~~Processos e ferramentas~~ |
| **Software em funcionamento** | ~~Documentação abrangente~~ |
| **Colaboração com o cliente** | ~~Negociação de contratos~~ |
| **Responder a mudanças** | ~~Seguir um plano~~ |

> ⚠️ **Importante:** O manifesto não diz que os itens da direita não têm valor. Ele diz que os da esquerda são **mais** valorizados.

---

## ⚡ 5. Características Compartilhadas por TODOS os Métodos Ágeis

1. **Especificação, projeto e implementação são intercalados** — não há especificação detalhada antes de começar. A documentação é minimizada ou gerada automaticamente.
2. **Desenvolvimento incremental** — O sistema é desenvolvido em pequenos incrementos. Usuários finais estão envolvidos na especificação e avaliação de cada um. Novas versões a cada **2 ou 3 semanas**.
3. **Apoio amplo de ferramentas** — Ferramentas de teste automatizado, gerenciamento de configuração, integração de sistemas e automação de interfaces.
4. **Comunicação informal** — Em vez de reuniões formais com documentos escritos, prefere-se a comunicação direta e rápida entre os membros do time.

---

## 🆚 6. Ágil vs. Dirigido por Plano — As Diferenças Fundamentais

O slide 8 apresenta uma figura comparando as duas abordagens. Veja a representação visual adaptada:

```text
╔══════════════════════════════════════════════════════════════════════╗
║             ABORDAGEM DIRIGIDA POR PLANO (EX: CASCATA)              ║
╠══════════════════════════════════════════════════════════════════════╣
║                                                                      ║
║  [Requisitos] ──doc──► [Projeto] ──doc──► [Implementação] ──doc──►  ║
║                                                                      ║
║  • A iteração ocorre DENTRO de cada atividade                        ║
║  • Documentos formais são o meio de comunicação ENTRE as etapas      ║
║  • As atividades são bem separadas e sequenciais                     ║
╚══════════════════════════════════════════════════════════════════════╝

╔══════════════════════════════════════════════════════════════════════╗
║                    ABORDAGEM ÁGIL                                    ║
╠══════════════════════════════════════════════════════════════════════╣
║                                                                      ║
║  [Requisitos]                                                        ║
║       ↕  ↖──────────────────────────────────┐                       ║
║  [Projeto/Design] ←──────────────────────── │                       ║
║       ↕                                     │                       ║
║  [Implementação] ──── feedback continuo ────┘                       ║
║                                                                      ║
║  • A iteração ocorre AO LONGO de TODAS as atividades                 ║
║  • Requisitos e design são desenvolvidos JUNTOS, não separados       ║
║  • Comunicação direta substitui documentos formais                   ║
╚══════════════════════════════════════════════════════════════════════╝
```

### ⚠️ Atenção: O Ágil não é "só código"
> Na prática, processos dirigidos por plano usam práticas ágeis, e métodos ágeis podem produzir documentação. Os desenvolvedores ágeis **podem decidir que uma iteração não produzirá código novo, mas sim modelos e documentação de sistema**.

---

## 🎯 7. Onde os Métodos Ágeis São Mais Eficazes

Os métodos ágeis funcionam especialmente bem em dois cenários:

1. **Produto pequeno ou médio** desenvolvido por uma empresa de software para venda. *Praticamente todos os aplicativos e produtos de software atuais usam abordagem ágil.*
2. **Sistemas personalizados** dentro de uma organização, onde:
   - Há comprometimento claro do cliente em se envolver no processo
   - Há poucos stakeholders externos
   - Há poucas normas regulatórias que afetam o software

### Por que funciona nesses casos?
- **Comunicação contínua** entre cliente/gerente de produto e time de desenvolvimento
- O software é um sistema **stand-alone** (não precisa se integrar com outros sistemas em desenvolvimento paralelo)
- **Times pequenos no mesmo local** — a comunicação informal funciona bem

---

## 🔥 8. Programação Extrema (XP) — A Abordagem Mais Importante

### O que é?
Criada por **Kent Beck** no final dos anos 1990. O nome vem da ideia de levar boas práticas de desenvolvimento a níveis **"extremos"**. Exemplo prático: várias versões novas de um sistema podem ser **desenvolvidas, integradas e testadas em um único dia** por diferentes programadores.

### O Ciclo de Lançamento da XP (Slide 21)

```text
        ┌──────────────────────────────────────────┐
        │                                          │
        ▼                                          │
 ┌──────────────────────────┐                      │
 │  Selecionar as histórias │                      │
 │  do usuário para o       │                      │
 │  lançamento              │                      │
 └────────────┬─────────────┘                      │
              ▼                                    │
 ┌──────────────────────────┐                      │
 │  Decompor as histórias   │                      │
 │  em tarefas              │                      │
 └────────────┬─────────────┘                      │
              ▼                                    │
 ┌──────────────────────────┐                      │
 │  Planejar o lançamento   │                      │
 └────────────┬─────────────┘                      │
              ▼                                    │
 ┌──────────────────────────┐                      │
 │  Desenvolver / Integrar  │                      │
 │  / Testar o software     │                      │
 └────────────┬─────────────┘                      │
              ▼                                    │
 ┌──────────────────────────┐                      │
 │  Lançar a versão do      │                      │
 │  software                │                      │
 └────────────┬─────────────┘                      │
              ▼                                    │
 ┌──────────────────────────┐                      │
 │  Avaliar o sistema       │──────────────────────┘
 └──────────────────────────┘
         (Feedback e novo ciclo)
```

---

## 📋 9. As 10 Práticas da Programação Extrema (Tabela Completa dos Slides 25 e 26)

| Prática | Descrição Completa |
|:---|:---|
| **Propriedade Coletiva** | Os pares de desenvolvedores trabalham em TODAS as áreas do sistema. Não se criam "ilhas de conhecimento". Qualquer desenvolvedor pode alterar qualquer parte do código. |
| **Integração Contínua** | Assim que uma tarefa é concluída, ela é integrada ao sistema completo. Após cada integração, **TODOS os testes de unidade devem passar**. |
| **Planejamento Incremental** | Os requisitos são registrados em **cartões de história**. As histórias a incluir em um lançamento são determinadas pelo **tempo disponível e prioridade**. Desenvolvedores decompõem histórias em tarefas. |
| **Representante do Cliente** | Um representante do usuário final deve estar **disponível em tempo integral** junto ao time. Ele é membro ativo do time, responsável por levar os requisitos para implementação. |
| **Programação em Pares** | Desenvolvedores trabalham em duplas, conferindo o trabalho um do outro e oferecendo suporte mútuo. |
| **Refatoração** | Todo desenvolvedor deve **refatorar continuamente** o código ao encontrar possíveis melhorias, mantendo o código simples e de fácil manutenção. |
| **Projeto Simples** | Deve-se fazer apenas o **suficiente de design** para satisfazer os requisitos atuais, sem antecipar desnecessariamente mudanças futuras. |
| **Lançamentos Pequenos** | O mínimo de funcionalidade útil que **agrega valor ao negócio** é desenvolvido primeiro. Os lançamentos são frequentes e acrescentam funcionalidade incrementalmente. |
| **Ritmo Sustentável** | Grandes quantidades de horas extras **não são aceitáveis**, pois diminuem a qualidade do código e a produtividade no médio prazo. |
| **Desenvolvimento com Testes a Priori (test-first)** | Um framework automatizado de testes de unidade é utilizado para **escrever os testes ANTES** de implementar a funcionalidade. |

> ⚠️ **Nota do Professor (Slide 26):** *"Não estou convencido de que a Programação Extrema seja um método ágil prático para a maioria das empresas, mas sua contribuição mais importante é, provavelmente, o conjunto de práticas de desenvolvimento ágil que introduziu na comunidade."*

---

## 📝 10. Histórias do Usuário — Detalhamento Completo

### O que são?
Como os métodos ágeis não têm uma atividade de engenharia de requisitos separada, a elicitação é **integrada ao desenvolvimento**. Para facilitar isso, surgem as **histórias do usuário**: cenários de uso baseados nas **experiências reais dos usuários do sistema**.

### Como funcionam?
1. O cliente trabalha em **estreita colaboração** com o time
2. Juntos, desenvolvem um **cartão de história** com um resumo das necessidades
3. O time de desenvolvimento se compromete a implementar esse cenário em uma versão futura

### Exemplo Real do Material (Sistema Mentcare — Prescrição de Medicação)

> **Situação:** Kate é uma médica que deseja prescrever medicação para um paciente.

```text
CARTÃO DE HISTÓRIA: Prescrição de Medicação
════════════════════════════════════════════════════

1. Kate acessa o registro do paciente já exibido no computador.
2. Ela clica no campo <Medicação>.
3. O sistema oferece três opções:

   [A] <Medicação Atual>
       → O sistema pede para verificar/alterar a dose
       → Kate fornece nova dose e CONFIRMA a prescrição

   [B] <Nova Medicação>
       → Kate digita as primeiras letras do medicamento
       → O sistema exibe lista de possíveis medicamentos
       → Kate seleciona, confirma se está correto
       → Fornece a dose e CONFIRMA a prescrição

   [C] <Substâncias>
       → O sistema exibe caixa de busca por substância aprovada
       → Kate pesquisa, confirma o medicamento selecionado
       → Fornece a dose e CONFIRMA a prescrição

4. Em TODOS os casos:
   → O sistema SEMPRE verifica se a dose está dentro da faixa aprovada
   → Se fora da faixa: mensagem de erro pedindo alteração
   → Após confirmar: a prescrição é exibida para conferência final
   → Kate clica em [OK] → Registrado no banco de auditoria
   → Kate clica em [Alterar] → O processo recomeça do início
```

### Cartões de Tarefa Derivados da História (Slide 31)

A história é decomposta em tarefas menores pelo time:

| Tarefa | Descrição |
|:---|:---|
| **Tarefa 1** | Mudar a dose do medicamento prescrito |
| **Tarefa 2** | Seleção de Substância |
| **Tarefa 3 — Verificação de Dose** | Usando o ID da substância, buscar dose máxima e mínima recomendadas → Comparar com a dose prescrita → Se fora da faixa: emitir mensagem de erro (alta ou baixa demais) → Se dentro da faixa: habilitar botão `<Confirmar>` |

### Como as Histórias se Encaixam no Processo?
1. O **cliente prioriza** as histórias mais urgentes/importantes
2. A intenção é identificar funcionalidades implementáveis em **aproximadamente 2 semanas**
3. Histórias não implementadas **mudam ou são descartadas** quando os requisitos mudam
4. Após entrega, se forem necessárias alterações, **novos cartões de história** são criados
5. Numa **reunião de planejamento de sprint**, o time decide quais histórias entram no próximo sprint

### ✅ Vantagens das Histórias do Usuário
- Usuários **se identificam muito mais** com elas do que com documentos formais de requisitos
- Facilitam o **envolvimento ativo dos usuários** na elicitação
- São claras, objetivas e voltadas para a **experiência real**

### ❌ Desvantagens das Histórias do Usuário
- **Problema de completude:** É difícil saber se foram criadas histórias suficientes para cobrir **todos os requisitos essenciais**
- Uma única história pode não proporcionar uma **imagem completa** de uma atividade
- Usuários experientes frequentemente **deixam de lado informações** por acharem óbvias — o que pode gerar lacunas nos requisitos

---

## 📌 11. Síntese Final — O Que Levar desta Aula

Zimmermann, aqui está o mapa mental do que é mais importante:

> 1. Os **métodos ágeis** nasceram da insatisfação com processos pesados aplicados a sistemas onde os requisitos mudam rapidamente
> 2. O **Manifesto Ágil** resume a filosofia: pessoas acima de processos, software funcionando acima de documentação, cliente acima de contrato, mudança acima de plano rígido
> 3. A **XP (Extreme Programming)** foi o método mais revolucionário, introduzindo práticas como: testes antes do código, programação em pares, lançamentos pequenos e frequentes
> 4. As **histórias do usuário** substituem documentos formais de requisitos, sendo cenários escritos em linguagem natural, decompostos em tarefas
> 5. O ágil **não é o oposto** do dirigido por plano — na prática, **as abordagens se combinam** dependendo do projeto
> 6. Métodos ágeis funcionam melhor em times **pequenos, no mesmo local, com cliente presente e requisitos voláteis**

---
