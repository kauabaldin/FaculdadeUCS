#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura, areaCilindro, areaParaTinta, pi = 3.14159;
    int latas;
    double custo;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    areaCilindro = 2 * pi * raio * altura + 2 * pi * pow(raio, 2);
    areaParaTinta = 2 * areaCilindro;

    latas = (int) ceil(areaParaTinta / 9.0);

    custo = latas * 40.0;

    printf("Área total para pintar (duas mãos): %.2f m²\n", areaParaTinta);
    printf("Quantidade de latas necessárias: %d\n", latas);
    printf("Custo total: R$ %.2lf\n", custo);

    return 0;
}
