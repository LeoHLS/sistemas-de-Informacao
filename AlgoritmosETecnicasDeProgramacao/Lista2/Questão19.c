#include <stdio.h>

int main() {
    float fat_anterior, fat_necessario = 0, qnt_necessaria = 0;
    int cod_produto;
    printf("Digite o valor de faturamento do último mês: R$");
    scanf("%f", &fat_anterior);
    printf("\n===Código dos Produtos===\nProduto 1: 101\nProduto 2: 122\nProduto 3: 163\n\n");

    printf("Digite o código do produto que se deseja bater a meta: ");
    scanf("%d", &cod_produto);

    if (cod_produto == 101) {
        fat_necessario = fat_anterior * 1.20;
        qnt_necessaria = (fat_necessario - fat_anterior) / 150;
    } else if (cod_produto == 122) {
        fat_necessario = fat_anterior * 1.20;
        qnt_necessaria = (fat_necessario - fat_anterior) / 220;
    } else if (cod_produto == 163) {
        fat_necessario = fat_anterior * 1.20;
        qnt_necessaria = (fat_necessario - fat_anterior) / 97;
    } else {
        printf("Codigo de produto nao encontrado!\n");
        return 1;
    }

    printf("Faturamento necessário para atingir a meta de 20%%: R$%.2f\n", fat_necessario);
    printf("Quantidade necessária de peças: %.2f\n", qnt_necessaria);

    

    return 0;
}
