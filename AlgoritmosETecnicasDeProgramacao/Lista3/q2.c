#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
    float media;

} Aluno;

Aluno encontraMaiorNota1(Aluno aluno[5])
{
    Aluno maior;
    maior.nota1 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].nota1 > maior.nota1)
        {
            maior = aluno[i];
        }
    }

    return maior;
};

Aluno encontraMaiorMedia(Aluno aluno[5])
{
    Aluno maior;
    maior.media = 0;
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].media > maior.media)
        {
            maior = aluno[i];
        }
    }

    return maior;
};

Aluno encontraMenorMedia(Aluno aluno[5])
{
    Aluno menor;
    menor.media = 9999999999999;
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].media < menor.media)
        {
            menor = aluno[i];
        }
    }

    return menor;
};

void main()
{

    setlocale(LC_ALL, "Portuguese");

    Aluno maiorNota1, maiorMedia, menorMedia;
    float medias[5];
    Aluno alunos[5];
    for (int i = 0; i < 5; i++)
    {
        float media;
        printf("REGISTRO: %dº ALUNO\n\n", i + 1);
        printf("Matrícula: ");
        scanf("%i", &alunos[i].matricula);
        getchar();
        printf("Nome: ");
        gets(alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
        printf("\n");

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }

    printf("\nREGISTROS FINALIZADOS\n\n");

    maiorNota1 = encontraMaiorNota1(alunos);
    maiorMedia = encontraMaiorMedia(alunos);
    menorMedia = encontraMenorMedia(alunos);
    printf("O aluno com maior nota 1 se chama %s com %.2f\n", maiorNota1.nome, maiorNota1.nota1);
    printf("O aluno com maior média se chama %s com %.2f\n", maiorMedia.nome, maiorMedia.media);
    printf("O aluno com menor média se chama %s com %.2f\n\n", menorMedia.nome, menorMedia.media);

    for (int i = 0; i < 5; i++)
    {
        if (alunos[i].media >= 6)
        {
            printf("%s foi APROVADO com média de %.2f\n", alunos[i].nome, alunos[i].media);
        }
        else
        {
            printf("%s foi REPROVADO com média de %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}