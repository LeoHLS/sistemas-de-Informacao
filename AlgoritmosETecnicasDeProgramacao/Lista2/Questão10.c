#include <stdio.h>

void main () {


    printf("\n\nVamos calcular a área de um TRAPÉZIO!\n");
    float baseMaior;
    float baseMenor;
    float altura;
    printf("\nInforme a base maior do trapézio: ");
    scanf("%f", &baseMaior);
    printf("Informe a base menor do trapézio: ");
    scanf("%f", &baseMenor);
    printf("Informe a altura do trapézio: ");
    scanf("%f", &altura);
    float areaTrapezio = ((baseMaior+baseMenor)*altura)/2;

    printf("\nA área do trapézio é: %.2f", areaTrapezio);
    

    printf("\n\nVamos calcular a área de um QUADRADO!\n");
    float ladoQuad;
    printf("\nInsira um lado do quadrado: ");
    scanf("%f", &ladoQuad);

    float areaQuadrado = ladoQuad*ladoQuad;

    printf("\nA área do quadrado é: %.2f", areaQuadrado);

    printf("\n\nVamos calcular a área de um RETÂNGULO!\n");
    float lado1;
    float lado2;
    printf("\nInsira um lado do retângulo: ");
    scanf("%f", &lado1);
    printf("Insira o outro lado do retângulo: ");
    scanf("%f", &lado2);

    float areaRetangulo = lado1*lado2;

    printf("\nA área do retângulo é: %.2f", areaRetangulo);


    printf("\n\nVamos calcular a área de um CÍRCULO!\n");
    float raio;
    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);
    printf("\nA área do círculo é: %.2f", (raio*raio)*3.14159);


    printf("\n\nVamos calcular a área de um TRIÂNGULO!\n");
    float baseTri;
    float alturaTri;
    printf("\nInsira a base do triângulo: ");
    scanf("%f", &baseTri);
    printf("Insira a altura do triângulo: ");
    scanf("%f", &alturaTri);

    float areaTri =( baseTri*alturaTri)/2;

    printf("\nA área do triângulo é: %.2f", areaTri);










}