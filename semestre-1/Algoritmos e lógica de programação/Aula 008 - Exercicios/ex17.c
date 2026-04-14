#include <stdio.h>
int main () {
    int rodas;
    int horario;

    printf("Digite a quantidade de rodas: ");
    scanf("%d", &rodas);
    printf("Digite o horario: [0] a [23] ");
    scanf("%d", &horario);

    int desc;
    if (horario >= 18 || horario < 6) {
        printf("Desconto noturno ATIVO! \n");
        desc = 2;
    }
    else {
        printf("Desconto noturno DESATIVADO! \n");
        desc = 1;
    }
    if ( rodas == 2) {
        printf("Moto Antiga: %d", (rodas * 5)/desc );
    }
    if ( rodas == 4) {
        printf("Carroca: %d", (rodas * 5)/desc );
    }
    if ( rodas == 6) {
        printf("Carruagem: %d", (rodas * 5)/desc );
    }
}