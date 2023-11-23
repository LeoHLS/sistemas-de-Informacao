#include <stdio.h>

typedef struct Produto
{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
} Produto;

int buscarProduto(struct Produto produtos[], int codigo, int numProdutos)
{
    for (int i = 0; i < numProdutos; i++)
    {
        if (produtos[i].codigo == codigo)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int MAX_PRODUTOS = 5;
    struct Produto estoque[MAX_PRODUTOS];
    int numProdutos = 5;
    for (int i = 0; i < numProdutos; i++)
    {
        printf("Digite os dados do produto %d:\n", i + 1);
        estoque[i].codigo = i + 1;
        printf("Código: %d\n", estoque[i].codigo);
        printf("Nome: ");
        scanf("%s", estoque[i].nome);
        printf("Preço: ");
        scanf("%f", &estoque[i].preco);
        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
    }
    int codigoPedido, quantidadePedido;
    float totalPedido = 0;
    char resposta;

    printf("\nDigite os pedidos (código do produto e quantidade):\n");

    do
    {
        printf("Código do produto: ");
        scanf("%d", &codigoPedido);

        printf("Quantidade desejada: ");
        scanf("%d", &quantidadePedido);
        int indiceProduto = buscarProduto(estoque, codigoPedido, numProdutos);

        if (indiceProduto != -1)
        {
            if (estoque[indiceProduto].quantidade >= quantidadePedido)
            {
                estoque[indiceProduto].quantidade -= quantidadePedido;

                totalPedido += quantidadePedido * estoque[indiceProduto].preco;
            }
            else
            {
                printf("Erro: Quantidade indisponível do produto %d - %s.\n", estoque[indiceProduto].codigo, estoque[indiceProduto].nome);
            }
        }
        else
        {
            printf("Erro: Código inexistente - %d.\n", codigoPedido);
        }

        printf("Inserir mais algum produto ao pedido? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta == 's' || resposta == 'S');

    printf("\nValor total do pedido: R$%.2f\n", totalPedido);
    printf("\nEstoque Atualizado:\n");
    printf("%-10s%-15s%-10s\n", "Código", "Nome", "Quantidade");

    for (int i = 0; i < numProdutos; i++)
    {
        printf("%-10d%-15s%-10d\n", estoque[i].codigo, estoque[i].nome, estoque[i].quantidade);
    }

    return 0;
}
