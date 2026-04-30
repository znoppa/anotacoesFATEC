#include <stdio.h>
#define TAM 10
int main () {
    int vetor_a[TAM] = {0};
    int vetor_b[TAM] = {0};
    int b = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o %d numero:", i + 1);
        scanf("%d", &vetor_a[i]);
    }
    // Usamos tam - 1, pois no vetor não existe o 10
    for (int i = TAM - 1; i >= 0; i--) {
        vetor_b[b++] = vetor_a[i];
    }
    printf("Vetor A: \n");
    for (int i = 0; i < TAM; i++) {
        printf("%d \n", vetor_a[i]);
    }
    printf("Vetor B: \n");
    for (int i = 0; i < TAM; i++) {
        printf("%d \n", vetor_b[i]);
    }
}