#include <stdio.h>
int main() {
    int cont = 0, num;
    printf("Digite um numero: ");
    for(cont; cont <= 10; cont++) {
        scanf("%d", &num);
        if (num % 2 != 0) {
            printf("O numero %d e IMPAR\n", num);
        } else {
            printf("O numero eh %d\n", num);
}
    }

}