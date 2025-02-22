#include <stdio.h>

int main()
{
    float matriz[3][6];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf("Informe o valor da posicao [%d][%d] da matriz:",i+1,j+1);
            scanf(" %f",&matriz[i][j]);
        }
    }

    printf("\n\n");

    printf("MATRIZ:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf(" %.2f",matriz[i][j]);
        }
        printf("\n");
    }

    float soma = 0.0;
    float media_aritmetica = 0.0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(j%2!=0)
            {
                soma += matriz[i][j];
            }

            if(j == 2 || j == 4)
            {
                media_aritmetica += matriz[i][j];
            }

            if(j == 6)
            {
               matriz[i][j] = matriz[i][1] + matriz[i][2]; 
            }
        }
    }
    media_aritmetica /= 6;

    printf("\n");

    printf("MATRIZ MODIFICADA:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf(" %.2f",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("SOMA DOS ELEMENTOS DAS COLUNAS IMPARES: %.2f",soma);

    printf("\n");

    printf("MEDIA ARITMETICA DOS ELEMENTOS DA 2o E 4o COLUNAS: %.2f",media_aritmetica);

    return 0;
}