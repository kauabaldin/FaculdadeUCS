#include <stdio.h>
int main() {
    float num1, num2, result;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe segundo numero: ");
    scanf("%f", &num2);

    result = num1 / num2;
    printf("A divisao do numero %.0f e %.0f eh: %.1f", num1, num2, result);

    return 0;
}