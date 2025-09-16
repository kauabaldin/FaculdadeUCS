#include <stdio.h>

int main() {
    int segundos, minutos, horas;
    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    printf("Os %d segundos em horas sao: %d horas e %d minutos", segundos, horas, minutos);

    return 0;
}