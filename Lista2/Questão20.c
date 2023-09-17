#include <stdio.h>
#include <string.h>

void main () {

    int num, unidade, dezena, centena, milhar;

    printf("Digite um número: ");
    scanf("%i", &num);

    unidade = num%10;
    dezena = (num%100-unidade)/10;
    centena = (num%1000 -(num%100))/100;
    milhar = (num%10000 -(num%1000))/1000;



    printf("Unidade: %i\nDezena: %i\nCentena: %i\nMilhar: %i\n\n\n\n", unidade, dezena, centena, milhar);







}