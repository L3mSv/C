#include <stdio.h>

#define TAMANHO 50
int main()
{
    int vetor[TAMANHO]={0};
    for(int i=0; i<50;i++)
    {
        vetor[i] = ((i + 5 * i)%(i + 1));
    }

    for(int i=0;i<50;i++)
    {
        printf("\n %d",vetor[i]);
    }
    return 0;
}