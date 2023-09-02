#include <stdio.h>

void main () {

    float salario;
    float salarioNovo;

    printf("Insira seu salário: ");
    scanf("%f", &salario);
    
    salarioNovo = salario * 1.15;

    printf("\n\n------CÁLCULO DE AJUSTE DE SALÁRIO------\n\n");

    printf("Salário bruto: R$ %.2f\n", salario);
    printf("Salário reajustado em 15%%: R$ %.2f\n", salarioNovo);
    printf("Desconto INSS de 11%%: R$ %.2f\n", salarioNovo*0.11);
    printf("Desconto FGTS de 8%%: R$ %.2f\n", salarioNovo*0.08);
    printf("Desconto total de INSS + FGTS: R$ %.2f\n", salarioNovo*0.19);
    printf("Salário líquido: R$ %.2f\n", salarioNovo*0.81);
    




}