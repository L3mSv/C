#include <stdio.h>

#define TAMANHO 5
int main()
{
    float conjunto1[TAMANHO]={0};
    for(int i=0;i<5;i++)
    {
        printf("Informe o valor da posicao %d do conjunto1: ",i+1);
        scanf(" %f",&conjunto1[i]);
    }

    printf("\n");

    float conjunto2[TAMANHO]={0};
    for(int i=0;i<5;i++)
    {
        printf("Informe o valor da posicao %d do conjunto2: ",i+1);
        scanf(" %f",&conjunto2[i]);
    }

    float produto_escalar = 0.0;
    for(int i=0;i<10;i++)
    {
        float produto = conjunto1[i] * conjunto2[i];
        produto_escalar += produto;
    }

    printf("\n\n");

    printf("CONJUNTO 1: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %.1f",conjunto1[i]);
    }

    printf("\n");

    printf("CONJUNTO 2: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %.1f",conjunto2[i]);
    }

    printf("\n");

    printf("PRODUTO ESCALAR: %.1f",produto_escalar);
      
    return 0;
}