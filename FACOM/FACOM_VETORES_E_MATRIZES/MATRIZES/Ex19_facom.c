#include <stdio.h>
#include <limits.h>

int main()
{
    int matriz[5][4];

    for(int i = 0; i < 5; i++)
    {
        printf("ALUNO %d\n",i+1);
        for(int j = 0; j < 4; j++)
        {
            if(j == 0)
            {
                printf("Matricula:");
                scanf(" %d",&matriz[i][j]);
            }
            if(j == 1)
            {
                printf("Media das provas:");
                scanf(" %d",&matriz[i][j]);
            }
            if(j == 2)
            {
                printf("Media dos trabalhos:");
                scanf(" %d",&matriz[i][j]);
            } 
        }
    }

    int maior_nota_final = INT_MIN;
    int nota_final = 0;
    int matricula_da_maior_nota_final = 0;
    int aritmetica_notas_finais = 0;
    for(int i = 0; i < 5; i++)
    {
        nota_final = (matriz[i][1] + matriz[i][2]) / 2;
        aritmetica_notas_finais += nota_final;
        matriz[i][3] = nota_final;
        if(maior_nota_final <= nota_final)
        {
            maior_nota_final = nota_final;
            matricula_da_maior_nota_final = matriz[0][i];
        }
    }
    aritmetica_notas_finais = aritmetica_notas_finais/5;

    printf("\n\n");

    printf("MATRIZ:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MAIOR NOTA FINAL: %d|MATRICULA: %d",maior_nota_final,matricula_da_maior_nota_final);

    printf("\n");

    printf("ARITMETICA NOTAS FINAIS: %d",aritmetica_notas_finais);

    return 0;
}