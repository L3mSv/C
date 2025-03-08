#include <stdio.h>

int Somatorio(int x)
{
    if(x == 0)
    {
        return 0;
    }
    else
    {
        return x + Somatorio(x-1);
    }
}

int main()
{
    printf(" %d",Somatorio(4));
    return 0;
}