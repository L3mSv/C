#include <stdio.h>

int main()
{
    int vetor[10]={0};
    for(int i=0;i<10;i++)
    {
        printf("Informe um valor para a posicao %d do vetor: ",i+1);
        scanf(" %d",&vetor[i]);
    }

    int x = 0;
    int vetor_de_primos[x];
    int contador=0;
    while(contador != 10)
    {
        int div = vetor[contador]%10;

        if(vetor[contador] == 2)
        {
            vetor_de_primos[x++] = vetor[contador];
        }
        else
        {
            if(div%2!=0)
            {
                vetor_de_primos[x++] = vetor[contador];
            }
        }
        contador++;
    }
    vetor_de_primos[x] = '\0';
    printf("\nPRIMOS PRESENTES NO VETOR: \n");
    for(int i=0;vetor_de_primos[i]!='\0';i++)
    {
        printf(" %d",vetor_de_primos[i]);
    }
    return 0;
}