#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    float areaCirculo = 3.14 * (raio * raio);
    printf("A area do circulo e: %.2f", areaCirculo);

}