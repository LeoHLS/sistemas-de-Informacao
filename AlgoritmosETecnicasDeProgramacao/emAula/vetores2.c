#include <stdio.h>

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int vetorInvertido[sizeof(vetor) / sizeof(int)];

    for (int i; i < sizeof(vetor) / sizeof(int); i++)
    {
        vetorInvertido[((sizeof(vetor) / sizeof(int)) - i) - 1] = vetor[i];

        printf("A posição é: %d e foi adicionado o valor: %i\n", sizeof(vetor) / sizeof(int) - i, vetorInvertido[(sizeof(vetor) / sizeof(int)) - i]);
    }

    printf("\nO vetor invertido é: \n");

    for (int i; i < sizeof(vetor) / sizeof(int); i++)
    {
        printf("%i \n", vetorInvertido[i]);
    }

    return 0;
}