#include <stdio.h>

int main()
{
    int matriz[3][3];
    int soma = 0;

    int linha=0;
    int coluna=2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Informe o valor da posicao [%d][%d] da matriz:",i+1,j+1);
            scanf(" %d",&matriz[i][j]);

            if((i == linha) && (j == coluna))
            {
                soma += matriz[i][j];
                linha++;
                coluna--;
            }
        }
    }

    printf("\n\n");

    printf("MATRIZ:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSOMA: %d",soma);
    return 0;
}