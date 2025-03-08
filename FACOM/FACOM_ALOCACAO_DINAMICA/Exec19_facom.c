#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_NOME 30

int main()
{
    char **matriz_nomes;
    int quant_nomes = 0;

    printf("Numero maximo de nomes armazenados: ");
    scanf(" %d", &quant_nomes);

    matriz_nomes = malloc(quant_nomes * sizeof(char*));
    for(int i = 0; i < TAMANHO_NOME; i++)
    {
        matriz_nomes = malloc(TAMANHO_NOME * sizeof(char*));
    }

    int opcao = 0;
    do
    {
        printf("\nEscolha uma opcao: \n");
        printf("\n[1] Gravar um nome em uma linha da matriz\n");
        printf("\n[2] Apagar o nome contido em uma linha da matriz\n");
        printf("\n[3]  Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome\n");
        printf("\n[4] Informar um nome, procurar a linha onde ele se encontra e apagar\n");
        printf("\n[5] Pedir para recuperar o nome contido em uma linha da matriz\n");
        printf("\n[0] SAIR\n");

        printf("\n");

        scanf(" %d", &opcao);

        if (opcao == 0)
        {
            //VAZIO
        }
        else if(opcao == 1)
        {
            int linha = 0;

            printf("Escolha uma linha da matriz: ");
            scanf(" %d", &linha);

            for(int i = 0; i < linha; i++)
            {
                printf("\nDigite o nome: ");
                fgets(matriz_nomes[i], TAMANHO_NOME, stdin);
                
            }
        }
        else if (opcao == 2)
        {
            int linha = 0;

            printf("Escolha uma linha da matriz 0 a %d: ", quant_nomes);
            scanf(" %d", &linha);

            matriz_nomes[linha] = NULL;
        }
        else if (opcao == 3)
        {

        }
        else if (opcao == 4)
        {

        }
        else if (opcao == 5)
        {

        }
        else
            printf("ERRO! opcao n existe!");



        if(opcao != 0)
        {
            printf("\nMATRIZ:\n");
            for(int i = 0; i < quant_nomes; i++)
            {
                for(int j = 0; j < TAMANHO_NOME; j++)
                {
                    printf(" %s", matriz_nomes[i][j]);
                }
                printf("\n");
            }
        }

    } while (opcao != 0);
    

    return 0;
}