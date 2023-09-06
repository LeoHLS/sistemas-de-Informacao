#include <stdio.h>
#include <math.h>

int main () {

    float valor;

    printf("Informe o valor da conta: R$ ");
    scanf("%f", &valor);

    float semCents = floorf(valor)/3;
    float comCents = (floorf(valor)/3)+(valor - floorf(valor));

    printf("Carlos pagará R$ %.2f\nAndré pagará R$ %.2f\nFelipe pagará R$ %.2f", semCents, semCents, comCents);
    

    return 0;

}
