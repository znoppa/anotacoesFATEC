#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int str, dado, ca, dano;
    printf("Indique a forca do seu personagem:");
    scanf("%d", &str);
    printf("Indique o valor do dado:");
    scanf("%d", &dado);
    printf("Indique a armadura do inimigo:");
    scanf("%d", &ca);

    if (dado == 20) {
        printf("Voce causou um dano DOBRADO, seu dano foi %d!", (str * 4)-ca );
    }
    else {
        printf("Voce causou %d de dano!", (str * 2)-ca );
    }


}