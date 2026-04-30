#include <stdio.h>
#define TAM 5
int main() {
    int vetor_a[TAM] = {0};
    int vetor_b[TAM] = {0};
    int v3[TAM * 2] = {0};

    printf("Vetor A: \n");
    for (int i = 0; i < TAM; i++) {
        printf("\nInsira um numero: ");
        scanf("%d", &vetor_a[i]);
    }
    printf("Vetor B: \n");
    for (int i = 0; i < TAM; i++) {
        printf("\nInsira um numero: ");
        scanf("%d", &vetor_b[i]);
    }

    for (int i = 0; i < TAM; i++) {
        v3[i * 2] = vetor_a[i]; // Os vetores de A vão ocupar as posicoes pares
        v3[i * 2 + 1] = vetor_b[i]; // Já os de B vão ocupar as impares
    }

    printf("Intercalados: \n");
    for (int i = 0; i < TAM * 2; i++) {
        printf("%d \n", v3[i]);
    }
}