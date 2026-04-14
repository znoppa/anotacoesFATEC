#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    // Gerar 6 valores entre 1 e 60
    int valor;
    for (int i = 1; i <= 6; i++) {
        valor = (rand() % 60) + 1;
        printf("[%d] \n", valor);
    }
}