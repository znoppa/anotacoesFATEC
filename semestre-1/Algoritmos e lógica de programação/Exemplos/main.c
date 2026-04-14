#include <stdio.h>

int main(void) {
    float x, y, z, media;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &x);
    printf("Digite o segundo valor: \n");
    scanf("%f", &y);
    printf("Digite o terceiro valor: \n");
    scanf("%f", &z);
    media = (x+y+z)/3;
    printf("O valor da media eh: %.2f\n", media);
    return 0; // como o main espera um int, retornamos 0
    // 0 indica que tudo correu bem até esta linha
}