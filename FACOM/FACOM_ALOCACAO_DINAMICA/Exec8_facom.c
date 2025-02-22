#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;

    vetor = (int*) calloc(1500, sizeof(int));

    for(int i = 0; i < 1500; i++)
    {
        printf("%d, ", vetor[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 1500; i++)
    {
        vetor[i] = i;
        if((i >= 0 && i <= 10) || (i >= 1490 && i <= 1500))
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}