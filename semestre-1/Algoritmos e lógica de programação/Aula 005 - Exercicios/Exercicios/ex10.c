#include <stdio.h>
int main() {
    double dolar, cotacaoAtual;
    printf("Digite a quantidade de dolares: ");
    scanf("%lf", &dolar);
    printf("Digite a cotacao atual do dolar: ");
    scanf("%lf", &cotacaoAtual);

    double reais = cotacaoAtual * dolar;
    printf("O valor do reais eh: %.2f", reais);
}