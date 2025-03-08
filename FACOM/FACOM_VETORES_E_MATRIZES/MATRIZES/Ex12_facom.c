#include <stdio.h>

int main()
{
    int matriz[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Informe o valor da posicao [%d][%d] da matriz:",i+1,j+1);
            scanf(" %d",&matriz[i][j]);
        }
    }

    printf("\n\n");

    printf("MATRIZ ORIGINAL:\n");
    for (int i=0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    
    int variavel_auxiliar=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j > i)
            {
                variavel_auxiliar = matriz[i][j];
                matriz[i][j] = matriz[j][i];
                matriz[j][i] = variavel_auxiliar;
            }
        }
    }

    printf("\n");

    printf("MATRIZ TRANSPOSTA:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}