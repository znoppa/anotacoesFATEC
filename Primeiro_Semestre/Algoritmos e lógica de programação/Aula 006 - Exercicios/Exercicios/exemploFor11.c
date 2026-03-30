#include <stdio.h>
int main () {
    int n, t1 = 0, t2 = 1, proximoTermo;

    printf("Sequencia de Fibonacci\n");

    printf("Digite qual numero da sequencia voce quer, acima do segundo: ");
    scanf("%d", &n);

    if (n <= 2) {
        printf("Numero invalido - Reinicie ");
        return 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            proximoTermo = t1 + t2; // proximo termo é a soma dos dois
            t1 = t2; // o primeiro assume o segundo para pegar sua posicao
            t2 = proximoTermo; // o segundo assume o proximo termo para que no laço recomece a troca de posicoes
        }
    }
    printf("%d", t1);



    return 0;
}