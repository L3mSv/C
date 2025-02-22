#include <stdio.h>
#include <limits.h>

int Menor_Elemento(int *array, int posicoes, int menor_elemento)
{
    if(posicoes == 0)
    {
        return menor_elemento;
    }

    if( *array <= menor_elemento)
        menor_elemento = *array;

    return Menor_Elemento(array + 1, posicoes - 1, menor_elemento);
}

int main()
{
    int array[10] = {2, 4, 7, 1, -1, 6, 3, 8, 9, 10};
    int menor_elemento = INT_MAX;

    printf(" %d", Menor_Elemento(array, 10, menor_elemento));
    return 0;
}