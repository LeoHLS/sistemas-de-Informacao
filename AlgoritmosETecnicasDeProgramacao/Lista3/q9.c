#include <stdio.h>

void trocarConteudo(int *enderecoVar1, int *enderecoVar2) {
    int temp = *enderecoVar1;
    *enderecoVar1 = *enderecoVar2;
    *enderecoVar2 = temp;
}

void main() {
    int valor1, valor2;

    printf("Digite o 1º valor: ");
    scanf("%d", &valor1);

    printf("Digite o 2º valor: ");
    scanf("%d", &valor2);

    printf("Valores originais: %d e %d\n", valor1, valor2);

    trocarConteudo(&valor1, &valor2);

    printf("Valores trocados: %d e %d\n", valor1, valor2);

}
