#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char operador[2]; // Alterado para tamanho 2
    float valor;

    printf("Informe a operação desejada [+, -, *, /] ");
    scanf("%s", operador); // Alterado para %s para ler uma string

    printf("Digite um valor inteiro para calcular sua tabuada: ");
    scanf("%f", &valor);
    int i;

    if (strcmp(operador, "+") == 0)
    {
        printf("\n\n------------Tabuada de SOMA------------\n\n");

        for (i = 0; i < 11; ++i)
        {
            printf("%.0f + %d = %.2f\n", valor, i, (valor + i));
        }
    }
    else if (strcmp(operador, "-") == 0)
    {
        printf("\n\n------------Tabuada de SUBTRAÇÃO------------\n\n");

        for (i = 0; i < 11; ++i)
        {
            printf("%.0f - %d = %.2f\n", valor, i, fabs(valor - i));
        }
    }
    else if (strcmp(operador, "*") == 0)
    {
        printf("\n\n------------Tabuada de MULTIPLICAÇÃO------------\n\n");

        for (i = 0; i < 11; ++i)
        {
            printf("%.0f x %d = %.2f\n", valor, i, (valor * i));
        }
    }
    else if (strcmp(operador, "/") == 0)
    {
        printf("\n\n------------Tabuada de DIVISÃO------------\n\n");

        for (i = 0; i < 11; ++i)
        {
            if (i != 0)
            {
                printf("%.0f / %d = %.2f\n", valor, i, (valor / i));
            }
            else
            {
                printf("Não existe divisão por zero!\n");
            }
        }
    }
    else
    {
        printf("Operador digitado (%s) não reconhecido!\n", operador);
    }

    return 0;
}

