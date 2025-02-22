#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int n;
    int x;

    printf("Digite o numero de posicoes de um vetor: ");
    scanf(" %d", &n);

    vetor = malloc(n * sizeof(int));

    printf("\n");

    for(int i = 0; i < n; i ++)
    {
        printf("Informe o valor da posicao %d do vetor: ", i);
        scanf(" %d", &vetor[i]);
    }

    printf("\n");

    printf("Digite um valor para X: ");
    scanf(" %d", &x);

    printf("\n");

    int quant_multiplos = 0;
    for (int i = 0; i < n; i++)
    {
        if(vetor[i]%x == 0)
        {
            quant_multiplos ++;
            printf(" %d", vetor[i]);
        }
    }
    printf("\nQuant.Multiplos = %d", quant_multiplos);
    
    free(vetor);

    return 0;
}