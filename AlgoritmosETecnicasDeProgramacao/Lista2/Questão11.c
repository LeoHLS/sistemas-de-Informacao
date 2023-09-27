#include <stdio.h>

void main()
{

    int mes_aniversario, ano_aniversario, ano_atual, mes_atual, total_dias = 0;
    printf("Digite o mes de aniversario: ");
    scanf("%d", &mes_aniversario);
    printf("Digite o ano de aniversario: ");
    scanf("%d", &ano_aniversario);
    printf("Digite o mes atual: ");
    scanf("%d", &mes_atual);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    int dias_por_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes_atual < 1 || mes_atual > 12 || mes_aniversario < 1 || mes_aniversario > 12 || ano_atual < ano_aniversario || (mes_atual < mes_aniversario && ano_aniversario <= ano_atual))
    {
        printf("Impossivel realizar o calculo. Dia e/ou mes invalidos\n");
    }
    else
    {

        if (ano_atual > ano_aniversario + 1)
        {

            for (int mes = 1; mes <= 12; mes++)
            {
                total_dias += dias_por_mes[mes];
            }

            total_dias = total_dias * (ano_atual - ano_aniversario - 1);
        }

        if (ano_atual > ano_aniversario)
        {
            for (int i = mes_aniversario; i <= 12; i++)
            {
                total_dias += dias_por_mes[i];
            }

            for (int i = 1; i <= mes_atual; i++)
            {

                total_dias += dias_por_mes[i];
            }
        }
        else
        {
            for (int i = mes_aniversario; i <= mes_atual; i++)
            {
                total_dias += dias_por_mes[i];
            }
        }

        printf("A idade desta pessoa em dias e: %d", total_dias);
    }
}