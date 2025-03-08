#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    array = malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf(" %d", &array[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    free(array);
    
    return 0;
}