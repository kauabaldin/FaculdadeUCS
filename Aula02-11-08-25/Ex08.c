#include <stdio.h>
int main() {
    int primeiroTermo, ultimoTermo, razao, numeroTermos, somaTermos, resultado;
    printf("Informe o primeiro termo: ");
    scanf("%d", &primeiroTermo);
    printf("Informe o ultimo termo: ");
    scanf("%d", &ultimoTermo);
    printf("Informe a razao: ");
    scanf("%d", &razao);

    numeroTermos = (ultimoTermo - primeiroTermo) / razao;
    somaTermos = (primeiroTermo + ultimoTermo) /2 * numeroTermos;
    resultado = somaTermos;

    printf("O resultado e: %d", resultado);

    return 0;
}