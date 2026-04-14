#include <stdio.h>
int main () {
    int peso = 0;
    for (int i = 0; i <= 10; i++) {
        printf("Digite o peso do passo: ");
        scanf("%d", &peso);
        if (peso % 2 ==0 ) {
            continue;
        }
        else {
            printf("Dano Sofrido! \n");
        }
    }
}