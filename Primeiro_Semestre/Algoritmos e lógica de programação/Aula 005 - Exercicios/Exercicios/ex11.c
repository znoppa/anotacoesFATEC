#include <stdio.h>
#include <math.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    double quadradoNumero = numero * numero;
    double cuboNumero = numero * numero * numero;

    printf("O quadrado do numero eh: %.2f \n", quadradoNumero);
    printf("O cubo do numero eh: %.2f \n", cuboNumero);
}