#include <stdio.h>

typedef struct
{
    float x;
    float y;
    float z;

} Vetor;

Vetor soma_vetor(Vetor v1, Vetor v2)
{

    Vetor resultado;
    resultado.x = v1.x + v2.x;
    resultado.y = v1.y + v2.y;
    resultado.z = v1.z + v2.z;

    return resultado;
}

void main()
{

    Vetor v1, v2, Resultado;

    printf("Digite o valor de X do Vetor 1: ");
    scanf("%f", &v1.x);

    printf("Digite o valor de Y do Vetor 1: ");
    scanf("%f", &v1.y);

    printf("Digite o valor de Z do Vetor 1: ");
    scanf("%f", &v1.z);

    printf("Digite o valor de X do Vetor 2: ");
    scanf("%f", &v2.x);

    printf("Digite o valor de Y do Vetor 2: ");
    scanf("%f", &v2.y);

    printf("Digite o valor de Z do Vetor 2: ");
    scanf("%f", &v2.z);

    Resultado = soma_vetor(v1, v2);

    printf("O vetor resultando da soma é [%.2f, %.2f, %.2f]", Resultado.x, Resultado.y, Resultado.z);
}