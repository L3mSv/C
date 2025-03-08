#include <stdio.h>

int main()
{
    int vetor[10];
    int contador=0;

    while (contador != 10)
    {
        int possivel_valor_para_vetor=0;
        printf("Informe um valor para a posicao %d do vetor:",contador+1);
        scanf(" %d",&possivel_valor_para_vetor);
        for(int i=0;i<10;i++)
        {
            if(possivel_valor_para_vetor == vetor[i])
            {
                printf("ERRO! o valor %d ja esta armazenado no vetor\n",possivel_valor_para_vetor);
                break;
            }
            if(i == 9)
            {
                vetor[contador++] = possivel_valor_para_vetor;
            }
        }
    }
    printf("\n\n");
    printf("VETOR FINAL:\n");
    for(int i=0;i<10;i++)
    {
        printf(" %d",vetor[i]);
    }
    
    return 0;
}