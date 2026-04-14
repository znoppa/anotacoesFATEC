#include <stdio.h>

int main(void) {
   int soma = 0;
    int n;

    //enquanto soma for menor que 500 - repetir o laco
    while (soma < 500) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma = soma + n;
    }
    printf("Valor da soma %d /n");

    return 0;
}