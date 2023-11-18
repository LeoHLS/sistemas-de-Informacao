#include <stdio.h>



int main()
{

    int matriz[3][3];
    int matriz2[3][3];
    int matriz3[3][3];

    printf("Entre com os valores da matriz[3][3]\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matriz2[%d][%d] = ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz3[i][j] = matriz[i][j] + matriz2[i][j]; 
        }
        printf("\n");
    }

    printf("Os valores da Matriz são:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}