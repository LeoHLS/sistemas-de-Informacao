#include <stdio.h>

void main () {

    int dividendo;
    int divisor;


    printf("Insira o valor do dividor: ");
    scanf("%d", &divisor);
    printf("Insira o valor do dividendo: ");
    scanf("%d", &dividendo);

    

    if(divisor == 0) {
        printf("A operação não pode ser realizada!");
    } else {

        printf("A divisão de %d por %d é %.2f", dividendo, divisor, (dividendo/(float)divisor));

    }

    





}   