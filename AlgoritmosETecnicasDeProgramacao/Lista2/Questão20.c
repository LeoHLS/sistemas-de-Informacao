#include <stdio.h>

int main() {

    // Comando a questão informava R$ 1,5 o valor das broas, mas para a saída informada o valor correto seria R$ 1,6
    int qtd_paes, qtd_broas;
    float valor_pao = 0.12, valor_broa = 1.50, valor_reforma, valor_arrecadado, valor_depositado;
    int dias_necessarios;

    printf("Digite a quantidade de paes vendidos: ");
    scanf("%d", &qtd_paes);

    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &qtd_broas);

    float faturamento_broas = qtd_broas * valor_broa;
    float faturamento_paes = qtd_paes * valor_pao;

    valor_arrecadado = faturamento_broas + faturamento_paes;

    printf("Digite o valor da reforma: R$");
    scanf("%f", &valor_reforma);

    valor_depositado = valor_arrecadado * 0.10;

    dias_necessarios = ((int)(valor_reforma / valor_depositado)) + 1;

    printf("\n\nFaturamento com a venda de broas: R$%.2f\n", faturamento_broas);
    printf("Faturamento com a venda de paes: R$%.2f\n", faturamento_paes);
    printf("Faturamento diario (paes + broas): R$%.2f\n", valor_arrecadado);
    printf("Valor do deposito na poupanca: R$%.2f\n", valor_depositado);
    printf("Para pagar a reforma serao necessarios: %d dias\n\n", dias_necessarios);

    if (dias_necessarios >= 120) {
        float valor_diario_meta_120_dias = valor_reforma / 120;
        printf("Para realizar a reforma em 120 dias sera necessario depositar diariamente R$: %.2f\n", valor_diario_meta_120_dias);
    }

    return 0;
}
