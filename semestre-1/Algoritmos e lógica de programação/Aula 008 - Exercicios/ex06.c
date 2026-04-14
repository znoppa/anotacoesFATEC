#include <stdio.h>
int main () {
    int n;
    int soma = 0;
    while (1) {
        printf("Digite um numero: ");
        scanf("%d",&n);
        fflush(stdin);
        if (n > 0) {
            soma += n;
        }
        else {
            break;
        }
    }

    printf("A soma eh = %d\n",soma);
}