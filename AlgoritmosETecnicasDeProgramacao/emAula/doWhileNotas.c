#include <stdio.h>
#include <stdlib.h>

void main()
{
    int qntNotas, notaSoma, notaNova, repetir = 0;

    do
    {
        
        qntNotas++;
        printf("Digite uma nota: ");        scanf("%d", &notaNova);
        notaSoma = notaSoma + notaNova;

        printf("Deseja adicionar uma nova nota? (1 para sim e 2 para não) ");
        scanf("%d", &repetir);
    } while (repetir == 1);

    printf("Sua média de notas é: %.2f", notaSoma / (float)qntNotas);
}
