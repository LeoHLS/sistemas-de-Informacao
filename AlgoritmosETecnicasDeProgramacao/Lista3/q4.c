#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno //descobri pesquisando que ao definir "Aluno" aqui, posso utilizar a alocação de memória dinâmica durante a execução do código. Talvez isso seja maios avançado no curso, até pq não entendi 100% dos "porquês" disso, mas faz parte da stdlib que estudamos, então deve vale :)
{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float media;

} Aluno;

void main()
{

    struct Aluno *alunos = NULL;
    int numAlunos = 0;
    char resposta;

    do
    {
        alunos = (struct Aluno *)realloc(alunos, (numAlunos + 1) * sizeof(struct Aluno));
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

        alunos[numAlunos].media = (alunos[numAlunos].nota1 + (alunos[numAlunos].nota2 * 2)) / 2;

        numAlunos++;

        printf("Deseja cadastrar outro aluno? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta == 's' || resposta == 'S');

    printf("\nDados dos alunos cadastrados:\n");
    for (int i = 0; i < numAlunos; i++)
    {
        printf("Matricula: %d, Nome: %s, Nota1: %.2f, Nota2: %.2f, Média: %.2f\n",
               alunos[i].matricula, alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].media);
    }
}
