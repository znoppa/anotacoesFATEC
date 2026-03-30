#include <stdio.h>

int main () {

    char caracter1, caracter2;

    printf("Digite o primeiro caracter: \n");
    scanf("%c", &caracter1);
    fflush(stdin);
    printf("Digite o segundo caracter: \n");
    scanf("%c", &caracter2);

    for (int i = 1; i <= 5; i++) {
        printf("%c", caracter1);
        printf("%c", caracter2);
    }

}