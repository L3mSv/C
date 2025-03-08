#include <stdio.h>

int Fatorial(int x)
{
    if(x == 1 || x == 0)
        return 1;
    else
        return x * Fatorial(x-1);
}

int main()
{
    printf(" %d",Fatorial(5));
    return 0;
}