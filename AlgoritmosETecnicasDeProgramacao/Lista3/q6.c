#include <stdio.h>

void imprimirVetor(int *vetor, int tamanho) {
    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[5] = {2, 5, 8, 7, 6};

    imprimirVetor(vetor, 5);

    return 0;
}
