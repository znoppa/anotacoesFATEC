#include <stdio.h>
int main() {
    int n1, n2;
    printf("Digite o primeiro valor booleano (0 OU 1)");
    scanf("%d", &n1);
    printf("Digite o segundo valor booleano (0 OU 2)");
    scanf("%d", &n2);

    int and = n1 * n2;
    int or = n1 + n2;
    int notn1 = 1 - n1;
    int notn2 = 1 - n2;

    printf("PORTA AND: %d", and);
    printf("OR: %d", or);
    printf("NOT N1: %d", notn1);
    printf("NOT N2: %d", notn2);

}