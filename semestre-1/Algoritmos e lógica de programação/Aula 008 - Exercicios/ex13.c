#include <stdio.h>
int main() {
    double carga;
    double perca;
    printf("Insira o valor da carga: ");
    scanf("%lf", &carga);
    printf("Insira a perca diaria: ");
    scanf("%lf", &perca);

    int dias = 0;
    while (carga > 5) {
        carga -= perca;
        dias++;
    }

    printf("%d dias restantes", dias);

}
