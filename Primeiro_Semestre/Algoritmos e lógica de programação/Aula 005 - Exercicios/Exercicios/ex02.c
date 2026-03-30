#include <stdio.h>
#include <stdlib.h>

/* 2 -  Leia dois números reais e imprima a média aritmética entre eles. */

int main(void) {
    float numero1, numero2;
    printf("Insira o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Insira o segundo numero: ");
    scanf("%f", &numero2);

    float media = (numero1 + numero2) / 2;
    printf("A media aritmetica eh: %.2f", media);




    return 0;
}