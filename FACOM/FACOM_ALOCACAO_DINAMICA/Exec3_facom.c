#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int tamanho_vetor = 0;

    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &tamanho_vetor);

    vetor = malloc(tamanho_vetor * sizeof(int));

    printf("\n\n");

    int quant_par = 0;
    int quant_impar = 0;

    for(int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i);
        scanf(" %d", &vetor[i]);

        if(vetor[i]%2 == 0)
            quant_par ++;
        else
            quant_impar ++;

    }

    printf("\nQuant.Numeros Pares: %d\n", quant_par);
    printf("Quant.Numeros Impares: %d", quant_impar);

    return 0;
}