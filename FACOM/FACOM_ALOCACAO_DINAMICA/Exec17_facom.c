#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int n = 10;

    vetor = calloc(n, sizeof(int));

    int vetor_armazem[n];
    int flag = 1;
    do
    {
        for(int i = 0; i < 10; i++)
        {
            if(flag != 0)
            {
                printf("Digite um valor qualquer (0 para sair): ");
                scanf(" %d", &vetor[i]);

                if(vetor[i] == 0)
                    flag = 0;
            }
        }

        for(int i = (n - 10); i < n; i++)
        {
            vetor_armazem[i] = vetor[i];
        }

        if(flag != 0)
        {
            n += 10;
            vetor = calloc(10, sizeof(int));
        }

        free(vetor);

    }while(flag != 0);

    printf("\n\n");

    for(int i = 0; i < n; i++)
    {
        if(vetor_armazem[i] != 0)
            printf(" %d,", vetor_armazem[i]);
    }

    return 0;
}