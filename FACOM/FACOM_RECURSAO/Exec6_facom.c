#include <stdio.h>

int Multip_Rec(int n1, int n2)
{
    while(n2 != 1)
    {
        return n1 + Multip_Rec(n1, n2-1);
    }
}

int main()
{
    printf("Produto: %d", Multip_Rec(5,5));
    return 0;
}