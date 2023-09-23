#include <stdio.h>
#include <stdlib.h>

void main()
{
    srand(time(NULL));
    int escolha = 200;
    int num = rand() % 100 + 1;
    int tentativas = 0;

    printf("BEM-VINDO AO JOGO DE ADIVINHAÇÃO!\n");

    while (escolha != num)
    {
        tentativas++;
        printf("Insira seu palpite de um número entre 1 e 100: ");
        scanf("%d", &escolha);

        if (escolha == num)
        {
            printf("\nVOCÊ ACERTOU! O NÚMERO CORRETO É %d!\n\n\n", num);
            break;
        }
        else
        {
            printf("Você errou.\n\n\n");
            if (escolha < num)
            {
                printf("O número aleatório é maior que o seu!\n");
            }
            else
            {
                printf("O número aleatório escolhido é menor que o seu!\n");
            }
            
        }
    }

    printf("Seu número de tentativas foi: %d\n\n\n", tentativas);
}