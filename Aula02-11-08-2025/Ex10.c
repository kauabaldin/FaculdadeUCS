#include <stdio.h>
int main() {
    float lado1, lado2, area;
    printf("Informe o lado 1 do retangulo: ");
    scanf("%f", &lado1);
    printf("Informe o lado 2 do retangulo: ");
    scanf("%f", &lado2);
    area = lado1 * lado2;
    printf("A area do retangulo e: %.2f\n", area);
    return 0;
}