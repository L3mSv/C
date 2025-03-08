#include <stdio.h>

int main()
{
    int vetor1[10]={0};
    int vetor2[10]={0};

    for(int i = 0; i<10; i++)
    {
        printf("Informe um valor para a posicao %d do vetor1: ",i+1);
        scanf(" %d",&vetor1[i]);
        setbuf(stdin,NULL);
    }
    printf("\n");
    for(int i=0; i<10; i++)
    {
        printf("Informe um valor para a posicao %d do vetor2: ",i+1);
        scanf(" %d",&vetor2[i]);
        setbuf(stdin,NULL);
    }

    int contador_da_interseccao = 0;
    int interseccao[contador_da_interseccao];

    for(int i = 0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(vetor1[i] == vetor2[j])
            {
                int repetido = 0;
                int contador = 0;
                while(contador != contador_da_interseccao)
                {
                    if(vetor1[i] == interseccao[contador])
                    {
                        repetido = 1;
                        break;
                    }
                    contador++;
                }
                if(repetido == 0)
                {
                    interseccao[contador_da_interseccao++] = vetor1[i];
                }
            }
        }
    }
    interseccao[contador_da_interseccao] = '\0';

    printf("\n\n");
    printf("INTERSECCAO:\n");
    for(int i =0; interseccao[i]!='\0';i++)
    {
        printf(" %d",interseccao[i]);
    }
    return 0;
}