#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// faca um programa que dado um numero de voltas onde
// (0 < n < 10)
// Apresente na saida qual foi a melhor volta
int main () {
    srand (time(NULL));
    int melhorVolta = 0, numeroVoltas;
    double tempoVolta;
    double melhorTempo = 0;

    do {
        printf("Ingresse o numero de voltas entre [1 e 10]: \n ");
        scanf("%d", &numeroVoltas);
    }while (numeroVoltas <= 0 || numeroVoltas > 10);

    for (int i = 1; i <= numeroVoltas; i++) {
        printf("Digite o tempo da %d. volta: Formato - [00.00] \n", i);
        scanf("%lf", &tempoVolta);
        if (i==1) {
            melhorTempo = tempoVolta;
            melhorVolta = i;
        }
        if (tempoVolta < melhorTempo) {
            melhorTempo = tempoVolta;
            melhorVolta = i;
        }
    }

    printf("A Melhor volta foi a %d com o tempo de %.2lf", melhorVolta, melhorTempo);
    return 0;

}