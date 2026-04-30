#include <stdio.h>
#define TAM 15
int main() {
    int vetor_a[TAM] = {0}, vetor_b[TAM] = {0};
    int novo_tamanho = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o primeiro numero %d: ", i + 1);
        scanf("%d", &vetor_a[i]);
    }
    for (int i = 0; i < TAM; i++) {
        if (vetor_a[i] != 0) {
            vetor_b[novo_tamanho++] = vetor_a[i];
        }

    }
    printf("Vetor A: \n");
    for (int i = 0; i < TAM; i++) {
        printf("[%d]", vetor_a[i]);
    }
    printf("\n");
    printf("Vetor B sem zeros: \n");
    for (int i = 0; i < novo_tamanho; i++) {
        printf("[%d]", vetor_b[i]);
    }


}