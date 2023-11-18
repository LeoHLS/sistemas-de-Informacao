#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char senha[] = "Vasco";
    char senhaDigitada[50];

    printf("Digite sua senha: ");
    gets(senhaDigitada);

    if (strcmp(senha, senhaDigitada) == 0)
    {
        printf("Acesso AUTORIZADO!");
    }
    else
    {
        printf("Acesso NEGADO!");
    }
}