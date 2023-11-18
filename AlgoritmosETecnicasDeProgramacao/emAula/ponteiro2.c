#include <stdio.h>

void main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int *px;

    px = &x;

    for (int i = 0; i < 5; i++)
    {
        printf("O valor da posição %d do vetor é %d\n\n", i, *(px + i));
    }   
}