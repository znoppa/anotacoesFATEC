#include <stdio.h>
int main() {
    float distanciaKm, combustivel;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distanciaKm);
    printf("Digite a quantidade de combustivel consumida: ");
    scanf("%f", &combustivel);

    float consumoMedio = distanciaKm / combustivel;
    printf("O consumo medio eh de: %.2f", consumoMedio);
}