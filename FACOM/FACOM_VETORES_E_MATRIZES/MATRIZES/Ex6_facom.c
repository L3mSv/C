#include <stdio.h>

int main()
{
    int matriz1[4][4];
    int matriz2[4][4];
    int matriz_resultado[4][4];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Informe o valor da posicao [%d][%d] da matriz1: ",i+1,j+1);
            scanf(" %d",&matriz1[i][j]);
            printf("Informe o valor da posicao [%d][%d] da matriz2: ",i+1,j+1);
            scanf(" %d",&matriz2[i][j]);

            printf("\n");

            if(matriz1[i][j] >= matriz2[i][j])
            {
                matriz_resultado[i][j] = matriz1[i][j];
            }
            else
                matriz_resultado[i][j] = matriz2[i][j];
        }
    }

    printf("\n\n");

    printf("MATRIZ 1:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf(" %d",matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ 2:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf(" %d",matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ DOS MAIORES VALORES DE CADA POSICAO:\n");
    for (int i=0; i<4; i++)
    {
        for(int j=0;j<4;j++)
        {
            printf(" %d",matriz_resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}