#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int idade;
    char nome[100];
    char endereço[100];
} Registro;

void main()
{
    int qntPessoas;

    printf("Digite quantas pessoas deseja cadastrar: ");
    scanf("%i", &qntPessoas);
    Registro pessoa[qntPessoas];

    for (int i = 0; i < qntPessoas; i++)
    {
        getchar();
        printf("\n\nRegistro da %iº pessoa\n\n", i + 1);
        printf("Digite seu nome: ");
        gets(pessoa[i].nome);
        printf("Digite seu endereço: ");
        gets(pessoa[i].endereço);
        printf("Digite sua idade: ");
        scanf("%i", &pessoa[i].idade);
    }

    for (int i = 0; i < qntPessoas; i++)
    {
        printf("A %iº pessoa se chama %s mora em %s e tem %i anos.\n", i + 1, pessoa[i].nome, pessoa[i].endereço, pessoa[i].idade);
    }
}