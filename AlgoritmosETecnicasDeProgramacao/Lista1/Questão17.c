#include <stdio.h>


void main () {

    int qntPaes;
    int qntBroas;
    float valorReforma;

    printf("Informe a quantidade de pães vendidos: ");
    scanf("%i", &qntPaes);
    printf("Informe a quantidade de broas vendidos: ");
    scanf("%i", &qntBroas);
    printf("Informe o valor da reforma: ");
    scanf("%f", &valorReforma);

    float fatPaes = qntPaes * 0.12;
    float fatBroas = qntBroas * 1.6;
    float fatTotal = fatPaes + fatBroas;
    float deposito = fatTotal * 0.1;

    printf("O valor do faturamento dos pães foi R$ %.2f\nO valor do faturamento das broas foi de R$ %.2f\n", fatPaes, fatBroas);
    printf("O faturamento total foi de R$ %.2f\nO deposito será de R$ %.2f\n", fatTotal, deposito);
    printf("Serão necessários %.0f dias para pagar a reforma.", (valorReforma/deposito));


    

}