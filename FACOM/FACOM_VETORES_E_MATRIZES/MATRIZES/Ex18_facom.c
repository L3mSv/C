#include <stdio.h>

int main()
{
    int matriz[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Informe um valor para a posicao [%d][%d] na matriz:",i+1,j+1);
            scanf(" %d",&matriz[i][j]);
        }
    }

    int vetor[3]={0};
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == 0)
            {
                vetor[i] += matriz[i][j];
            }
            else if(i == 1)
            {
                vetor[i] += matriz[i][j];
            }
            else
                vetor[i] += matriz[i][j];
        }
    }
    
    printf("\n\n");

    for(int i = 0; i < 3 ;i++)
    {
        printf(" %d\n",vetor[i]);
    }
    return 0;
}