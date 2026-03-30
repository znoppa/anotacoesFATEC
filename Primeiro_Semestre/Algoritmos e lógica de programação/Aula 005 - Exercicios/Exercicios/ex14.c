#include <stdio.h>
int main() {
    double conta, contaTotal;
    printf("Digite o valor da conta: ");
    scanf("%lf", &conta);
    contaTotal = conta + (conta * 0.10);

    printf("A conta total com taxa de servico eh: %.2lf", contaTotal);
}