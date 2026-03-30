#include <stdio.h>
int main() {
    float n1, n2, n3, p1, p2, p3;
    printf("Digite as notas separadas por ESPACO: ");
    scanf("%f" "%f" "%f" , &n1, &n2, &n3);

    printf("Digite os pesos separados por ESPACO: ");
    scanf("%f" "%f" "%f" , &p1, &p2, &p3);

    float mediaPonderada = (n1*p1 + n2*p2 + n3*p3)/p1+p2+p3;

    printf("A media ponderada eh: %.2f", mediaPonderada);

}