#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_NOME 50

struct Produto{
    int codigo_de_identificacao;
    char nome_do_produto[TAMANHO_NOME];
    int quantidade_disponivel;
    float preco;

};

int main()
{
    struct Produto produto;

    int n = 0;

    printf("Informe a quantidade de produtos: ");
    scanf(" %d", &n);

    printf("\n\n");

    int maior_preco = 0;
    char nome_maior_preco[TAMANHO_NOME];

    int maior_quantidade = 0;
    char nome_maior_quantidade[TAMANHO_NOME];
    
    for(int i = 0; i < n; i++)
    {
        printf("PRODUTO %d\n", i+1);

        printf("Informe o codigo de identificacao: ");
        scanf(" %d", &produto.codigo_de_identificacao);

        printf("Informe o nome do produto: ");
        getchar();
        fgets(produto.nome_do_produto, TAMANHO_NOME, stdin);

        printf("Informe a quantidade do produto: ");
        scanf(" %d", &produto.quantidade_disponivel);

        if(produto.quantidade_disponivel > maior_quantidade)
        {
            maior_quantidade = produto.quantidade_disponivel;
            for(int j = 0; j < TAMANHO_NOME; j++)
            {
                nome_maior_quantidade[j] = produto.nome_do_produto[j];
            }
        }

        printf("Informe o preco: ");
        scanf(" %f", &produto.preco);

        if(produto.preco > maior_preco)
        {
            maior_preco = produto.preco;
            for(int j = 0; j < TAMANHO_NOME; j++)
            {
                nome_maior_preco[j] = produto.nome_do_produto[j];
            }
        }

        printf("\n");

    }

    printf("\n");

    printf("MAIOR PRECO: %s", nome_maior_preco);
    printf("MAIOR QUANTIDADE: %s", nome_maior_quantidade);

    return 0;
}