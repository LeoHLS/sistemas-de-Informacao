#include <stdio.h>

void main()
{

    float nota1;
    float nota2;
    float nota3;
    float nota1Final;
    float nota2Final;
    float nota3Final;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    nota1Final = nota1;
    nota2Final = nota2 * 2;
    nota3Final = nota3 * 3;

    float media = (nota1Final + nota2Final + nota3Final) / 6;

    printf("Sua média ponderada é: %.2f\n", media);
    float maior_nota;

    if (nota1Final >= nota2Final && nota1Final >= nota3Final)
    {
        maior_nota = nota1Final;
    }
    else if (nota2Final >= nota1Final && nota2Final >= nota3Final)
    {
        maior_nota = nota2Final;
    }
    else
    {
        maior_nota = nota3Final;
    }

    if (maior_nota == nota1Final)
    {
        if (nota1Final == nota2Final)
        {
            if (nota1Final == nota3Final)
            {
                printf("As três notas foram iguais!");
            } else
            {
                printf("As notas 1 (%.2f) e 2 (%.2f) foram a maiores notas após o cálculo de pesos, resultanto em %.2f e %.2f, respectivamente.", nota1, nota2, nota1Final, nota2Final);
            }
        }
        else if (nota1Final == nota3Final && nota1Final != nota2Final)
        {
            printf("As notas 1 (%.2f) e 3 (%.2f) foram a maiores notas após o cálculo de pesos, resultanto em %.2f e %.2f, respectivamente.", nota1, nota3, nota1Final, nota3Final);
        }
        else
        {
            printf("A nota 1 (%.2f) é a maior após o cálculo de pesos, resultando em %.2f", nota1, nota1Final);
        }
    }
    else if (maior_nota == nota2Final)
    {
        if (nota2Final == nota3Final)
        {
            printf("As notas 2 (%.2f) e 3 (%.2f) foram a maiores notas após o cálculo de pesos, resultanto em %.2f e %.2f, respectivamente.", nota2, nota3, nota2Final, nota3Final);
        }
        else
        {
            printf("A nota 2 (%.2f) é a maior após o cálculo de pesos, resultando em %.2f", nota2, nota2Final);
        }
        {
            /* code */
        }
    }
    else if (maior_nota == nota3Final)
    {
        printf("A nota 3 (%.2f) é a maior após o cálculo de pesos, resultando em %.2f", nota3, nota3Final);
    }
    else
    {
        printf("Ocorreu algum erro n ocódigo!");
    }

    printf("\n\n\n");
}
