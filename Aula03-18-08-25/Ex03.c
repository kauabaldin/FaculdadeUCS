#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("Seu numero eh: %d\n", numero);
        printf("Ele eh IGUAL que zero\n");
    } else if (numero > 0) {
        printf("Seu numero eh: %d\n", numero);
        printf("Ele eh MAIOR que zero\n");
    } else {
        printf("Seu numero eh: %d\n", numero);
        printf("Ele eh MENOR que zero\n");
    }
    return 0;
}