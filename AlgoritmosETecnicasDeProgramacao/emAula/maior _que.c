#include <stdio.h>

void main () {
    float valor1;
    float valor2;

    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);

    if(valor1 > valor2) {
        printf("%.2f (primeiro valor) é maior que %.2f (segundo valor).", valor1, valor2);
    } else if ( valor2 > valor1) {
        printf("%.2f (segundo valor) é maior que %.2f (primeiro valor).", valor2, valor1);
    } else if (valor1 == valor2) {
        printf("Os valor são iguais!");
    }

    printf("\n\n\n\n\n");



}