#include <stdio.h>

#define LINHAS 2
#define COLUNAS 10
#define CASAS 10
int main()
{
    char matriz[LINHAS][COLUNAS];
    char vetor[CASAS];

    for(int i = 0; i < LINHAS; i++)
    {
        printf("ALUNO %d\n",i+1);
        for(int j = 0; j < COLUNAS; j++)
        {
            printf("Questao %d: ",j+1);
            scanf(" %c",&matriz[i][j]);
        }
    }

    printf("\n");

    printf("GABARITO:\n");
    for(int i = 0; i < CASAS; i++)
    {
        printf("Questao %d: ", i+1);
        scanf(" %c",&vetor[i]);
    }

    printf("\n\n");

    for(int i = 0; i < LINHAS; i++)
    {
        int acertos = 0;
        printf("Aluno %d: ",i+1);
        for(int j = 0; j < COLUNAS; j++)
        {
            if(matriz[i][j] == vetor[j])
            {
                acertos += 1;
            }
        }
        printf("Resultado: %d/10\n", acertos);
    }
    return 0;
}