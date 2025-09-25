#include <stdio.h>
int main() {
    int i, num;
    printf("Informe um nmero: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++) {
        printf("%d\n", i);
    }
    return 0;
}