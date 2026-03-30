#include <stdio.h>

int main() {
    float temperaturaCelsius;
    float tempFahrenheit;
    printf("Insira o temperatura celsius: ");
    scanf("%f", &temperaturaCelsius);
    tempFahrenheit = (temperaturaCelsius * 1.8) + 32;

    printf("A temperatura em Fahrenheit eh: %.2f", tempFahrenheit);
}