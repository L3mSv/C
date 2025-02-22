#include <stdio.h>

int main()
{
    int *vetor;
    int tamanho_vetor = 0;

    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &tamanho_vetor);

    printf("\n\n");

    for(int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i);
        scanf(" %d", &vetor[i]);
    }

        for(int i = 0; i < tamanho_vetor; i++)
    {
        if(i == (tamanho_vetor - 1))
        {
            printf("%d", vetor[i]);
            return 0;
        }
        printf("%d, ", vetor[i]);
    }
}