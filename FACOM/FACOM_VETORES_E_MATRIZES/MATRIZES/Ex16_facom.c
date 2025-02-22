#include <stdio.h>

#define QUESTOES 10
#define ALUNOS 3
int main()
{
    char matriz[ALUNOS][QUESTOES];
    int matriculas[ALUNOS];
    char gabarito[QUESTOES];

    for(int i = 0; i < ALUNOS; i++)
    {
        printf("Informe a matricula do aluno %d: ",i+1);
        scanf(" %d",&matriculas[i]);
            printf("ALUNO %d\n",i+1);
        for(int j = 0; j < QUESTOES; j++)
        {
            printf("Questao %d: ",j+1);
            scanf(" %c",&matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("GABARITO:\n");
    for(int i = 0; i < QUESTOES; i++)
    {
        printf("Questao %d:",i+1);
        scanf(" %c",&gabarito[i]);
    }
    
    printf("\n");

    for(int i = 0; i < ALUNOS; i++)
    {
        float acertos = 0.0;
        printf("\nMATRICULA: %d\n",matriculas[i]);
        for(int j = 0; j < QUESTOES; j++)
        {
            printf("Questao %d: %c\n",j+1,matriz[i][j]);
            if(matriz[i][j] == gabarito[j])
            {
                acertos++;
            }
        }
        printf("NOTA: %.1f\n",acertos);

    }
    return 0;
}