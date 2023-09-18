#include <stdio.h>

void main () {

    float peso;

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    float peso15 = peso * 1.15;
    float peso20 = peso * 1.2;

    printf("Caso você engorde 15%% você ficará com %.2f Kg\n", peso15);
    printf("Caso você engorde 20%% você ficará com %.2f Kg\n", peso20);
    if((peso20 - peso15) >= 4.5) {
        printf("Você deve procurar um nutricionista!");
    }



}