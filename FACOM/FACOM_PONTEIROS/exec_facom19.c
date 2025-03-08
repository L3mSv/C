#include <stdio.h>
#include <limits.h>

void Maior_Numero_do_Vetor_e_Aparicoes(int array[], int tamanho_array, int *maior_valor, int *aparicoes);


int main()
{
    int tamanho_array = 0;
    int maior_valor = INT_MIN;
    int aparicoes = 0;
    
    printf("Quantos elementos o vetor tera: ");
    scanf(" %d", &tamanho_array);

    int vetor[tamanho_array];

    for(int i = 0; i < tamanho_array; i++)
    {
        printf("Digite um valor inteiro para a posicao %d do vetor: ", i);
        scanf(" %d", &vetor[i]);
    }

    Maior_Numero_do_Vetor_e_Aparicoes(vetor, tamanho_array, &maior_valor, &aparicoes);

    printf("\n\n");

    printf("MAIOR VALOR: %d\n", maior_valor);
    printf("APARICOES: %d\n", aparicoes);

    printf("\n");

    for(int j = 0; j < tamanho_array; j++)
    {
        if(j == (tamanho_array - 1))
        {
            printf("%d", vetor[j]);
            return 0;
        }
        printf("%d, ", vetor[j]);
    }
}

void Maior_Numero_do_Vetor_e_Aparicoes(int array[], int tamanho_array, int *maior_valor, int *aparicoes)
{
    for(int i = 0; i < tamanho_array; i++)
    {
        if(*maior_valor == *(array + i))
        {
            *aparicoes += 1;
        }

        if( *(array + i) > *maior_valor)
        {
            *maior_valor = *(array + i);
            *aparicoes = 1;
        }
    }
}