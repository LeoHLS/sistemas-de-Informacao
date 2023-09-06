#include <stdio.h>

void main () {

    int qntSanduiches;
    printf("Informe a quantidade de sanduíches: ");
    scanf("%i", &qntSanduiches);

    printf("Para produzir %i sanduíches serão necessários:\n%.2f Kgs de mussarela\n%.2f Kgs de presunto\n%.2f Kgs de hamburguer\n", qntSanduiches, ((100*qntSanduiches)/(float)1000), (50*qntSanduiches)/(float)1000, (120*qntSanduiches)/(float)1000);
}