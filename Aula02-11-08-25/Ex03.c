#include <stdio.h>
int main() {
    int num1, num2, result;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe segundo numero: ");
    scanf("%d", &num2);

    result = num1 * num2;
    printf("A multiplicacao do numero %d e %d eh: %d", num1, num2, result);

    return 0;
}