#include <stdio.h>
#include <math.h>

int main() {
    double area, raio;
    double pi = 3.14159;
    printf("Informe o raio do circulo: ");
    scanf("%lf", &raio);
    area = pi * pow(raio, 2);
    printf("A area do circulo e: %.2f\n", area);
    return 0;

}