#include <stdio.h>
#define TAM 10 // definimos tamanho padrao para os vetores
int main(void) {
    int numeros[TAM] = {0};
    int pares[TAM] = {0};
    int impares[TAM] = {0};
    int p = 0, im = 0; // Criamos um indice para cada, para não gerar lixo nas memorias
    // iniciamos ele em valor 0, primeira posição
    for (int i = 0; i < TAM; i++) {
        do {
            printf("Digite o %d. numero, (Exceto 0):  ", i + 1);
            scanf("%d", &numeros[i]);
        }while (numeros[i] == 0); // Não deixa ele digitar zero, sempre que tenta, retorna
    } // leitura dos numeros inteiros e tratamento do zero

    for (int i = 0; i < TAM; i++) {
        if (numeros[i] % 2 == 0) {
            pares[p++] = numeros[i]; // usamos o indice p para rodar o vetor
        } else {
            impares[im++] = numeros[i]; // usamos um indice diferente para nao gerar lixo de memoria
        }
    }
    printf("\n");
    printf("\nValores \n:");
    for (int i =0; i < TAM; i++) {
        printf("%d \n", numeros[i]);
    }

    printf("\nPares:\n");
    // Usamos o indice p para rodar o tamanho especifico desse vetor
    for (int i = 0; i < p; i++) {
        if (pares[i] == 0) break;
        printf("%d\n", pares[i]);
    }

    printf("\nImpares:\n");
    // Usamos o indice IM para rodar o tamanho especifico desse vetor
    for (int i = 0; i < im; i++) {
        if (pares[i] == 0) break;
        printf("%d\n", impares[i]);
    }

    return 0;
}