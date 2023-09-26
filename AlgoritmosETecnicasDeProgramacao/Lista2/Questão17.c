#include <stdio.h>

int main() {
    int num_sanduiches;
    float queijo_total, presunto_total, carne_total;
    const float peso_queijo = 50.0;
    const float peso_carne = 120.0;

    printf("Digite a quantidade de sanduiches a fazer: ");
    scanf("%d", &num_sanduiches);

    queijo_total = num_sanduiches * 2 * peso_queijo / 1000.0; 
    presunto_total = num_sanduiches * peso_queijo / 1000.0; 
    carne_total = num_sanduiches * peso_carne / 1000.0; 
    printf("Para produzir %d sanduiches será necessário necessários:\n", num_sanduiches);
    printf("Queijo: %.3f kg\n", queijo_total);
    printf("Presunto: %.3f kg\n", presunto_total);
    printf("Carne: %.3f kg\n", carne_total);

    float presunto_disponivel;
    printf("Digite a quantidade de presunto disponivel (kg): ");
    scanf("%f", &presunto_disponivel);

    if (presunto_disponivel < presunto_total) {
        int sanduiches_com_presunto = (int)(presunto_disponivel / (peso_queijo / 1000.0));

        printf("Quantidade de presunto insuficiente para todos os sanduiches.\n");
        printf("Produza %d sanduiches com presunto.\n", sanduiches_com_presunto);

        float mortadela_necessaria = (presunto_total - presunto_disponivel) / (70.0 / 1000.0);

        printf("Sugestao: Utilize %.3f kg de mortadela para produzir o restante dos sanduiches.\n", mortadela_necessaria);

        float presunto_sobrando = presunto_disponivel - (sanduiches_com_presunto * (peso_queijo / 1000.0));

        printf("Quantidade de presunto que sobrou: %.3f kg\n", presunto_sobrando);
    } 

    return 0;
}
