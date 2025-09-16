#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5, num6, somaPares;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite segundo numero: ");
    scanf("%d", &num2);

    printf("Digite terceiro numero: ");
    scanf("%d", &num3);

    printf("Digite quarto numero: ");
    scanf("%d", &num4);

    printf("Digite quinto numero: ");
    scanf("%d", &num5);

    printf("Digite sexto numero: ");
    scanf("%d", &num6);

    if (num1 % 2 == 0) {
        somaPares = somaPares + num1;
    }
    if (num2 % 2 == 0) {
        somaPares = somaPares + num2;
    }
    if (num3 % 2 == 0) {
        somaPares = somaPares + num3;
    }
    if (num4 % 2 == 0) {
        somaPares = somaPares + num4;
    }
    if (num5 % 2 == 0) {
        somaPares = somaPares + num5;
    }
    if (num6 % 2 == 0) {
        somaPares = somaPares + num6;
    }
    printf("A soma dos valores pares o resultado eh: %d\n", somaPares);

    return 0;
}