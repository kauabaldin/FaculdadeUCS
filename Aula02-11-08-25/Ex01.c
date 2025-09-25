#include <stdio.h>
int main() {
    int num1, num2, result;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("O resultado da soma de %d e %d eh %d", num1,num2,result );

    return 0;
}