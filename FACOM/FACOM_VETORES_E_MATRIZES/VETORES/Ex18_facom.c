#include <stdio.h>

int main()
{
    int vetor[10]={0};
    int x=0;

    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d: ",i+1);scanf(" %d",&vetor[i]);
    }
    printf("\nInforme o valor de X: ");scanf(" %d",&x);

    int contador = 0;
    int multiplos_de_x[contador];
    for(int i=0;i<10;i++)
    {
        if(vetor[i]%x==0)
        {
            multiplos_de_x[contador++] = vetor[i];
        }
        else
            continue;
    }
    multiplos_de_x[contador] = '\0';
    printf("\n\n");
    printf("MULTIPLOS DE %d PRESENTES NO VETOR:\n",x);
    for(int i=0;multiplos_de_x[i]!='\0';i++)
    {
        printf(" %d",multiplos_de_x[i]);
    }

    return 0;
}