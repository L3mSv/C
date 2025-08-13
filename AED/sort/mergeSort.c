#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(int* list, int* left_half, int left_size, int* right_half, int right_size)
{
    int i = 0, j = 0, k = 0;

    while(i < left_size && j < right_size)
    {
        if(left_half[i] <= right_half[j])
        {
            list[k++] = left_half[i++];
        }
        else{
            list[k++] = right_half[j++];
        }
    }

    while (i < left_size)
    {
        list[k++] = left_half[i++];
    }

    while (j < right_size)
    {
        list[k++] = right_half[j++];
    }
}

void mergeSort(int* list, int size)
{
    if(size > 1)
    {
        int mid = size/2;
        int left_half[mid];
        int right_half[size - mid];    

        for(int i = 0; i < mid; ++i)
            left_half[i] = list[i];

        for(int i = mid; i < size; ++i)
            right_half[i - mid] = list[i];

        mergeSort(left_half, mid);
        mergeSort(right_half, size - mid);

        merge(list, left_half, mid, right_half, size - mid);
    }
}

int main()
{
    int array[] = {1, 43, 54, 32, 3, 34, 235, 2};
    int size = sizeof(array)/sizeof(array[0]);
    mergeSort(array, size);

    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    } 
}