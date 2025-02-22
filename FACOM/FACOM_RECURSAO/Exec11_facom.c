#include <stdio.h>

int Exibir_Elementos_Array(int *array, int casas)
{
    if(casas == 0)
    {
        return 0;
    }
    
    printf("%d ", *array);
    return Exibir_Elementos_Array(array + 1 , casas - 1);

}

int main()
{
 
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    Exibir_Elementos_Array(array, 10);
    return 0;
}