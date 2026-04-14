#include <stdio.h>
int main (void) {
    char pocao;
    printf("Digite a cor da pocao:\n[V] - Verde\n[A] - Azul\n[R] - Vermelha\n");
    scanf("%c", &pocao);
    switch (pocao) {
        case 'V':
            printf("Pocao de Cura;");
            break;
        case 'A':
            printf("Pocao de Mana;");
            break;
        case 'R':
            printf("Pocao de Forca;");
            break;
        default:
            printf("Mistura Explosiva;");
    }
}