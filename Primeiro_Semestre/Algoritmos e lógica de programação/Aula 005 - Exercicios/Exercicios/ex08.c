#include <stdio.h>
int main() {
    int a, b, temporariaA, temporariaB;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    temporariaA = a;
    temporariaB = b;
    a = temporariaB;
    b = temporariaA;

    printf("O valor trocado eh A = %d e B = %d", a, b);



}