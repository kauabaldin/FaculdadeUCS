#include <stdio.h>
int main() {
    float segundos, horas;
    printf("Informe os segundos: ");
    scanf("%f", &segundos);

    horas = segundos / 3600;
    printf("Os %.0f segundos em horas sao: %.0f horas", segundos, horas);

    return 0;
}