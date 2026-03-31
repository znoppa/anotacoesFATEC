#include <stdio.h>
int main() {
    int n1,n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    float resto = n1 % n2;
    printf("O valor do resto eh: %.2f", resto);
}