#include <stdio.h>
#include <stdlib.h>

typedef struct Dados {
    int inteiro1;
    int inteiro2;
    float flutuante;
} Dados;

void main() {
    struct Dados *blocoDeMemoria = (struct Dados *)malloc(40 * sizeof(struct Dados));

    printf("Endereço inicial do bloco alocado: %p\n", blocoDeMemoria);

    free(blocoDeMemoria);

}
