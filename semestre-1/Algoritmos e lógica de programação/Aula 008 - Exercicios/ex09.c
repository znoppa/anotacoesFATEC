#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero para fazermos a fatoracao: ");
    scanf("%d", &n);

    int fatorial = 1;
    if ( n == 0) {
        fatorial = 1;
        printf("O fatorial de 0 eh 1. \n");
    }
    else {
        do {
            fatorial *= n;
            n--;
        }while( n != 0);
        printf("O numero fatorial eh %d", fatorial);
    }

}