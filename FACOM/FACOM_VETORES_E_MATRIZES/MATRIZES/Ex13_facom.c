#include <stdio.h>

#define LINHA 4
#define COLUNA 4
int main()
{
    int matriz[LINHA][COLUNA];

    for(int i = 0; i < LINHA; i++)
    {
        int flag = 1;
        for(int j = 0; j < COLUNA; j++)
        {
            while(flag)
            {
                int possivel_valor=0;

                printf("Informe o valor da posicao [%d][%d] da matriz:",i+1,j+1);
                scanf(" %d",&possivel_valor);

                if(possivel_valor >= 1 && possivel_valor <= 20)
                {
                    matriz[i][j] = possivel_valor;
                    flag = 0;
                }
                else
                    printf("ERRO! o valor deve estar no intervalo [1,20]\n");
            }
            flag = 1;
        }
    }

    printf("\n\n");

    printf("MATRIZ ORIGINAL:\n");
    for (int i = 0; i < LINHA; i++)
    {
       for(int j = 0; j < COLUNA; j++)
       {
        printf(" %d",matriz[i][j]);
       }
       printf("\n");
    }

    printf("\n");

    printf("MATRIZ TRIANGULAR INFERIOR:\n");
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            if(j > i)
            {
                matriz[i][j] = 0;
            }
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}