#include <stdio.h>

int main()
{
    int matriz[4][4];
    int contador_de_maiores_q_10=0;
    int vetor_maiores_q_10[contador_de_maiores_q_10];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Informe um valor para a posicao [%d][%d] da matriz:",i+1,j+1);
            scanf(" %d",&matriz[i][j]);

            if(matriz[i][j] > 10)
            {
                vetor_maiores_q_10[contador_de_maiores_q_10++] = matriz[i][j];
            }
        }
    }

    printf("\n\n");
    
    printf("Quant.maiores que 10: %d\n",contador_de_maiores_q_10);
    printf("\nVETOR:\n");
    for(int i=0;i<contador_de_maiores_q_10;i++)
    {
        printf(" %d",vetor_maiores_q_10[i]);
    }

    return 0;
}