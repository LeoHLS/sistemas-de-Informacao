#include <stdio.h>

int main() {
    int qnt_latas, qnt_garrafas_600ml, qnt_garrafas_2l;
    float total_latas, total_garrafas_600ml;

    // Margem de lucro por unidade
    float margem_lata_350ml = 0.15;
    float margem_garrafa_600ml = 0.09;

    printf("Quantidade de latas de 350ml compradas: ");
    scanf("%d", &qnt_latas);
    printf("Quantidade de garrafas de 600ml compradas: ");
    scanf("%d", &qnt_garrafas_600ml);
    printf("Quantidade de garrafas de 2l compradas: ");
    scanf("%d", &qnt_garrafas_2l);

    total_latas = qnt_latas * 350.0 / 1000.0;
    total_garrafas_600ml = qnt_garrafas_600ml * 600.0 / 1000.0;

    printf("Total de litros: %.2f litros\n", total_latas + total_garrafas_600ml + (qnt_garrafas_2l*2));
    
    if (qnt_garrafas_600ml * margem_garrafa_600ml >= qnt_latas * margem_lata_350ml) {
        float quantidade_sugerida = total_latas / 0.6;
        printf("Considere substituir a compra de %d latas de 350 ml por %.2f garrafas de 600ml e oferecer uma promoção.\n", qnt_latas, quantidade_sugerida);
    }

    return 0;
}
