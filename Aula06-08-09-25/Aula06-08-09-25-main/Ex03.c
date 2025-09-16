#include <stdio.h>
int main() {
    int i = 0;
    for (i; i <= 50; i++) {
        if (i % 2) {
            continue;
        }
        printf("%d\n", i);
    }
}