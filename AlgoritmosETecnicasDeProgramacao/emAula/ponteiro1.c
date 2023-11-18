#include <stdio.h>

void soma(int *x)
{
    *x = *x + 1;
}

void main()
{
    int x = 5;
    int *px;
    px = &x;

    printf("Endereço de x é %p\n", &x);
    printf("O valor de x é %d\n\n", x);
    printf("O endereço de P é %p\n", &px);
    printf("O endereço dentro de P é %p\n", px);
    printf("O valor de Px é %d\n", *px);

    soma(px);
    printf("\n################################\n\n");

    printf("Endereço de x é %p\n", &x);
    printf("O valor de x é %d\n\n", x);
    printf("O endereço de P é %p\n", &px);
    printf("O endereço dentro de P é %p\n", px);
    printf("O valor de Px é %d\n\n\n", *px);
}