#include <stdio.h>

/* 1 - Leia um número inteiro e exiba o seu sucessor e o seu antecessor. */

int main(void) {
    int numero;
    printf("Insira um numero inteiro: \n");
    scanf("%d", &numero);

    printf("O antecessor desse numero eh: %d", numero-1);
    printf("O sucessor desse numero eh: %d", numero+1);

    return 0;
}