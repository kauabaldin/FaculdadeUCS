#include <stdio.h>
int main() {
    float lado1, lado2, lado3, semi;
    printf("Digite o lado 1 do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite o lado 2 do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite o lado 3 do triangulo: ");
    scanf("%f", &lado3);
    semi = (lado1 + lado2 + lado3) / 2;

    printf("A semiperimetro do triangulo e: %.2f\n", semi);
    return 0;
}