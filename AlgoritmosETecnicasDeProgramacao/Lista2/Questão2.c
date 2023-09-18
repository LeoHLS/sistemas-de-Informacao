#include <stdio.h>


void main () {

    float salarioFuncionario;
    float salarioMinimo;

    printf("Digite o salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salarioFuncionario);

    float vezesSalario = salarioFuncionario/salarioMinimo;

    if (salarioFuncionario < salarioMinimo) {
        printf("O funcionário recebe menos que um salário mínimo!");
    } else {printf("O funcionário recebe %.1fx salários mínimos!", vezesSalario);}

    
}