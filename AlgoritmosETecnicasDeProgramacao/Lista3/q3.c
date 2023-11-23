#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;

} Aluno;

void main()
{

    int MAX_ALUNOS = 10;

    Aluno alunos[MAX_ALUNOS];
    int numAlunos = 0;
    char resposta;

    do
    {
        printf("Digite os dados do %dº aluno:\n", numAlunos + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[numAlunos].matricula);
        getchar();
        printf("Nome: ");
        gets(alunos[numAlunos].nome);
        printf("Nota1: ");
        scanf("%f", &alunos[numAlunos].nota1);
        printf("Nota2: ");
        scanf("%f", &alunos[numAlunos].nota2);
        printf("\n");
        
        numAlunos++;

        if (numAlunos < MAX_ALUNOS)
        {
            printf("Deseja cadastrar outro aluno? (s/n): ");
            scanf(" %c", &resposta);
        }
        else
        {
            printf("Número máximo de alunos atingido.\n");
            break;
        }

    } while (resposta == 's' || resposta == 'S');

    printf("\nDados dos alunos cadastrados:\n");
    for (int i = 0; i < numAlunos; i++)
    {
        printf("Matricula: %d, Nome: %s, Nota1: %.2f, Nota2: %.2f\n",
               alunos[i].matricula, alunos[i].nome, alunos[i].nota1, alunos[i].nota2);
    }
}
