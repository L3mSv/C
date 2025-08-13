#include <stdio.h>
#include <stdlib.h>

int gcf(int x , int y)
{
    if(y == 0)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    while(y != 0)
    {
        int temp = x;
        x = y;
        y = temp % y;
        temp = x;
    }
    return x;
}

int main()
{
    printf("%d", gcf(20, 12));
}