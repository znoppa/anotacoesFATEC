#include <stdio.h>
int main() {
    double valorCusto, valorVenda;
    printf("Digite o valor do custo: ");
    scanf("%lf", &valorCusto);
    valorVenda = valorCusto * 1.3;
    printf("O valor de venda eh: %.2f", valorVenda);
}