#include <stdio.h>

int main()
{

    float frente;
    float lateral;
    float valorM;
    float areaTerreno;
    float valorBase;
    float valorFinal;

    printf("Insira a frente do seu terreno: ");
    scanf("%f", &frente);
    printf("Insira o lateral do seu terreno: ");
    scanf("%f", &lateral);
    printf("Insira o valor do metro quadrado do seu terreno: ");
    scanf("%f", &valorM);

    areaTerreno = frente * lateral;
    valorBase = areaTerreno * valorM;

    if (fabs(frente - lateral) < (frente * 0.1))
    {

        valorFinal = valorBase * 1.22;
        printf("A área total do seu terreno é %.2f metros quadrados.\nO terreno recebeu um acréscimo de 22%% no valor, com o valor final de R$ %.2f\n\n\n", areaTerreno, valorFinal);
    }
    else if (frente < (lateral * 0.4))
    {
        valorFinal = valorBase * 0.88;
        printf("A área total do seu terreno é %.2f metros quadrados.\nO terreno recebeu um decréscimo de 12%% no valor, com o valor final de R$ %.2f\n\n\n", areaTerreno, valorFinal);
    }
    else if (frente > (lateral * 0.7))
    {
        valorFinal = valorBase * 0.85;
        printf("A área total do seu terreno é %.2f metros quadrados.\nO terreno recebeu um decréscimo de 15%% no valor, com o valor final de R$ %.2f\n\n\n", areaTerreno, valorFinal);
    }
    else
    {
        valorFinal = valorBase;
        printf("A área total do seu terreno é %.2f metros quadrados.\nO terreno não recebeu nenhuma alterção no valor, com o valor final de R$ %.2f\n\n\n", areaTerreno, valorFinal);
    }

    

    return 0;
}