#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main () {
    int vetor_a[TAM] = {0};
    int vetor_b[TAM] = {0};
    int novo_tamanho = 0, vazio = 1, escolha = 0;

    srand(time(NULL)); // inicializa a semente aleatória

    for (int i = 0; i < TAM; i++) {
        vetor_a[i] = rand() % 10; // até 9 ai
    }
    for (int i = 0; i < TAM; i++) {
        printf("%d", vetor_a[i]);
    }
    printf("Escolha um numero: ");
    scanf("%d", &escolha);
    for (int i = 0; i < TAM; i++) {
        if (escolha == vetor_a[i]) {
            vetor_b[novo_tamanho++] = i;
        }
    }
    for (int i = 0; i < TAM; i++) {
        for (int i = 0; i < TAM; i++) {
            if (vetor_b[i] != 0) {
                vazio = 0;
                break;
            }
        }
    }
    if (vazio) {
        printf("Nenhum numero alvo encontrado \n");
    } else {
        printf("Numero encontrado nas posicoes:");
       for (int i = 0; i < novo_tamanho; i++) {
           printf("[%d]", vetor_b[i]);
       }
    }



}