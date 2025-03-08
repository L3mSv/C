#include <stdio.h>

#define TAMANHO 10
int main()
{
    int A[TAMANHO]={0};
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d de A: ",i+1);
        scanf(" %d",&A[i]);
    }
    printf("\n");
    int B[TAMANHO]={0};
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d de B: ",i+1);
        scanf(" %d",&B[i]);
    }

    int C[TAMANHO]={0};
    for(int i=0;i<10;i++)
    {
        C[i] = A[i] - B[i];
    }

    printf("\n\n");
    printf("VETOR A: ");
    for(int i=0;i<10;i++)
    {
        printf(" %d",A[i]);
    }

    printf("VETOR B: ");
    for(int i=0;i<10;i++)
    {
        printf(" %d",B[i]);
    }

    printf("VETOR C: ");
    for(int i=0;i<10;i++)
    {
        printf(" %d",C[i]);
    }

    return 0;
}