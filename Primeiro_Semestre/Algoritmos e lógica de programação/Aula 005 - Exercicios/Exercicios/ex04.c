#include <stdio.h>

int main() {
    float baseTriangulo, alturaTriangulo, areaTriangulo;
    printf("Insira a base: ");
    scanf("%f", &baseTriangulo);
    printf("Insira a altura: ");
    scanf("%f", &alturaTriangulo);

    areaTriangulo = baseTriangulo * alturaTriangulo;
    printf("A area do triangulo eh: %.2f", areaTriangulo);
}