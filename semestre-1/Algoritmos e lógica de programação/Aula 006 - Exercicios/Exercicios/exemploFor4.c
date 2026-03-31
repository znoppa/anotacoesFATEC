#include <stdio.h>
int main() {
    int num;
    int contador = 1;

    printf("Digite o numero para realizarmos a tabuada: \n");
    scanf("%d", &num);

    // for (int i = num; i <= (num *  10); i += num) {
    //    printf("%d x %d = %d\n", contador, num, i);
    //    contador++;
    //}

    // ou de uma forma mais simples
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, num, i*num);
    }
}