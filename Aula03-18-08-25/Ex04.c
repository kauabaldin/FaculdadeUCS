#include <stdio.h>
int main() {
    int numero, resto;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0) {
        printf("O numero %d eh PAR.\n", numero);
    } else {
        printf("O numero %d eh IMPAR.\n", resto);
    }
    return 0;
}