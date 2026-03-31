#include <stdio.h>
int main() {
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("A soma entre eles eh: %f \n", n1 + n2);
    printf("A subtracao entre eles eh: %f \n", n1 - n2);
    printf("A multiplicacao entre eles eh: %f \n", n2);
    printf("A divisao entre eles eh: %.2f \n", n1 / n2);

}