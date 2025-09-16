#include <stdio.h>

int main() {
    float hora, minuto, segundos, TotalS;
    printf("Informe a hora: ");
    scanf("%f", &hora);
    printf("Informe o minuto: ");
    scanf("%f", &minuto);
    printf("Informe o segundo: ");
    scanf("%f", &segundos);

    TotalS = (hora * 3600) + (minuto * 60) + segundos;
    printf("O total em segundos e: %.0f\n", TotalS);

    return 0;
}