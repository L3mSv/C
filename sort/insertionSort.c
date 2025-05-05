#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* insertionSort(int* list,int size)
{
    for(int i = 1; i < size; ++i)
    {
        int j = i;

        while (j > 0 && list[j - 1] > list[j]){
            int temp = list[j];
            list[j] = list[j - 1];
            list[j - 1] = temp;

            j = j - 1;
        }
    }   

    return list;
}

int main()
{
    int array[] = {1, 43, 54, 32, 3, 34, 235, 2};
    int size = sizeof(array)/sizeof(array[0]);
    insertionSort(array, size);

    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }

}