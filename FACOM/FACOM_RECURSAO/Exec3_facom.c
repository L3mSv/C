#include <stdio.h>

int Soma_Cubos(int x)
{
    if(x == 1)
    {
        return 1;
    }
    else
    {
        return x*x*x + Soma_Cubos(x-1);
    }
}

int main()
{
    printf(" %d",Soma_Cubos(3));
    return 0;
}