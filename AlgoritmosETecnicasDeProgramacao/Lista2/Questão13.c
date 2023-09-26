#include <stdio.h>

void main()
{
    float valorId;
    float valorAlim;
    int qntFrangos;
    float maiorValor = 0;
    float menorValor = 0;
    int maiorValorNome;
    float adicional;

    printf("Digite a quantidade de frangos: ");
    scanf("%i", &qntFrangos);
    printf("Digite o valor do chip de alimentacao: ");
    scanf("%f", &valorAlim);
    printf("Digite o valor do chip de identificacao: ");
    scanf("%f", &valorId);
    int qntId = qntFrangos;
    int qntAlim = qntFrangos * 2;

    if (valorAlim > maiorValor)

    {
        maiorValor = valorAlim;
        menorValor = valorId;
        maiorValorNome = 1;
    }
    if (valorId > valorAlim)
    {
        maiorValor = valorId;
        menorValor = valorAlim;
        maiorValorNome = 2;
    }

    if ((maiorValor - menorValor) / maiorValor <= 0.2)
    {
        if (maiorValorNome == 2)
        {

            printf("A quantidade do chip de alimentacao sofreu aumento de 20%% de (%d unidades)", qntAlim);
            adicional = qntAlim * 0.2;
            qntAlim = qntAlim + adicional;
            printf(" para (%d unidades)\n\n", qntAlim);
            printf("O valor total para identificar so frangos é:\n", valorAlim * qntAlim, valorId * qntId, (valorAlim * qntAlim + valorId * qntId));
            printf("Chip de identificação: %.2f\n", qntId * valorId);
            printf("Chip de alimentação: %.2f\tAdicional já aplicado de 20%%(R$ %.2f)\n", qntAlim * valorAlim, valorAlim * adicional);
            printf("Valor Total: %.2f", qntId * valorId + qntAlim * valorAlim);
        }
        else if (maiorValorNome == 1)
        {
            printf("A quantidade do chip de identificacao sofreu aumento de 20%% de (%d unidades)", qntId);
            adicional = qntId * 0.2;
            qntId = qntId + adicional;
            printf(" para (%d unidades)\n\n", qntId);
            printf("O valor total para identificar so frangos é:\n", valorAlim * qntAlim, valorId * qntId, (valorAlim * qntAlim + valorId * qntId));
            printf("Chip de identificação: %.2f\tAdicional já aplicado de 20%%(R$ %.2f)\n", qntId * valorId, valorId * adicional);
            printf("Chip de alimentação: %.2f\n", qntAlim * valorAlim);
            printf("Valor Total: %.2f", (qntId * valorId + qntAlim * valorAlim));
        }
    }
    else
    {
        printf("O valor total para identificar so frangos é:\nChip de alimentação: R$ %.2f\nChip de identificação: %.2f\nValor Total: R$ %.2f", valorAlim * qntAlim, valorId * qntId, (valorAlim * qntAlim + valorId * qntId));
    }

    printf("\n\n\n");
}