#include <stdio.h>
int main() {
    float tempo, horas;
    printf("Informe as horas: ");
    scanf("%f", &horas);

    tempo = horas * 60;
    printf("As %.0f horas em minutos sao: %.0f minutos", horas, tempo);

    return 0;
}