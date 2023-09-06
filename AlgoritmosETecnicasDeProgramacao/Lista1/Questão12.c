#include <stdio.h>

void main () {
    float custoFrango = 11;
    int qntFrangos;

    printf("Digite a quantidade de frangos: ");
    scanf("%i", &qntFrangos);

    printf("O valor total para identificar os frangos é de R$ %.2f", qntFrangos*custoFrango);
}