#include <stdio.h>

#define TAMANHO 100
int main()
{
    int vetor[TAMANHO]={0};

    int valor = 0;
    int contador=0;
    while(contador != 100)
    {    
        if((valor%7!=0) && (valor%10!=7))
        {
            vetor[contador++] = valor;
            valor++;  
        }
        else
            valor++;    
    }

    for(int i=0;i<100;i++)
    {
        printf(" %d\n",vetor[i]);
    }
    return 0;
}