#include <stdio.h>

void main () {

    float nota1;
    float nota2;
    float nota3;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    float media = (nota1 + (nota2 * 2) + (nota3 *3)) / 6;

    printf("Sua média ponderada é: %.1f", media);



    


}