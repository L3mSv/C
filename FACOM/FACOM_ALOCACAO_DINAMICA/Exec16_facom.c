#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz, quant_linhas=0, quant_colunas=0;

    printf("A matriz tera quantas linhas: ");
    scanf(" %d", &quant_linhas);

    printf("E quantas colunas: ");
    scanf(" %d", &quant_colunas);

    matriz = malloc(quant_linhas * sizeof(int*));

    for(int i = 0; i < quant_linhas; i++)
    {
        matriz[i] = malloc(quant_colunas * sizeof(int));  
    }

    printf("\n");

    for(int i = 0; i < quant_linhas; i++)
    {
        for(int j = 0; j < quant_colunas; j++)
        {
            printf("Informe o valor da posicao[%d][%d] do vetor: ", i+1, j+1);
            scanf(" %d", &matriz[i][j]);
        }
    }

    printf("\n\n");

    for(int i = 0; i < quant_linhas; i++)
    {
        for(int j = 0; j < quant_colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < quant_colunas; i++)
    {
        for(int j = 0; j < quant_linhas; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}
