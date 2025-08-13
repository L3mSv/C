#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* bubbleSort(int* list, int size)
{

    for(int i = 0; i < size - 1; ++i)
    {
        int no_swap = 1;

        for(int j = 0; j < size - 1 - i; ++j)
        {

            if(list[j] > list[j+1])
            {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;

                no_swap = 0;
            }
        }

        if(no_swap)
        {
            break;
        }
    }

    return list;
}

int main()
{
    int array[] = {1, 43, 54, 32, 3, 34, 235, 2};
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, size);

    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
}