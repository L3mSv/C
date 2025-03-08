#include <stdio.h>
#include <limits.h>

int main()
{
    int x=0;
    int vetor[10];
    int vetor_sem_repetidos[x];
    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d: ",i); scanf(" %d",&vetor[i]);
    }
    
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(vetor[i]==vetor[j])
                vetor_sem_repetidos[x++] = vetor[i];
        }
    }
    vetor_sem_repetidos[x] = '\0';
    printf("\n");
    for(int i=0;vetor_sem_repetidos[i]!='\0';i++)
        printf("\n%d esta REPETIDO!",vetor_sem_repetidos[i]);
    return 0;
}

/*SE QUISER PODE ARRUMAR O CODIGO PQ SE TIVER UM ELEMENTO REPETIDO MAIS DE UMA VEZ ELE REPETE A MENSAGEM DE REPETIDO*/
