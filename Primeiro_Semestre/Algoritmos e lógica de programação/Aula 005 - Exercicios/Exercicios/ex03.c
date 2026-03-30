#include <stdio.h>

/* 3 - Receba o valor de um produto e exiba o novo valor com 10% de desconto. */
int main() {
    float valorProduto;

    printf("Insira o valor do produto: ");
    scanf("%f", &valorProduto);

    float desconto = (valorProduto / 10);

    printf("O valor com desconto eh: %.2f", valorProduto - desconto);


}