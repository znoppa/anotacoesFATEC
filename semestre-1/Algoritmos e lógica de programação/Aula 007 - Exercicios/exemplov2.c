#include <stdio.h>

int main(void) {
    int soma = 0;
    int n;

    // Enquanto soma for menor que 500 - repetir o laco
    // A ideia eh somar os pares entrados
    while (soma < 500) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            soma = soma + n; // somamos apenas os pares
        }
    }
    printf("Valor da soma dos numeros pares: %d /n");

    return 0;
}