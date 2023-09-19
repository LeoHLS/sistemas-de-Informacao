#include <stdio.h>

int main()
{

    float salario;
    float salarioNovo;
    float inss;
    float fgts;
    float ir;

    printf("Insira seu salário: ");
    scanf("%f", &salario);

    salarioNovo = salario * 1.05;
    inss = salarioNovo * 0.11;
    fgts = salarioNovo * 0.08;

    if (salarioNovo <= 1903.98)
    {
        ir = 0;
    }
    else if (salarioNovo > 1903.98 && salarioNovo <= 2826.65)
    {
        ir = salarioNovo * 0.075;
    }
    else if (salarioNovo > 2826.65 && salarioNovo <= 3751.05)
    {
        ir = salarioNovo * 0.15;
    }
    else if (salarioNovo > 3751.05 && salarioNovo <= 4664.68)
    {
        ir = salarioNovo * 0.225;
    }
    else
    {
        ir = salarioNovo * 0.275;
    }

    float salarioLiquido = salarioNovo - (inss + fgts + ir);

    printf("\n\n------CÁLCULO DE AJUSTE DE SALÁRIO------\n\n");

    printf("Salário bruto: R$ %.2f\n", salario);
    printf("Salário reajustado em 5%%: R$ %.2f\n", salarioNovo);
    printf("Desconto INSS de 11%%: R$ %.2f\n", salarioNovo * 0.11);
    printf("Desconto FGTS de 8%%: R$ %.2f\n", salarioNovo * 0.08);
    printf("Desconto IR: R$ %.2f\n", ir);
    printf("Desconto total de INSS + FGTS + IR: R$ %.2f\n", inss + fgts + ir);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    if(salario > salarioLiquido) {
        printf("O novo salario final é menor do que o salário recebido antes do aumento!");
    }


    return 0;
}