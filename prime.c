#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int x)
{
    for(int i = 2; i <= sqrt(x); ++i)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(list)/sizeof(list[0]);
    for(int i = 0; i < size; ++i)
    {
        int num = list[i];
        printf("\n%d ", num);
        num = isPrime(list[i]);
        if(num == 1)
        {
            printf("PRIMO");
        }
    }
}