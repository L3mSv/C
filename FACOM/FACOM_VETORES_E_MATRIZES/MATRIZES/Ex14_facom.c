#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 5
#define COLUNA 5
int main()
{
    int cartela_bingo[LINHA][COLUNA];
    int contador_linha = 0;
    int contador_coluna = 0;

    srand(time(NULL));


    do
    {
        cartela_bingo[contador_linha][contador_coluna] = rand() % 100;
        int flag = 1;

        for(int i = 0; i <= contador_linha; i++)
        {
            if( contador_linha != 0)
            {
                while(i < contador_linha)
                {
                    for(int k = 0; k < 5; k++)
                    {
                        if(cartela_bingo[i][k] == cartela_bingo[contador_linha][contador_coluna])
                        {
                            flag = 0;
                        }
                    }
                    i++;
                }
            }
            
            for(int j = 0; j < contador_coluna; j++)
            {
                if(cartela_bingo[contador_linha][contador_coluna] == cartela_bingo[i][j])
                {
                    flag = 0;
                }
            }
        }

        if(flag)
        {
            contador_coluna++;
            if(contador_coluna == 5)
            {
                contador_linha++;
                contador_coluna = 0;
            }
        }
            
        

    }
    while(contador_coluna != COLUNA && contador_linha != LINHA); 

    printf("CARTELA DE BINGO:\n");
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf(" %d",cartela_bingo[i][j]);
        }
        printf("\n");
    }

    return 0;
}