#include <stdio.h>


void main () {

    float salarioFuncionario;
    float salarioMinimo;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salarioFuncionario);
    printf("Digite o salário mínimo: ");
    scanf("%f", &salarioMinimo);

    float vezesSalario = salarioFuncionario/salarioMinimo;

    printf("O funcionário recebe %.1fx salários mínimos!", vezesSalario);
}