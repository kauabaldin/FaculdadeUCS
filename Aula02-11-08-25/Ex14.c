#include <stdio.h>

int main() {
    float comp1, comp2, altura, area;
    printf("Informe o comprimento do lado 1: ");
    scanf("%f", &comp1);
    printf("Informe o comprimento do lado 2: ");
    scanf("%f", &comp2);
    printf("Informe a altura do triangulo: ");
    scanf("%f", &altura);

    area = ((comp1 + comp2) * altura) / 2;
    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}