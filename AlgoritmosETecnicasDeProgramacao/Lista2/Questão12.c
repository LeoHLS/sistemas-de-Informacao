#include <stdio.h>
#include <stdlib.h>

void flush_in()
{
    int ch;
    while ((ch = fgetc(stdin)) != EOF && ch != '\n')
    {
    }
}

int main()
{
    float litrosNecessarios;
    float percentAgua;
    float percentSuco;
    float newPercentAgua;
    float newPercentSuco;
    char enquadrar;

    printf("Digite a quantidade de suco necessaria em litros: ");
    scanf("%f", &litrosNecessarios);
    printf("Digite o percentual (%%) de concentracao da agua: ");
    scanf("%f", &percentAgua);
    printf("Digite o percentual (%%) de concentracao da suco: ");
    scanf("%f", &percentSuco);

    if ((percentAgua + percentSuco) != 100)
    {

        printf("Os valores de concentracao nao totalizam 100%%.\nDeseja enquadrar os valores em escala de 100%% [s|n]?: ");
        scanf(" %c%*[^\n]", &enquadrar);

        if (enquadrar == 's')
        {
            newPercentAgua = percentAgua / (percentAgua + percentSuco);
            newPercentSuco = percentSuco / (percentAgua + percentSuco);
            printf("O novo percentual do suco é %.2f%% e o da água é %.2f%%\n\n", newPercentSuco * 100, newPercentAgua * 100);
            printf("A quantidade necessária de água é %.2f litros e de suco é de %.2f litros.\n\n", newPercentAgua * litrosNecessarios, newPercentSuco * litrosNecessarios);
        }
        else
        {
            printf("Valores de concentração incorretos. Processo finalizado !");
            exit(1);
        }
    }
    else
    {
        printf("A quantidade necessária de água é %.2f litros e de suco é de %.2f litros.\n\n", percentAgua / 100 * litrosNecessarios, percentSuco / 100 * litrosNecessarios);
    }

    return 0;
}
