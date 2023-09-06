#include <stdio.h>

void main () {
    
    float largura;
    float comprimento;
    float valorM;

    printf("Insira a largura do seu terreno: ");
    scanf("%f", &largura);
    printf("Insira o comprimento do seu terreno: ");
    scanf("%f", &comprimento);
    printf("Insira o valor do metro quadrado do seu terreno: ");
    scanf("%f", &valorM);

    float areaTerreno = largura * comprimento;
    float valorTerreno = areaTerreno * valorM;

    printf("A área total do seu terreno é %.2f metros quadrados.\nO valor do seu terreno é de R$ %.2f", areaTerreno, valorTerreno);


}