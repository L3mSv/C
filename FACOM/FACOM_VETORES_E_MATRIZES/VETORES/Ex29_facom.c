#include <stdio.h>

int main()
{
    int vetor[6]={0};
    int contador_pares =0;
    int vetor_pares[contador_pares];
    int soma_pares = 0;
    int contador_impares = 0;
    int vetor_impares[contador_impares];
    int quantidade_impares = 0;

    for(int i=0;i<6;i++)
    {
        printf("Informe o valor da posicao %d do vetor: ",i+1);
        scanf(" %d",&vetor[i]);

        if(vetor[i]%2==0)
        {
            vetor_pares[contador_pares++] = vetor[i];
            soma_pares += vetor[i];
        }
        else
        {
            vetor_impares[contador_impares++] = vetor[i];
            quantidade_impares++;
        }
    }
    vetor_pares[contador_pares] = '\0';
    vetor_impares[contador_impares] = '\0';

    printf("\n\n");
    
    printf("OS NUMEROS PARES DIGITADOS");
    for(int i=0;vetor_pares[i]!='\0';i++)
    {
        printf("\n%d",vetor_pares[i]);
    }
    printf("\nSOMA DOS NUMEROS PARES: %d",soma_pares);

    printf("\n\n");

    printf("OS NUMEROS IMPARES DIGITADOS");
    for(int i=0;vetor_impares[i]!='\0';i++)
    {
        printf("\n%d",vetor_impares[i]);
    }
    printf("\nA QUANTIDADE DE NUMEROS IMPARES DIGITADOS: %d",quantidade_impares);

    return 0;
}