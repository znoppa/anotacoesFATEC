#include <stdio.h>
int main() {
    double salarioBruto;
    printf("Insira o valor do salario: ");
    scanf("%lf", &salarioBruto);

    double salario = salarioBruto - ((salarioBruto * 0.05) + (salarioBruto * 0.08));
    printf("O valor do salario com descontos e: %.2f", salario);
    return 0;
}