#include <stdio.h>
// Dados N valores pelo usuario onde ( 0 < n <= 20), efetue o somatorio dos valores
// Enquanto o usuario desejar
int main () {
    int n = 0;
    int soma = 0;
    char resposta = "s";

    do {
        do {
            fflush(stdin);
            printf("Digite um numero [1...20]: \n");
            scanf("%d", &n);
            if ( n < 0 || n > 20 ) {
                printf("Numero incorreto digitado. \n");
            }
        } while ( n < 0 || n > 20 ); // || Significa (OU)

        fflush(stdin);
        soma = soma + n;
        printf("Deseja continuar? [s] - SIM e [n] - NÃO \n");
        resposta = getchar();

    } while (resposta == 's');

    printf("A soma eh %d", soma);
    return 0;
}