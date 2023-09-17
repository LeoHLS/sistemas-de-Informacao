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

    if ((frente - lateral) < (frente * 0.1))
    {

        valorFinal = valorBase * 1.22;
    }
    else if (frente < (lateral * 0.4))
    {
        valorFinal = valorBase * 0.88;
    }
    else if (frente > (lateral * 0.7))
    {
        valorFinal = valorBase * 0.85;
    }
    else
    {
        valorFinal = valorBase;
    }

    printf("A área total do seu terreno é %.2f metros quadrados.\nO valor do seu terreno é de R$ %.2f", areaTerreno, valorFinal);

    return 0;
}