#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *vetor;
    int tamanho_vetor = 0;

    while(tamanho_vetor < 10)
    {
        printf("Digite o tamanho do vetor: ");
        scanf(" %d", &tamanho_vetor);
    }

    vetor = (int*) malloc(tamanho_vetor * sizeof(int));

    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {

        vetor[i] = rand() % 101;
        printf("%d, ", vetor[i]);
    }
    return 0;
}