#include <stdio.h>
#include <stdlib.h>

char *alocarMemoria() {
    char *endereco = (char *)malloc(40 * sizeof(char));
    return endereco;
}

void main() {

    char *enderecoInicial = alocarMemoria();

    printf("Endereço inicial do bloco alocado: %p\n", enderecoInicial);

    free(enderecoInicial);

}
