#include <stdio.h>
#include <limits.h>

int main()
{
    int matriz[4][4];
    int maior_valor = INT_MIN;
    int maior_valor_coluna;
    int maior_valor_linha;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Informe o valor da posicao matriz[%d][%d]: ",i+1,j+1);
            scanf(" %d",&matriz[i][j]);

            if(maior_valor < matriz[i][j])
            {
                maior_valor = matriz[i][j];
                maior_valor_coluna = j;
                maior_valor_linha = i;
            }
        }
    }

    printf("\n\n");

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MAIOR VALOR: %d|LINHA: %d|COLUNA: %d",maior_valor,maior_valor_linha+1,maior_valor_coluna+1);
    return 0;
}