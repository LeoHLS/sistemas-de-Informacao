#include <stdio.h>
#include <stdlib.h>

float calcula_media(float *notas, float quantidade)
{
    float media = 0.0;

    for (int i = 0; i < quantidade; i++)
    {
        media += *(notas + i);
    }

    return media / quantidade;
}

void main()
{

    float *notas, media;
    int qntNotas;

    printf("Informe a qunatidade de notas: ");
    scanf("%d", &qntNotas);

    notas = (float *)malloc(qntNotas * sizeof(float));

    for (int i = 0; i < qntNotas; i++)
    {
        printf("Informe a %dª nota: ", i + 1);
        scanf("%f", notas + i);
    }

    media = calcula_media(notas, qntNotas);

    printf("A média é %.2f", media);

    free(notas);
}