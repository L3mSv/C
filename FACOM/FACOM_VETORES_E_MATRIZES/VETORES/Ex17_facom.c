#include <stdio.h>

#define TAMANHO 10
int main()
{
    int vetor[TAMANHO];
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d: ",i+1);scanf(" %d",&vetor[i]);
    }
    printf("\n\n");
    printf("VETOR ORIGINAL: ");
    for(int i=0; i<10;i++)
    {
        printf(" %d",vetor[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(vetor[i] < 0)
        {
            vetor[i] = 0;
        }
        else
            continue;
    }
    printf("\nVETOR S/ NEGATIVOS: ");
    for(int i=0; i<10;i++)
    {
        printf(" %d",vetor[i]);
    }

    return 0;
}