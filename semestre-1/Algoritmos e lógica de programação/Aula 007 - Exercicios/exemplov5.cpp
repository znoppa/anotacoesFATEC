#include <stdio.h>
#include <stdlib.h>
#include <time.h> //

int main() {
    // Inicializa o gerador com o tempo atual para números diferentes
    // Pois a função rand tem um problema de gerar o mesmo por causa do tempo
    srand(time(NULL));

    // Gera um número entre 0 e 999 (resto), adicinamos 1 para ser entre 0 a 1000
    int magico = (rand() % 1000) + 1;
    int palpite = 0;
    int tentativas = 0;

    do {
        fflush(stdin);
        printf("Palpite [%d de 10] \n", tentativas);
        printf("Digite um numero [1...1000]: \n");
        scanf("%d", &palpite);
        if (palpite == magico) {
            printf("Você ACERTOUUU! \n");
            printf("O numero aleatorio era: %d\n", magico);
            printf("Voce acertou com %d tentativas \n", tentativas);
            return 0;
        }
        else if (tentativas == 10){
                printf("Acabaram suas chances, voce PERDEU! \n");
                printf("O numero aleatorio era: %d \n", magico);
                return 0;
        }
        if (palpite > magico) {
            printf("Numero digitado eh maior que o magico \n");
            printf("\n");
            tentativas++;
        }
        if (palpite < magico) {
            printf("O numero digitado eh menor que o magico \n");
            printf("\n");
            tentativas++;
        }
    } while (palpite != magico);


    return 0;
}