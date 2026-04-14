#include <stdio.h>

int main(void) {

    int b,a;
    printf("Digite a base e a altura do retangulo: \n");
    scanf("%d %d",&b,&a);

    int area = b*a;
    int perimetro = 2*b + 2*a;
    printf("Area do retangulo: %d \n",area);
    printf("Perimetro do retangulo: %d \n",perimetro);


    return 0;
}