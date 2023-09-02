#include <stdio.h>

void main () {
    
    int qntLata350;
    int qntGarrafa600;
    int qntGarrafa2L;

    printf("Informe a quantidade de latas de 350ml: ");
    scanf("%i", &qntLata350);
    printf("Informe a quantidade de garrafas de 600ml: ");
    scanf("%i", &qntGarrafa600);
    printf("Informe a quantidade de garrafas de 2L: ");
    scanf("%i", &qntGarrafa2L);

    float qntLitros = ((qntLata350 * 350) + (qntGarrafa600 * 600) + (qntGarrafa2L * 2000))/1000;

    printf("A quantidade total de litros é %.2f", qntLitros);


}