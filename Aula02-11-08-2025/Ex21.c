#include <stdio.h>
int main() {
    float horas, segundos;
    printf("Informe as horas: ");
    scanf("%f", &horas);

    segundos = horas * 3600;
    printf("As %.0f horas em segundos sao: %.0f segundos", horas, segundos);

    return 0;
}