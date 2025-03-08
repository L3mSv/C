#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int quadrado_perfeito(int x)
{
    for(int i=0;i<INT_MAX;i++)
    {
        int quadrado_de_i = i*i;
        if(x == quadrado_de_i)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int x;
    printf("Informe um numero: ");scanf(" %d",&x);
    int x_perfeito = quadrado_perfeito(x);
    if(x_perfeito == 0)
        printf("X nao possui quadrado perfeito!");
    printf("X e quadrado perfeito de %d",x_perfeito);
    return 0;
}