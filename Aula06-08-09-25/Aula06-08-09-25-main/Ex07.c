#include <stdio.h>
int main() {
    int cont = 1, num;
    printf("Digite um numero: ");
    for(cont; num != 0; cont++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("O numero %d e par\n", num);
        } else {
            printf("O numero eh %d\n", num);
        }
    }
}