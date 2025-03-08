#include <stdio.h>

#define TAMANHO 20
int main()
{

    int vetor[TAMANHO];
    int vetorUnico[TAMANHO];
    int tamanhoVetorUnico = 0;
    
    for(int i=0; i<TAMANHO;i++)
    {
        printf("Digite o valor da posicao %d: ",i+1);
        scanf(" %d",&vetor[i]);
    }

    for(int i=0; i<TAMANHO; i++)
    {
        int elementoRepetido =0;

        for(int j=0; j<tamanhoVetorUnico; j++)
        {
            if(vetor[i] == vetorUnico[j])
            {
                elementoRepetido = 1;
                break;
            }
        }

        if(!elementoRepetido)
        {
            vetorUnico[tamanhoVetorUnico] = vetor[i];
            tamanhoVetorUnico++;
        }
    }

    printf("\nElementos do Vetor sem Repeticao:\n");
    for(int i=0;i<tamanhoVetorUnico;i++)
    {
        printf(" %d",vetorUnico[i]);
    }

    printf("\n");

    return 0;
}