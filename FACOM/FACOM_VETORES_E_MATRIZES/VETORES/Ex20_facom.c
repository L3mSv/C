#include <stdio.h>

int main()
{
    int vetor[10]={0};

    int contador = 0;
    while(contador != 10)
    {
        int possivel_valor_de_vetor = 0;
        printf("Informe um valor para a posicao %d do vetor: ",contador+1);
        scanf(" %d",&possivel_valor_de_vetor);
        if(possivel_valor_de_vetor >= 0 && possivel_valor_de_vetor <= 50)
        {
            vetor[contador++] = possivel_valor_de_vetor;
        }
        else
            printf("ERRO! O valor deve estar no intervaldo de [0,50]\n");
    }

    int contador_impares=0;
    int vetor_de_impares[contador_impares];
    for(int i=0;i<10;i++)
    {
        if(vetor[i]%2 == 0)
        {
            continue;
        }
        else
            vetor_de_impares[contador_impares++] = vetor[i];
    }
    vetor_de_impares[contador_impares] = '\0';
    printf("\n\n");
    for(int i=0;i<10;i++)
    {
        if(i < contador_impares)
        {
            printf("%d  %d\n",vetor[i],vetor_de_impares[i]);
        }
        else
            printf("%d  \n",vetor[i]);
    }
    return 0;
}