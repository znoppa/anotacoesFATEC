#include <stdio.h>
int main () {
    printf("Contagem de 1 a 101 mostrando apenas os impares");

    for (int i = 1; i <= 101; i++) {
        if (i % 2 == 1) {
            printf("%d \n", i);
        }
    }

    printf("\n");
    printf("Opcional passando de 2 em 2, i=1 \n");

    // Dessa forma o desempenho é melhor
    for (int i = 1; i <= 101; i = i +2) { // Ou i+=2 , mesma coisa de i = i + 2
        printf("%d \n", i);
    }
}