#include <stdio.h>
#include <math.h>
int main() {
    int num1, num2, diferenca;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    diferenca = fabs(num1 - num2);
    printf("A diferenca entre %d e %d e: %d\n", num1, num2, diferenca);

    return 0;
}