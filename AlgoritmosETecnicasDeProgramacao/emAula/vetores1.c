#include <stdio.h>

void main()
{

    float media, somaNotas;
    int qntNotas;

    printf("Digite a quantidade de notas: ");
    scanf("%i", &qntNotas);

    float notas[qntNotas];

    for (int i; i < qntNotas; i++)
    {

        printf("Digite a %iº nota: ", i+1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }

    printf("\nA media das notas é: %.2f\n\n", somaNotas / qntNotas);

    for (int i; i < qntNotas; i++)
    {
        printf("A %iº nota é %.2f\n", i+1, notas[i]);
    }
}