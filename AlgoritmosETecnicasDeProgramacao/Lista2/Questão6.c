#include <stdio.h>

void main()
{
    int cavalos;
    float valor;
    float valorBase;

    printf("Informe a quantidade de cavalos: ");
    scanf("%d", &cavalos);

    printf("Informe o valor da ferradura: ");
    scanf("%f", &valor);

    valorBase = cavalos * 4 * valor;
    printf("Quantidade de ferraduras necessárias: %d\n", (cavalos * 4));

    if (valorBase > 15000 && valorBase < 20000)
    {
        printf("O valor total para a compra das ferraduras é: R$ %.2f", valorBase * 0.9);
    }
    else if (valorBase > 20000 && valorBase < 25000)
    {
        printf("O valor total para a compra das ferraduras é: R$ %.2f", valorBase * 0.88);
    }
    else if (valorBase > 25000 && valorBase < 30000)
    {
        printf("O valor total para a compra das ferraduras é: R$ %.2f", valorBase * 0.85);
    }
    else if (valorBase > 30000)
    {
        printf("O valor total para a compra das ferraduras é: R$ %.2f", valorBase * 0.8);
    }
    else
    {
        printf("O valor total para a compra das ferraduras é de R$ %.2f", valorBase);
    }
}