#include <stdlib.h>
#include <stdio.h>

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

    int maior_numero = 0;
    int linha_maior_numero;
    int coluna_maior_numero;

    int maior_numero_2 = 0;
    int linha_maior_numero_2;
    int coluna_maior_numero_2;

    int maior_numero_3 = 0;
    int linha_maior_numero_3;
    int coluna_maior_numero_3;

    for(int i = 0; i < quant_linhas; i++)
    {
        for(int j = 0; j < quant_colunas; j++)
        {
            printf("Informe o valor da posicao[%d][%d] da matriz:", i+1, j+1);
            scanf(" %d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < quant_linhas; i++)
    {
        for(int j = 0; j < quant_colunas; j++)
        {
            if(matriz[i][j] > maior_numero)
            {
                maior_numero = matriz[i][j];

                linha_maior_numero = i + 1;
                coluna_maior_numero = j + 1;
            }
        }
    }

    for(int i = 0; i < quant_linhas; i++)
    {
        for(int j = 0; j < quant_colunas; j++)
        {
            if(matriz[i][j] > maior_numero_2 && matriz[i][j] != maior_numero)
            {
                maior_numero_2 = matriz[i][j];
                
                linha_maior_numero_2 = i + 1;
                coluna_maior_numero_2 = j + 1;
            }
        }
    }

    for(int i = 0; i < quant_linhas; i++)
    {
        for(int j = 0; j < quant_colunas; j++)
        {
            if(matriz[i][j] > maior_numero_3 && matriz[i][j] != maior_numero && matriz[i][j] != maior_numero_2)
            {
                maior_numero_3 = matriz[i][j];
                linha_maior_numero_3 = i + 1;
                coluna_maior_numero_3 = j + 1;
            }
        }
    }

    printf("\n\n");

    printf("\nMAIOR VALOR: %d", maior_numero);
    printf("\nlinha: %d", linha_maior_numero);
    printf("\ncoluna: %d\n", coluna_maior_numero);

    printf("\nSEGUNDO MAIOR VALOR: %d", maior_numero_2);
    printf("\nlinha: %d", linha_maior_numero_2);
    printf("\ncoluna: %d\n", coluna_maior_numero_2);

    printf("\nTERCEIRO MAIOR VALOR: %d", maior_numero_3);
    printf("\nlinha: %d", linha_maior_numero_3);
    printf("\ncoluna: %d\n", coluna_maior_numero_3);

    return 0;
}