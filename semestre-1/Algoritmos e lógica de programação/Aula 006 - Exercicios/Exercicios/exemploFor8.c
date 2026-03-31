#include <stdio.h>
int main () {
    int soma;
    int num;
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d. numero: ", i);
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("Somatorio dos 10 numeros: %d", soma);
}