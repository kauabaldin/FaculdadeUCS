#include <stdio.h>
#include <math.h>

int main() {
    float a, area, volume;
    printf("Informe o lado do cubo: ");
    scanf("%f", &a);
    area = 6 * pow(a, 2);
    volume = pow(a, 3);
    printf("A area do cubo e: %.2f\n", area);
    printf("O volume do cubo e: %.2f\n", volume);
    return 0;
}