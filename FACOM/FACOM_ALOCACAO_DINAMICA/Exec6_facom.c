#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int tamanho_bytes = 0;

    printf("Informe a quantidade de numeros a ser trabalhada: ");
    scanf(" %d", &tamanho_bytes);

    vetor = (int*) calloc(tamanho_bytes, sizeof(int));

    int opcao = 1;
    while(opcao != 0)
    {
        printf("\nDigite 1(inserir valor) ou 2(consultar valor): ");
        scanf(" %d", &opcao);

        if(opcao == 1)
        {
            int valor = 0;
            int posicao_vetor = 0;

            printf("Digite a posicao do valor no vetor: ");
            scanf(" %d", &posicao_vetor);

            printf("\nDigite o valor colocado: ");
            scanf(" %d", &valor);

            vetor[posicao_vetor] = valor;
        }
        else if(opcao == 2)
        {
            int posicao_vetor = 0;

            printf("Digite a posicao do vetor a ser consultada: ");
            scanf(" %d", &posicao_vetor);

            printf("Valor: %d\n", vetor[posicao_vetor]);
        }
        else if(opcao == 0)
        {
            return 0;
        }
        else
        {
            printf("Erro! Posicao inexistente\n");
        }

        printf("\nVetor\n");
        for(int i = 0; i < tamanho_bytes; i++)
        {
            printf("%d: %d, \n", i, vetor[i]);
        }
    }

}