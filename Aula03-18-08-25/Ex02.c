#include <stdio.h>
main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        printf("Seu numero eh: %d\n", numero);
        printf("Numero positivo\n");
    } else {
        printf("Seu numero eh: %d\n", numero);
        printf("Numero negativo\n");
    }
    return 0;
}