#include <stdio.h>

int main(void) {
    int soma = 0;
    int pares = 0, impares = 0;
    int n;

    // Enquanto soma for menor que 500 - repetir o laco
    // A ideia eh somar os pares entrados
    while (soma < 500) {
        fflush(stdin);
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            pares = pares + n; // Somamos apenas os pares
            soma = soma + n;
        }
        else if (n % 2 == 1) {
            impares = impares + n;
            soma = soma + n;
        }
    }
    printf("Soma pares: %d \n");
    printf("Soma impares: %d \n");
    printf("Soma Total: %d \n", soma);

    return 0;
}