#include <stdio.h>

int main()
{
    int matriz[5][5];
    int valor_procurado=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("Informe o valor da posicao [%d][%d] da matriz: ",i+1,j+1);
            scanf(" %d",&matriz[i][j]);
        }
    }
    printf("\nDigite um valor qualquer:");
    scanf(" %d",&valor_procurado);

    int valor_procurado_linha = 0;
    int valor_procurado_coluna = 0;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matriz[i][j] == valor_procurado)
            {
                flag=1;
                valor_procurado_linha = i;
                valor_procurado_coluna = j;
                break;
            }
        }
    }

    printf("\n\n");

    if(flag == 1)
    {
        printf("O valor %d foi encontrado na matriz!\n",valor_procurado);
        printf("LINHA: %d|COLUNA: %d",valor_procurado_linha+1,valor_procurado_coluna+1);
    }
    else
    {
        printf("Nao encontrado!");
    }

    return 0;
}