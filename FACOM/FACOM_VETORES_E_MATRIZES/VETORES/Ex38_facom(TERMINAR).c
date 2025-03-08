#include <stdio.h>

int main()
{
    int vetor[10]={0};
    int auxiliar =0;
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d do vetor:",i+1);
        scanf(" %d",&vetor[i]);

        for(int contador1=0;contador1<10;contador1++)
        {
            for (int contador2 = contador1 + 1; contador2 < 10; contador2++)
            {
                if(vetor[contador1] > vetor[contador2])
                {
                    auxiliar = vetor[contador1];
                    vetor[contador1] = vetor[contador2];
                    vetor[contador2] = auxiliar;
                }
            }  
        }
    }
    printf("\n\n");
    printf("VETOR:\n");
    for(int i=0;i<10;i++)
    {
        printf(" %d",vetor[i]);
    }
    return 0;
}