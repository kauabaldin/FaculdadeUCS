#include <stdio.h>
int main() {
    int lado, area;
    printf("Informe o lado do quadrado: ");
    scanf("%d", &lado);
    area = lado * lado;
    printf("A area do quadrado e: %d\n", area);
    return 0;
}