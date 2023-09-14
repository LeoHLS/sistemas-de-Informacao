#include <stdio.h>
#include <stdlib.h>

void main()
{

    int lado1;
    int lado2;
    int lado3;

    printf("Infome um lado do triângulo: ");
    scanf("%i", &lado1);
    printf("Infome um lado do triângulo: ");
    scanf("%i", &lado2);
    printf("Infome um lado do triângulo: ");
    scanf("%i", &lado3);

    if ((abs(lado1 - lado2) < lado3) && (lado3 < abs(lado1 + lado2)) &&
        (abs(lado1 - lado3) < lado2) && (lado2 < abs(lado1 + lado3)) &&
        (abs(lado2 - lado3) < lado1) && (lado1 < abs(lado2 + lado3)))
    {
        printf("Pode ser um triângulo!");
    }
    else
    {
        printf("Não pode ser um triângulo!");
    }
}