#include <stdio.h>

int main()
{
    int a=10000;
    int b=10000;
    while(a == 10000)
    {
        int possivel_valor_para_a=0;
        printf("\nInforme o valor de A: ");scanf(" %d",&possivel_valor_para_a);
        if(possivel_valor_para_a >= 10000 || possivel_valor_para_a <= 0)
        {
            printf("ERRO! o valor deve ser positivo e menor que 10000");
        }
        else
        {
            a = possivel_valor_para_a;
        }
    }
    printf("\n");
    while (b == 10000)
    {
        int possivel_valor_para_b=0;
        printf("\nInforme o valor de B: ");scanf(" %d",&possivel_valor_para_b);
        if(possivel_valor_para_b >= 10000 || possivel_valor_para_b <= 0)
        {
            printf("ERRO! o valor deve ser positivo e menor que 10000");
        }
        else
        {
            b = possivel_valor_para_b;
        }
    }
    printf("\n\n");
    printf("A: %d",a);
    printf("\nB: %d",b);
    
    int contador_a=0;
    int vetor_a[contador_a];
    while(a != 0)
    {   
        vetor_a[contador_a++]=a%10;
        a = a/10;
    }
    vetor_a[contador_a] ='\0';


    int contador_b=0;
    int vetor_b[contador_b];
    while(b != 0)
    {   
        vetor_b[contador_b++]=b%10;
        b = b/10;
    }
    vetor_b[contador_b] ='\0';

    int contador_soma=0;
    int soma_a_b[contador_soma];
    if(contador_a >= contador_b)
    {
        int um_extra = 0;
        for(int i=0;i<contador_a;i++)
        {
            int soma = 0;
            if(um_extra == 0)
                soma = vetor_a[i] + vetor_b[i];
            else
            {
                soma = vetor_a[i] + vetor_b[i] + 1;
            }
            um_extra = 0;
            if(soma >= 10)
            {
                um_extra = 1;
                soma -=10;
                soma_a_b[contador_soma++] = soma;
            }
            else
            {
                soma_a_b[contador_soma++] = soma;
            }
        } 
    soma_a_b[contador_soma]='\0';
    }
    else 
    {
        {
            int um_extra = 0;
            for(int i=0;i<contador_b;i++)
            {
                int soma = 0;
                if(um_extra == 0)
                    soma = vetor_a[i] + vetor_b[i];
                else
                {
                    soma = vetor_a[i] + vetor_b[i] + 1;
                }
                um_extra = 0;
                if(soma >= 10)
                {
                    um_extra = 1;
                    soma -=10;
                    soma_a_b[contador_soma++] = soma;
                }
                else
                {
                    soma_a_b[contador_soma++] = soma;
                }
            } 
        }
    soma_a_b[contador_soma]='\0';
    }
    
    printf("\n\n");
    printf("VETOR A:\n");
    for (int i = 0; i < contador_a; i++)
    {
        printf(" %d",vetor_a[i]);
    }
    printf("\nVETOR B:\n");
    for(int i=0;i<contador_b;i++)
    {
        printf(" %d",vetor_b[i]);
    }
    printf("\nVETOR SOMA A E B:\n");
    for(int i=0; i<contador_soma;i++)
    {
        printf(" %d",soma_a_b[i]);
    }
    return 0;
}