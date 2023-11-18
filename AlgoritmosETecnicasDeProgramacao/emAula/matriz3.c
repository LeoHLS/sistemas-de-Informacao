#include <stdio.h>

void main() {

    int matriz[3][3];

    printf("Entre com os valores da matriz[3][3]\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


}