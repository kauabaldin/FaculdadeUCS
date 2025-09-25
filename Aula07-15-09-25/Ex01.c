#include <stdio.h>
int main() {
    int number, negativo;
    printf("Digite um numero: ");
    scanf("%d", &number);
    while (number != 0) {
        printf("\nDigite um numero: ");
        scanf("%d", &number);
        if (number == 0) {
            break;
        } else if (number < 0) {
            number = negativo; 
            continue;
        }
        printf("O numero menor numero digitado: %d", number);
    }
    return 0;
}