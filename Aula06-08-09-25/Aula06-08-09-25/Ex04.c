#include <stdio.h>
int main() {
    int cont = 1;
    for (cont; cont < 201; cont++) {
        if (cont % 1) {
            continue;
        }
        printf("%d\n", cont);
    }
}