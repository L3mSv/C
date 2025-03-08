#include <stdio.h>

int main()
{
    int vetor1[10]={0};
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d do vetor1: ",i+1);
        scanf(" %d",&vetor1[i]);    
    }

    printf("\n");

    int vetor2[10]={0};
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d do vetor2: ",i+1);
           scanf(" %d",&vetor2[i]);
    }

    int vetor_combinado[20]={0};
    int contador_vetor1=0;
    int contador_vetor2=0;
    for(int i=0;i<20;i++)
    {
        if(i%2==0)
        {
            vetor_combinado[i] = vetor1[contador_vetor1++];
        }
        else
        {        
            vetor_combinado[i] = vetor2[contador_vetor2++];
        }
    }
    printf("\n\n");
    printf("VETOR COMBINADO: ");
    for(int i=0;i<20;i++)
    {
        printf(" %d",vetor_combinado[i]);
    }

    return 0;
}