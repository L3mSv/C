#include <stdio.h>

void DesenhaLinha(int quantidade_sinais)
{
    for(int i=0;i<quantidade_sinais;i++)
        printf("=");
}

int main()
{
    int quantidade_sinais=0;
    printf("Informe a quantidade de sinais da linha: ");
    scanf(" %d",&quantidade_sinais);

    DesenhaLinha(quantidade_sinais);
    return 0;
}