#include <stdio.h>

void main () {
    int cavalos;
    float valor;

    printf("Informe a quantidade de cavalos: ");
    scanf("%d", &cavalos);

    printf("Informe o valor da ferradura: ");
    scanf("%f", &valor);


    printf("A quantidade de ferraduras necessárias são %d.\nO valor total para a compra das ferraduras é de R$ %.2f", (cavalos*4), (cavalos*4*valor));






}