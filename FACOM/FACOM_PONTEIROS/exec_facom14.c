#include <stdio.h>

#define TAMANHO 10

void Preencher_Vetor(int array[], int tamanho_array, int num_escolhido)
{
    for(int i = 0; i < tamanho_array; i++)
    {
        *(array + i) = num_escolhido;
    }
}

int main()
{
    int vetor[TAMANHO] = {0};
    int num = 0;

    printf("Digite um numero inteiro para preencher o vetor: ");

    scanf(" %d", &num);

    Preencher_Vetor(vetor, TAMANHO, num);

    for(int i = 0; i < TAMANHO; i++)
    {
        if(i == (TAMANHO - 1))
        {
            printf("%d ", vetor[i]);
            return 0;
        }
        printf("%d, ", vetor[i]);

    }

}