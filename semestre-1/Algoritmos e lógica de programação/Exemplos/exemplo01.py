print("Vamo calcular a média de 3 valores, IHUL")

# Para definirmos o tipo de uma váriavel digitamos o seu nome e caso ela vá receber um valor através de um input
# definimos o seu tipo e dentro inserimos o input (Entrada de Dados via Teclado), porém todos as entrada via teclado o python vai ler obrigatóriamente como texto
# então definimos como tipo(input()) - float(input()), dessa forma transformamos a leitura da variável em outro tipo.

x = float(input("Digite o primeiro valor: "))
y = float(input("Digite o segundo valor: "))
z = float(input("Digite o terceiro valor: "))

# Não atribuimos tipo a variável media pois todos os outros já são floats
media = (x + y + z)/3 

# O "f" funciona como um indicador de que variáveis podem ser colocadas dentro da string entre chaves{}
print(f"A média de valores é: {media:.2f}")
# O {media:.2f} - quer dizer que a média via ser apresentada em REAl, com apenas duas casas decimais.
