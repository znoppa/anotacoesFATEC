#include <stdio.h>
#include <math.h>

int main () {
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);

    if ( n%2==0) {
        printf("O numero %d eh par",n);
    }
    else {
        printf("O numero %d eh impar",n);
    }
}