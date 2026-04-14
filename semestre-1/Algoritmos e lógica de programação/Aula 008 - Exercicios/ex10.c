#include <stdio.h>
int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);

    // A ! significa que tem que ser o oposto, então tem que ser divisivel
    // por 4 e NAO pode ser divisel por 100

    if (((n % 4 == 0) && !(n % 100 ==0) || (n % 400 == 0))) {
        printf("O ano eh bissexto\n");
    }
    else {
        printf("O ano nao eh bissexto");
    }
}