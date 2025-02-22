#include <stdio.h>

int main()
{
    int matriz[4][4];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Informe o valor da posicao [%d][%d] da matriz:",i+1,j+1);        
            scanf(" %d",&matriz[i][j]);
        }
    }
    
    printf("\n\n");
    printf("MATRIZ ORIGINAL:\n");
    for(int i=0;i<4;i++)
    {
        for (int j=0; j < 4; j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }

    int matriz_produto[4][4];
    int produto=0;
    printf("\nMATRIZ PRODUTO:\n");
    for(int i=0;i<4;i++)
    {
        for (int j=0; j < 4; j++)
        {
            produto = matriz[i][0] * matriz[i][j];
            matriz_produto[i][j] = produto;
            printf(" %d",matriz_produto[i][j]);
        }
        printf("\n");
    }
    return 0;
}