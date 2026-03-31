#include <stdio.h>
int main() {
    int num, menor, maior;

    printf("Insira 10 numeros e verificaremos qual o menor e maior. \n");

    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

                    // Ele adiciona somente o primeiro numero digitado
        if (i==1) { // nas duas variaveis para comparação, melhor que deixar o menor com um valor gigante e o maior com 0
            menor = num;
            maior = num;
        };

        if (num < menor) {
            menor = num;
        }
        if (num > maior) {
            maior = num;
        }
    }
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);

};