#include <stdio.h>

int main() {
    int num1, num2, dif, result;

    printf("Informe primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe segundo numero: ");
    scanf("%d", &num2);
    dif = num1 - num2;
    result = dif * dif;
    printf("O quadrado da diferenca e: %d\n", result);
    
    return 0;
}