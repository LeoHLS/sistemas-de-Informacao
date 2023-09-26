#include <stdio.h>

int main()
{
    int horas_normais, horas_extras, dependentes;
    float salario_horas_normais = 0, salario_horas_extras = 0, salario_dependentes = 0, salario_liquido = 0, salario_final = 0;

    printf("Quantidade de horas normais trabalhadas no mes: ");
    scanf("%d", &horas_normais);

    printf("Quantidade de horas extras trabalhadas no mes: ");
    scanf("%d", &horas_extras);

    printf("Quantidade de dependentes menores que 6 anos: ");
    scanf("%d", &dependentes);
    if (dependentes > 3)
    {
        printf("Salario calculado para apenas 3 dependentes, os demais %d dependentes nao receberao o auxilio.\n", dependentes - 3);
        dependentes = 3;
    }
    salario_horas_normais = horas_normais * 10;
    salario_horas_extras = horas_extras * 15;
    salario_dependentes = dependentes * 90;

    salario_liquido = salario_horas_normais - (salario_horas_normais * 0.11);

    salario_final = salario_liquido + salario_dependentes + salario_horas_extras;

    printf("Adicional de Horas Normais: R$%.2f\n", salario_horas_normais);
    printf("Adicional de Horas Extras: R$%.2f\n", salario_horas_extras);
    printf("Adicional de Dependentes: R$%.2f\n", salario_dependentes);
    printf("Salario Liquido (Hrs normais - Desconto): R$%.2f\n", salario_liquido);
    printf("Salario Final: R$%.2f\n", salario_final);

    return 0;
}
