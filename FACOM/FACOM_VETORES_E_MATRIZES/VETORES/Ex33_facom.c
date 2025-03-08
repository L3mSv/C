#include <stdio.h>

int main()
{
    int vetor[15];
    for(int i=0;i<15;i++)
    {
        printf("Informe um valor para a posicao %d do vetor: ",i+1);
        scanf(" %d",&vetor[i]);
    }

    int contador_vetor_compactado=0;
    int vetor_compactado[contador_vetor_compactado];
        for(int i=0;i<15;i++)
        {
            if(vetor[i] != 0)
            {
                vetor_compactado[contador_vetor_compactado++] = vetor[i];
            }
        }
    vetor_compactado[contador_vetor_compactado]='\0';

    printf("\n\n");
    printf("VETOR ORIGINAL:\n");
    for(int i=0;i<15;i++)
    {
        printf("Vetor[%d] = %d\n",i,vetor[i]);
    }
    printf("\nVETOR COMPACTADO:\n");
    for(int i=0;i<contador_vetor_compactado;i++)
    {
        printf("VetorCompactado[%d] = %d\n",i,vetor_compactado[i]);
    }
    return 0;
}