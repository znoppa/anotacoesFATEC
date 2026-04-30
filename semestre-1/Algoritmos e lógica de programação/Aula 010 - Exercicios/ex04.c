#include <stdio.h>
#define TAM 8
int main (void) {
    int notas[TAM] = {0}, soma = 0;
    double diferenca[TAM] = {0};
    double media = 0;


    for (int i = 0; i < TAM; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    media = soma / 8.0;
    printf("A media eh: %.2lf \n", media);

    for (int i = 0; i < TAM; i++) {
        diferenca[i] = notas[i] - media;
    }
    printf("Diferenca entre NOTAS e MEDIA: \n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2lf \n", diferenca[i]);
    }



}