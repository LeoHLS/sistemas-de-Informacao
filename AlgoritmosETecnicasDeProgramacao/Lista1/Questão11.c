#include <stdio.h>

void main () {
    float litrosNecessarios;
    printf("Digite a quantidade de suco necessária em litros: ");
    scanf("%f", &litrosNecessarios);
    float litroAgua = litrosNecessarios*0.8;
    float litroSuco = litrosNecessarios*0.2;

    printf("A quantidade necessária de água é %.2f litros e de suco é de %.2f litros.\n\n", litroAgua, litroSuco);
}