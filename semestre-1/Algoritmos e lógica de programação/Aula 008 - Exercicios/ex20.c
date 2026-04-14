#include <stdio.h>

int main () {
    int tesouros, valor, raros;

    printf("Quantos tesouros o dragao tem?");
    scanf("%d", &tesouros);

    for (int i = 0; i < tesouros; i++) {
        printf("Digite o valor do tesouro:");
        scanf("%d", &valor);
        if (valor > 10000) {
            raros++;
        }
    }
    printf("O dragao tem %d tesouros raros", raros);
}