#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int positivo_ou_negativo(int x)
{
    if (x == 0)
        return 0;
    else if (x < 0)
        return -1;
    else
        return 1;
    return 0;
}
int main()
{
    int x;
    printf("Informe um valor: ");scanf(" %d",&x);
    int x_verificacao = positivo_ou_negativo(x);
    printf("\n%d",x_verificacao);
    return 0;
}