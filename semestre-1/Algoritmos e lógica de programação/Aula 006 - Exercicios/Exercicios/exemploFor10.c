#include <stdio.h>
#include <stdlib.h>

int main () {
    int num = 0, pares = 0, negativos = 0, maior = 0, div = 0;
    for (int i = 1; i <= 20; i++) {
        printf("Digite o %d. numero: ",i);
        scanf("%d", &num);

        // meio de incurtar o if quando nao temos um else
        if (num % 2 == 0) pares += 1;
        if (num < 0) negativos += 1;
        if (num > 30) maior += 1;
        if (num % 7 == 0) div += 1;
    }

    printf("Quantidade de num pares: %d \n", pares);
    printf("Quantidade de num negativos: %d \n", negativos);
    printf("Quantidade de num maiores que 30: %d \n", maior);
    printf("Quantidade de num divisiveis por 7: %d \n", div);
}