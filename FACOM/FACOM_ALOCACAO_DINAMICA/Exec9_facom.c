#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int quant_nums = 1;
    
    vetor = (int*) malloc(sizeof(int));    

    for(int i = 0; i < quant_nums; i++)
    {
        printf("Digite um valor inteiro qualquer: ");
        scanf(" %d", &vetor[i]);

        if(vetor[i] >= 0)
        {
            vetor = (int*) realloc(vetor, sizeof(int));
            quant_nums ++;
        }
    }   

    for(int i = 0; i < (quant_nums - 1); i++)
    {
        printf("%d, ", vetor[i]);
    }
    

    return 0;
}