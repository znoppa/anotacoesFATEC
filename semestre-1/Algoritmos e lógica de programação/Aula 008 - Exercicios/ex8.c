#include <stdio.h>
int main () {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    if (n % 1 == 0 && n % n == 0 && n != 1) {
        printf("Eh primo");
    }
    else {
        printf("Nao eh primo");
    }
}