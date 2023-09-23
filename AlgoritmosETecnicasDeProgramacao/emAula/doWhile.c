#include <stdio.h>
#include <stdlib.h>

void main()
{
    float metragem1, metragem2, resultado;
    int resp;

    do
    {
        printf("Digite a primeira metragem do terreno: ");
        scanf("%f", &metragem1);

        printf("Digite a segunda metragem do terreno: ");
        scanf("%f", &metragem2);

        resultado = metragem1 * metragem2;

        printf("O terreno tem %.2fm²", resultado);

        printf("\n\n\nDigite 1 para continuar e 2 para sair: ");
        scanf("%d", &resp);
    } while (resp == 1);
}