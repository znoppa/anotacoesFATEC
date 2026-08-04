---
tipo: guia
aliases:
  - Como usar a vault
cssclasses:
  - moc
tags:
  - organização/guia
---

# Guia do Cofre

## Encontrar informação rápido

- `Ctrl/Cmd + O`: abra qualquer nota pelo título, caminho ou alias.
- `Ctrl/Cmd + Shift + F`: pesquise texto em todo o cofre.
- `Ctrl/Cmd + P`: abra a paleta de comandos.
- Abra [[01 - Painel/Notas do Primeiro Semestre.base|Notas do Primeiro Semestre]] ou [[01 - Painel/Notas do Segundo Semestre.base|Notas do Segundo Semestre]] para filtrar propriedades.
- Use backlinks e links de saída na lateral para seguir relações.

## Criar uma aula

1. Crie a nota dentro da pasta da disciplina.
2. Insira o [[99 - Templates/Template - Aula|Template - Aula]].
3. Preencha as propriedades e substitua os campos indicados.
4. Adicione a aula ao mapa da disciplina.
5. Conecte conceitos já existentes com `[[links internos]]`.

## Estados das notas

| Estado | Quando usar |
|---|---|
| `rascunho` | Nota vazia, curta ou aguardando materiais |
| `em-revisao` | Conteúdo útil que ainda precisa ser conferido |
| `revisado` | Conteúdo checado e pronto para estudo |

A propriedade `revisao` é uma caixa de seleção separada. Marque-a apenas após conferir conceitos, exemplos, links e ortografia.

## Boas práticas

- Um título principal (`#`) por nota.
- Seções curtas, tabelas apenas para comparação e blocos de código com linguagem declarada.
- Links descritivos: `[[caminho/nota|texto que será exibido]]`.
- Materiais brutos ficam na pasta `Materiais` de cada disciplina; imagens compartilhadas ficam na pasta `Imagens` do respectivo semestre.
- Código-fonte é versionado; executáveis e builds locais não são.

## Revisão antes de enviar ao GitHub

- [ ] A nota abre pelo mapa da disciplina.
- [ ] Não há embeds ou links quebrados.
- [ ] Data, aula, disciplina e status estão preenchidos.
- [ ] A anotação não contém introduções de chatbot ou instruções fora da matéria.
- [ ] O conteúdo novo se conecta a pelo menos uma nota existente quando houver relação.
