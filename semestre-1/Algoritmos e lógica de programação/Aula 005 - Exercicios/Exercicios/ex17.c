#include <stdio.h>
int main() {
    int tempo;
    int horas, minutos, segundos;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &tempo);

    //Calcula as horas inteiras
    horas = tempo / 3600;
    //O que sobra das horas vira minutos (operador % pega o resto0
    minutos = (tempo % 3600) / 60;
    // o que sobra dos minutos sao os segundos
    segundos = tempo % 60;
    printf("%d horas, %d minutos e %d segundos");
}