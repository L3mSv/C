#include <stdio.h>

int main()
{
    int vetor[11]={1,2,3,4,5,11,10,9,8,7,6};
    int auxiliar=0;

    for(int contador1=5;contador1<11;contador1++)
    {
        for(int contador2=contador1+1;contador2<11;contador2++)
        {
            if(vetor[contador1] > vetor[contador2])
            {
                auxiliar = vetor[contador1];
                vetor[contador1] = vetor[contador2];
                vetor[contador2] = auxiliar;
            }
        }
    }
    printf("VETOR:\n");
    for(int i=0;i<11;i++)
    {
        printf(" %d",vetor[i]);
    }
    return 0;
}