#include <stdio.h>
int main () {
    double n1,n2;
    double operacao;
    printf("Digite dois numeros para realizarmos uma operacao. \n");
    printf("Digite um numero: \n");
    scanf("%lf",&n1);
    printf("Digite outro numero: \n");
    scanf("%lf",&n2);
    fflush(stdin);

    char caso;
    printf("[+] - Soma\n[-] - Subtracao\n[*] - Multiplicacao\n[/] - Divisao\n");
    scanf("%c",&caso);
    fflush(stdin);

    switch (caso) {
        case '+':
            operacao = n1 + n2;
            printf("Resultado: %.2lf \n",operacao);
            break;
        case '-':
            operacao = n1 - n2;
            printf("Resultado: %.2lf \n",operacao);
            break;
        case '*':
            operacao = n1 * n2;
            printf("Resultado: %.2lf \n",operacao);
            break;
        case '/':
            if ( n2 == 0) {
                printf("ERRO de divisao por ZERO \n");
            }
            else {
                operacao = n1 / n2;
                printf("Resultado: %.2lf \n",operacao);
            }
            break;
    }

}