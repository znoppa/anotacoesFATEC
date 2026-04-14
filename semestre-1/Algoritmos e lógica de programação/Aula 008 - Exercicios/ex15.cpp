#include <stdio.h>
int main () {
    int vida, dano;
    printf("Digite a vida do heroi: ");
    scanf("%d", &vida);

    while (vida > 0) {
        printf("O heroi foi emboscado, insira o dano do proximo ataque goblin! \n");
        scanf("%d", &dano);
        vida -= dano;
        if (dano == 0) {
            printf("O heroi sobreviveu!");
            break;
        }

    }
    printf("O heroi morreu......");
}