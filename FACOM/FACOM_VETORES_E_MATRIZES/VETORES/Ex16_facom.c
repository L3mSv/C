#include <stdio.h>

int main()
{
    float vetor[5];
    int codigo;

    for(int i=0;i<5;i++)
    {
        printf("Informe o valor da posicao %d: ",i+1);scanf(" %f",&vetor[i]);
    }

    do
    {
        printf("\n");
        printf("\nInforme o codigo desejado 1 ou 2 [0 para sair]: ");scanf(" %d",&codigo);

        if(codigo == 1)
        {
            printf("VETOR: ");
            for(int i=0;i<5;i++)
            {
                printf(" %0.f",vetor[i]);
            }
        }
        else if(codigo == 2)
        {
            float vetor_inverso[5];
            int contador_inverso=0;
            for(int i=4;i>=0;i--)
            {
                vetor_inverso[contador_inverso++] = vetor[i];

            }
            printf("VETOR INVERSO: ");
            for(int i=0;i<5;i++)
            {
                printf(" %0.f",vetor_inverso[i]);
            }
        }
        else
            if(codigo != 0)
                printf("ERRO! O codigo informado e invalido");
    }while(codigo != 0);
    return 0;
}