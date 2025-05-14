#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        int no_swap = 1;

        for(int j = 0; j < size - 1 - i; ++j)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                no_swap = 0;
            }
        }

        if(no_swap)
        {
            break;
        }
    }

}

void selectionSort(int* array, int size)
{
    for(int i = 0; i < size - 1; ++i)
    {
        int min = i;

        for(int j = i+1; j < size; ++j)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
        
        }

        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

void insertionSort(int* array, int size)
{
    for(int i = 1; i < size; ++i)
    {
        
        int j = i; 

        while(j > 0 && array[j] < array[j-1])
        {
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;

            --j;
        }
    }
}

void shellSort(int* array, int size)
{
    for(int gap = size/2; gap > 0; gap /=2)
    {
        for(int i = gap; i < size;  ++i)
        {
            int temp = array[i];

            int j;
            for(j = i; j >= gap && array[j - gap] > temp; j -= gap)
                array[j] = array[j - gap];
            
            array[j] = temp;
        }
    }
}

void merge(int* array, int* leftHalf, int leftsize, int* rightHalf, int rightsize)
{
    int i = 0, j = 0, k = 0;

    while(i < leftsize && j < rightsize)
    {
        if(leftHalf[i] <= rightHalf[j])
        {
            array[k++] = leftHalf[i++];
        }
        else
        {
            array[k++] = rightHalf[j++];
        }
    }

    while(i < leftsize)
    {
        array[k++] = leftHalf[i++];
    }

    while (j < rightsize)
    {
        array[k++] = rightHalf[j++];
    }
    
}

void mergeSort(int* array, int size)
{
    if(size > 1)
    {
        int mid = size/2;
        int leftHalf[mid];
        int rightHalf[size - mid];

        for(int i = 0; i < mid; ++i)
        {
            leftHalf[i] = array[i];
        }

        for(int i = mid; i < size; ++i)
        {
            rightHalf[i - mid] = array[i];
        }

        mergeSort(leftHalf, mid);
        mergeSort(rightHalf, size - mid);

        merge(array, leftHalf, mid, rightHalf, size - mid);
    }
}

int partition(int* array, int low, int high)
{
    int pivot = array[low];
    int leftwall = low;

    for(int i = low + 1; i <= high; ++i)
    {
        if(array[i] < pivot)
        {
            leftwall++;

            int temp = array[i];
            array[i] = array[leftwall];
            array[leftwall] = temp;
        }
    }

    int temp = array[low];
    array[low] = array[leftwall];
    array[leftwall] = temp;

    return leftwall;
}

void quickSort(int* array, int low, int high)
{
    if(low < high)
    {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main()
{
    int array[] = {1, 243, 45, 32 ,43, 546, 65, 21, 2};
    int size = sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, size - 1);

    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }

    return 0;
}