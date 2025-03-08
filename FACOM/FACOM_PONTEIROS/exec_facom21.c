#include <stdio.h>

int main()
{
    int tamanho_array = 0;
    
    printf("Quantos elementos o vetor tera: ");
    scanf(" %d", &tamanho_array);

    int vetor[tamanho_array];

    for(int i = 0; i < tamanho_array; i++)
    {
        printf("Digite um valor inteiro para a posicao %d do vetor: ", i);
        scanf(" %d", &vetor[i]);
    }

    int *p_vetor = vetor;

    for(int j = 0; j < tamanho_array; j++)
    {
        *(p_vetor + j) += 1;
        printf("%d ", *(p_vetor + j));
    }

    return 0;

}