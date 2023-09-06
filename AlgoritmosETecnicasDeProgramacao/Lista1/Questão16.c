#include <stdio.h>
#include <math.h>
#include <tgmath.h>

void main () {

    float fatAnterior;

    printf("Informe o faturamento do mês anterior: R$ ");
    scanf("%f", &fatAnterior);

    float meta = fatAnterior * 1.2;

    printf("A meta do próximo mês é de R$ %.2f, com um aumento de R$ %.2f.", meta, meta-fatAnterior);
    printf("A quantidade estimada de peças a serem vendidas para o alcance da meta:\n\nApenas o produto 1: %.2f peças\nApenas produto 2: %.2f peças\nApenas produto 3: %.2f peças", (meta/150), (meta/220), (meta/97));
    
}