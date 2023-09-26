#include <stdio.h>

void main()
{

    printf("\n\nVamos calcular a área de um TRAPÉZIO!\n");
    float baseMaior;
    float baseMenor;
    float altura;
    float maiorArea = 0;
    int maiorAreaIdent;
    printf("\nInforme a base maior do trapézio: ");
    scanf("%f", &baseMaior);
    printf("Informe a base menor do trapézio: ");
    scanf("%f", &baseMenor);
    printf("Informe a altura do trapézio: ");
    scanf("%f", &altura);
    float areaTrapezio = ((baseMaior + baseMenor) * altura) / 2;

    printf("\nA área do trapézio é: %.2f", areaTrapezio);

    printf("\n\nVamos calcular a área de um QUADRADO!\n");
    float ladoQuad;
    printf("\nInsira um lado do quadrado: ");
    scanf("%f", &ladoQuad);

    float areaQuadrado = ladoQuad * ladoQuad;

    printf("\nA área do quadrado é: %.2f", areaQuadrado);

    printf("\n\nVamos calcular a área de um RETÂNGULO!\n");
    float lado1;
    float lado2;
    printf("\nInsira um lado do retângulo: ");
    scanf("%f", &lado1);
    printf("Insira o outro lado do retângulo: ");
    scanf("%f", &lado2);

    float areaRetangulo = lado1 * lado2;

    printf("\nA área do retângulo é: %.2f", areaRetangulo);

    printf("\n\nVamos calcular a área de um CÍRCULO!\n");
    float raio;
    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);

    float areaCirculo = (raio * raio) * 3.14159;
    printf("\nA área do círculo é: %.2f", areaCirculo);

    printf("\n\nVamos calcular a área de um TRIÂNGULO!\n");
    float baseTri;
    float alturaTri;
    printf("\nInsira a base do triângulo: ");
    scanf("%f", &baseTri);
    printf("Insira a altura do triângulo: ");
    scanf("%f", &alturaTri);

    float areaTri = (baseTri * alturaTri) / 2;

    printf("\nA área do triângulo é: %.2f", areaTri);

    if (areaTrapezio > maiorArea)
    {
        maiorArea = areaTrapezio;
        maiorAreaIdent = 0;
    }
    if (areaQuadrado > maiorArea)
    {
        maiorArea = areaQuadrado;
        maiorAreaIdent = 1;
    }
    if (areaRetangulo > maiorArea)
    {
        maiorArea = areaRetangulo;
        maiorAreaIdent = 2;
    }
    if (areaCirculo > maiorArea)
    {
        maiorArea = areaCirculo;
        maiorAreaIdent = 3;
    }
    if (areaTri > maiorArea)
    {
        maiorArea = areaTri;
        maiorAreaIdent = 4;
    }
    printf("\n\n");
    switch (maiorAreaIdent)
    {
    case 0:
        printf("O objeto com maior área é o trapézio com %.2f de área.", areaTrapezio);
        break;

    case 1:
        printf("O objeto com maior área é o quadrado com %.2f de área.", areaQuadrado);
        break;
    case 2:
        printf("O objeto com maior área é o retângulo com %.2f de área.", areaRetangulo);
        break;
    case 3:
        printf("O objeto com maior área é o círculo com %.2f de área.", areaCirculo);
        break;
    case 4:
        printf("O objeto com maior área é o triângulo com %.2f de área.", areaTri);
        break;
    default:
        break;
    }
}