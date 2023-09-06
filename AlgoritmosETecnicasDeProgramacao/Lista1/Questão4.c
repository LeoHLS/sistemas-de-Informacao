#include <stdio.h>
#include <stdlib.h>

void main () {
    float valor;

    printf("Digite um valor inteiro para calcular sua tabuada: ");
    scanf("%f", &valor);

    int i;

    printf("\n\n------------Tabuada de SOMA e SUBTRAÇÃO------------\n\n");

    for(i=0; i<11; ++i) {
        printf("%.0f + %d = %.2f", valor, i, (valor + i));
        printf("\t\t%.0f - %d = %.2f\n", valor, i, fabs(valor - i));
    }


    printf("\n\n------------Tabuada de MULTIPLICAÇÃO e DIVISÃO------------\n\n");

    for(i=0; i<11; ++i) {
        printf("%.0f x %d = %.2f", valor, i, (valor * i));
        if (i!=0) {printf("\t\t%.0f / %d = %.2f\n", valor, i, (valor/i));} else {printf("\t\tNão existe divisão por zero!\n");}
    }


    

}