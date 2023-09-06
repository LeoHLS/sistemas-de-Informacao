#include <stdio.h>

void main () {

    float peso;

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    printf("Caso você engorde 15%% você ficará com %.2f Kg\n", (peso * 1.15));
    printf("Caso você engorde 20%% você ficará com %.2f Kg\n", (peso * 1.2));



}