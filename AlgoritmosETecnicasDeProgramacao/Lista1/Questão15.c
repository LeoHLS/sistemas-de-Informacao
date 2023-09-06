#include <stdio.h>

void main () {

    int horasNormais;
    int horasExtras;
    int dependentes;

    printf("Informe a quantidade de horas normais trabalhadas: ");
    scanf("%i", &horasNormais);
    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%i", &horasExtras);
    printf("Informe a quantidade de dependentes com, no máximo, 6 anos: ");
    scanf("%i", &dependentes);

    printf("Horas normais: R$ %.2f\ns", (horasNormais*10.0));
    printf("Adicional de Horas Extras: R$ %.2f\n", (horasExtras*15.0));
    printf("Adicional de dependentes: R$ %.2f\n", dependentes*90.0);

    float salarioLiquido = horasNormais * 10.0 * 0.89;

    printf("Salário Líquido (Hrs normais - Impostos): R$ %.2f\n", salarioLiquido);
    printf("Salário Final: R$ %.2f\n", salarioLiquido+(horasExtras*15.0)+(dependentes*90.0));
    



}