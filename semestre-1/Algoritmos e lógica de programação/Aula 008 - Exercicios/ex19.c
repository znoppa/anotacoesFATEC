#include <stdio.h>
int main () {
    double temp;
    while (temp < 1000) {
        printf("Digite a temp em celsius: ");
        scanf("%lf", &temp);

        double fah;
        fah = (temp * 1.8) + 32;
        printf("Fahrenheit: %.2f \n", fah);
    }

    printf("A fornalha chegou ao limite (Temperatura de derretimento do MITHRIL)");
}