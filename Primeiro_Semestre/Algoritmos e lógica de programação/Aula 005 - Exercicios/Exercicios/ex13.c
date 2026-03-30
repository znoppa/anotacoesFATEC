#include <stdio.h>
int main() {
    int anos, meses, dias;
    printf("Digite a sua idade em anos, meses e dias separados por ESPACO: ");
    scanf("%d" "%d" "%d" , &anos, &meses, &dias);

    int anosDias = anos * 365;
    int mesesDias = meses * 30;
    int idadeDias = anosDias + mesesDias + dias;

    printf("Sua idade em dias eh: %d", idadeDias);
}