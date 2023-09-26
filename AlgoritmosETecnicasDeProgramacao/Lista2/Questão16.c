#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro positivo de 1 a 4 digitos: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 9999)
    {
        printf("Numero invalido!\n");
    }
    else
    {
        int unidades = numero % 10;
        int dezenas = (numero / 10) % 10;
        int centenas = (numero / 100) % 10;
        int milhares = (numero / 1000) % 10;

        if (numero >= 1000)
        {
            printf("MILHARES = %d\n", milhares);
        }
        if (numero >= 100)
        {
            printf("CENTENA = %d\n", centenas);
        }
        if (numero >= 10)
        {
            printf("DEZENA = %d\n", dezenas);
        }
        if (numero > 0)
        {
            printf("UNIDADE = %d\n", unidades);
        }
    }

    return 0;
}
