#include <stdio.h>

int main()
{
    int mesNascimento, anoNascimento, mesAtual, anoAtual;

    printf("Digite o mês de nascimento (1 a 12): ");
    scanf("%d", &mesNascimento);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o mês atual (1 a 12): ");
    scanf("%d", &mesAtual);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    if (mesNascimento < 1 || mesNascimento > 12 || mesAtual < 1 || mesAtual > 12 || anoNascimento > anoAtual)
    {
        printf("Impossivel realizar o calculo. Anos e/ou meses invalidos.\n");
    }
    else
    {
        int totalDias = 0;

        // Considerando a quantidade de dias em cada mês
        int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Calcula os dias completos de anos inteiros
        if (anoAtual > anoNascimento)
        {
            for (int ano = anoNascimento + 1; ano < anoAtual; ano++)
            {
                for (int mes = 1; mes <= 12; mes++)
                {
                    totalDias += diasPorMes[mes];
                }
            }

            for (int mes = 1; mes <= mesAtual; mes++)
            {
                totalDias += diasPorMes[mes];
            }
        }

        for (int mes = mesNascimento; mes <= mesAtual; mes++)
        {
            totalDias += diasPorMes[mes];
        }

        printf("Total de dias: %d dias.\n", totalDias);
    }

    return 0;
}
