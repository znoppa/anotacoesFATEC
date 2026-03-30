#include <stdio.h>
int main () {

    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma = soma + i;
    }
    printf("Somatorio de 1 a 100: %d\n", soma);
}