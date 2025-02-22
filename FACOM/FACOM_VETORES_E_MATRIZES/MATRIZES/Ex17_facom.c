#include <stdio.h>

int main()
{
    int matriz[10][3];

    for(int i = 0; i < 10; i++)
    {
        printf("ALUNO %d\n",i+1);
        for(int j =  0; j < 3; j++)
        {
            printf("Nota %d:",j+1);
            scanf(" %d",&matriz[i][j]);
        }
    }

    int quant_alunos_pior_nota_prova1 = 0;
    int quant_alunos_pior_nota_prova2 = 0;
    int quant_alunos_pior_nota_prova3 = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 1; j++)
        {
            if(matriz[i][j] == matriz[i][1] && matriz[i][j] == matriz[i][2])
            {
                quant_alunos_pior_nota_prova1 ++;
            }
            else if(matriz[i][j] == matriz[i][1] && matriz[i][j] < matriz[i][2])
            {
                quant_alunos_pior_nota_prova1 ++;
            }
            else if(matriz[i][j] == matriz[i][2] && matriz[i][j] < matriz[i][1])
            {
                quant_alunos_pior_nota_prova1 ++;
            }
            else if(matriz[i][j] < matriz[i][1] && matriz[i][j] < matriz[i][2])
            {
                quant_alunos_pior_nota_prova1 ++;
            }
            else if(matriz[i][j] < matriz[i][1] && matriz[i][j] > matriz[i][2])
            {
                quant_alunos_pior_nota_prova3 ++;
            }
            else if(matriz[i][j] > matriz[i][1] && matriz[i][j] < matriz[i][2])
            {
                quant_alunos_pior_nota_prova2 ++;
            }
            else
            {
                if(matriz[i][2] <= matriz[i][1])
                {
                    quant_alunos_pior_nota_prova3 ++;
                }
                else
                {
                    quant_alunos_pior_nota_prova2 ++;
                }
            }
        }
    }

    printf("\n\n");

    printf("NUMERO DE ALUNOS COM PIOR NOTA NA PROVA 1: %d\n",quant_alunos_pior_nota_prova1);
    printf("NUMERO DE ALUNOS COM PIOR NOTA NA PROVA 2: %d\n",quant_alunos_pior_nota_prova2);
    printf("NUMERO DE ALUNOS COM PIOR NOTA NA PROVA 3: %d\n",quant_alunos_pior_nota_prova3);

    return 0;
}