#include <stdio.h>
int main() {
    float minutos, horas;
    printf("Informe os minutos: ");
    scanf("%f", &minutos);

    horas = minutos / 60;
    printf("Os %.0f minutos em horas sao: %.0f horas", minutos, horas);

    return 0;
}