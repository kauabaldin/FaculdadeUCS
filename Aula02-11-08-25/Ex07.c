#include <stdio.h>
 
int main() {
    int num1, num2, result;

    printf("Informe primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe segundo numero: ");
    scanf("%d", &num2);

    result = ((num1 * 4) + (num2 * 6)) / 2;
    printf("O resultado e: %d\n", result);

    return 0;
}