#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero para realizarmos a tabuada: ");
    scanf("%d",&n);

    for (int i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
