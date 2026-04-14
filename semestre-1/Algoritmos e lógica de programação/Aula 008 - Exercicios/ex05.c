#include <stdio.h>
int main() {
    int n;
    int soma = 0;
    printf("Digite um numero: ");
    scanf("%d",&n);

    while (n != 0) {
        if (n % 2 == 0) {
            soma = n + soma;
            n--;
        }
        else {
            n--;
        }
    }
    printf("A soma dos pares eh = %d\n",soma);


}