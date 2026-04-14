#include <stdio.h>

int main () {
    int troco;
    int plat, ouro, prat, bron, cobre;
    printf("Digite o troco: \n");
    scanf("%d", &troco);

    plat = troco / 100;
    troco %= 100;
    ouro = troco / 50;
    troco %=  50;
    prat = troco / 10;
    troco %= 10;
    bron = troco / 5;
    troco %=  5;
    cobre = troco;

    printf("%d moedas de 100\n%d moedas de 50\n%d moedas de 10\n%d moedas de 5\nE %d pecas de cobre", plat, ouro, prat, bron, cobre);
}
