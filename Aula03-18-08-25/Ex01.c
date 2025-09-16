#include <stdio.h>
int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
        printf("Sua idade eh: %d\n", idade);
    } else {
        printf("Menor de idade\n");
        printf("Sua idade eh: %d\n", idade);
    }
    return 0;
}
