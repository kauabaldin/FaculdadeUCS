#include <stdio.h>
int main() {
    float num1, num2, soma, sub, mult, div;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe segundo numero: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("Numeros digitados: %.0f e %.1f \nA soma eh: %.1f \nA subtracao eh: %.1f \nA multiplicacao eh: %.0f \nA divisao eh: %.3f", num1,num2,soma,sub,mult,div);

    return 0;
}