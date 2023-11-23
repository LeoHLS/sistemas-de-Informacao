#include <stdio.h>

void main() {
    int valor1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor1);

    int *ptr = &valor1;

    printf("Conteúdo apontado por ptr: %d\n", *ptr);

}
