#include <math.h>
#include <stdio.h>

int main()
{

    float valor;

    printf("Informe o valor da conta: R$ ");
    scanf("%f", &valor);

    float semCents = floorf(valor / 3);
    float comCents = (3 * (valor / 3 - floorf(valor / 3))) + floorf(valor / 3);

    if ((valor / 3 - floorf(valor / 3)) <= 0.3)
    {
        printf("Carlos pagará R$ %.2f\nAndré pagará R$ %.2f\nFelipe pagará R$ %.2f", semCents, semCents, comCents);
    }
    else
    {
        printf("Todos deverão pagar: R$ %.2f cada", valor / 3);
    }

    return 0;
}
