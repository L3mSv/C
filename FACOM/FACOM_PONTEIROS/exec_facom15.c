#include <stdio.h>

#define TAMANHO 5

int Imprime_Vetor(int array[], int tamanho_array)
{
    for(int i = 0; i < TAMANHO; i++)
    {
        if(i == (TAMANHO - 1))
        {
            printf("%d ", *(array + i));
            return 0;
        }
        printf("%d, ", *(array + i));
    }
}

int main()
{
    int vetor[TAMANHO] = {0};

    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", vetor[i]);
        scanf(" %d", &vetor[i]);

    }

    Imprime_Vetor(vetor, TAMANHO);

    return 0;
}