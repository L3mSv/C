#include <stdio.h>

int Enesimo_Fibonnnaci(int x)
{
    if(x == 21)
    {
        return x;
    }
    else
    {
        return x + Enesimo_Fibonnnaci(x+1);
    }
}

int main()
{
    printf(" %d", Enesimo_Fibonnnaci(0));
    return 0;
}