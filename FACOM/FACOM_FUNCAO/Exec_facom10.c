#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qual_o_maior(int x,int y)
{
    if(x > y)
        return x;
    else
        return y;
}
int main()
{
    int x,y;
    printf("Informe o valor de X: ");scanf(" %d",&x);
    printf("Informe o valor de Y: ");scanf(" %d",&y);
    int o_maior = qual_o_maior(x,y);
    printf("\nO maior valor entre X e Y: %d",o_maior);
    return 0;
}