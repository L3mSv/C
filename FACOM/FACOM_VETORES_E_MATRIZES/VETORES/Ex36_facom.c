#include <stdio.h>
#include <limits.h>

int main()
{
    int variavel_auxiliar=0;
    float vetor[10];
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d do vetor:",i+1);
        scanf(" %f",&vetor[i]);
    }

    for(int contador1 = 0; contador1 < 10; contador1++)
    {
        for(int contador2 = contador1 + 1; contador2 < 10; contador2++)
        {
            if(vetor[contador1] > vetor[contador2])
            {
                variavel_auxiliar = vetor[contador2];
                vetor[contador2] = vetor[contador1];
                vetor[contador1] = variavel_auxiliar;
            }
        }
    }
    printf("\n\n");
    printf("VETOR ORDENADO:\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %.2f,",vetor[i]);
    }
    

    return 0;
}

/* UTILIZEI UM VIDEO COMO AUXILIO O METODO DE ORDENACAO E CHAMADO DE SELECTION SORT*/