#include <stdio.h>

int negativos(float *vet, int N);

int main()
{
    int tamanho_array = 0;

    printf("Quantos elementos o vetor tera: ");
    scanf(" %d", &tamanho_array);

    float vetor[tamanho_array];

    for(int i = 0; i < tamanho_array; i++)
    {
        printf("Digite um valor real para a posicao %d do vetor: ", i);
        scanf(" %d", &vetor[i]);
    }

    printf("Quant.Negativos: %d", negativos(vetor, tamanho_array));

    return 0;
}

int negativos(float *vet, int N)
{
    int quant_negativos = 0;

    for(int i = 0; i < N; i++)
    {
        if((*vet + i) < 0)
            quant_negativos ++;
    }

    return quant_negativos;
}