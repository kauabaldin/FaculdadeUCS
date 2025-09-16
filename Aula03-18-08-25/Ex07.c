#include <stdio.h>
int main() {
    int num1, num2, mult;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    mult = num1 % num2;

    if (mult == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao multiplos\n");
    }
    return 0;
}