#include <stdio.h>
//  Leia um número N. Use um laço de repetição para imprimir os N primeiros números da
// sequência de Fibonacci. Lembre-se: não use vetores, apenas variáveis para guardar os valores
// anteriores!
int main() {
    int n;
    int t1 = 0, t2 = 1;
    int proximoTermo = 0;

    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("O dano do mago eh: \n ");
    for (int i = 1; i <= n; i++) {
        printf("[%d] ", t2);
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }


}