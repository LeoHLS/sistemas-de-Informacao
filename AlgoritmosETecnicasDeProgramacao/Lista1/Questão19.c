#include <stdio.h>

void main () {

    int dia;
    int mes;

    printf("Informe o dia: ");
    scanf("%i", &dia);
    printf("Informe o mês: ");
    scanf("%i", &mes);

    printf("A quantidade de dias que se passaram foi %i", (30*(mes-1)+dia));



}