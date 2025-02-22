#include <stdio.h>

int K_na_N(int k, int n)
{
    if(n == 0)
        return 1;
    else
        return k * K_na_N(k, n - 1);
}

int main()
{
    printf(" %d", K_na_N(2, 10));
    return 0;
}