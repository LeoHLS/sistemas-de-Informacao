#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ListaAlunos[40][100];
    int qntAlunos;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qntAlunos);
    getchar();

    for (int i = 0; i < qntAlunos; i++)
    {
        printf("Digite o nome do %dº aluno: ", i);
        gets(ListaAlunos[i]);
    }

    printf("Os valores da Matriz são:\n#######\n\n");

    for (int j = 0; j < qntAlunos; j++)
    {
        printf("%s\n", ListaAlunos[j]);
    }
    printf("\n");

    return 0;
}