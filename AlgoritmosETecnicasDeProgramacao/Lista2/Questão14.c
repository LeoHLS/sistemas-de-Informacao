#include <stdio.h>

int main() {
    int dia, mes, total_dias = 0;

    printf("Digite o dia final: ");
    scanf("%d", &dia);
    printf("Digite o mes final: ");
    scanf("%d", &mes);
    int dias_por_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes < 1 || mes > 12 || dia < 1 || dia > dias_por_mes[mes]) {
        printf("Impossivel realizar o calculo. Dia e/ou mes invalidos\n");
    } else {
        for (int i = 1; i < mes; i++) {
            total_dias += dias_por_mes[i];
        }

        total_dias += dia;

        printf("Quantidade de dias: %d\n", total_dias);
    }

    return 0;
}
