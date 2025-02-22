#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Verifica_Numero_na_Matriz(int** matriz, int linhas, int colunas)
{
    int num = 0;

    printf("\nDigite um numero qualquer: ");
    scanf(" %d", &num);

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            if(num == matriz[i][j])
            {
                return 1;
            }
        }
    }

    return 0;
}

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
    srand(time(NULL));

    for(int i = 0; i < quant_linhas; i++)
    {
        for (int j = 0; j < quant_colunas; j++)
        {
            matriz[i][j] = rand() % 11;
        }
    }

    int resultado = Verifica_Numero_na_Matriz(matriz, quant_linhas, quant_colunas);

    if(resultado == 1)
    {
        printf("\nEsta contido!\n");
    }
    else
        printf("\nNao esta contido!\n");

    printf("\n");

    for(int i = 0; i < quant_linhas; i++)
    {
        for (int j = 0; j < quant_colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}