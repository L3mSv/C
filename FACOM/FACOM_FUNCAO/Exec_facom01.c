#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int dobro(int x)
{
    return x*2;
}

int main()
{
    int x;
    printf("Informe um valor: ");scanf(" %d",&x);
    int x_dobro = dobro(x);
    printf("O dobro de %d -> %d",x,x_dobro);
    return 0;
}