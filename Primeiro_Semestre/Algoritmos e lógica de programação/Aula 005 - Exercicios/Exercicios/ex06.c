#include <stdio.h>
int main() {
    float metros, cent, mili;
    printf("Insira o valor em metros: ");
    scanf("%f", &metros);

    cent = metros * 100;
    mili = metros * 1000;

    printf("Insira o valor em cent: %.2f \n", cent);
    printf("Insira o valor em mili: %.2f \n", mili);
}