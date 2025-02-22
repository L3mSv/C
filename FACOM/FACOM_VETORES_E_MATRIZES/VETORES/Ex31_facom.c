#include <stdio.h>

int main()
{
    int vetor1[10]={0};
    int vetor2[10]={0};

    for(int i=0;i<10;i++)
    {
        printf("Informe um valor para a posicao %d do vetor1: ",i+1);
        scanf(" %d",&vetor1[i]);
        setbuf(stdin,NULL);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("Informe um valor para a posicao %d do vetor2: ",i+1);
        scanf(" %d",&vetor2[i]);
        setbuf(stdin,NULL);
    }
    printf("VETOR1:\n");
    for(int i =0;i<10;i++)
    {
        printf(" %d",vetor1[i]);
    }
    printf("\nVETOR2:\n");
    for(int i=0;i<10;i++)
    {
        printf(" %d",vetor2[i]);
    }

    int contador_vetor_agregado=0;
    int vetor_agregado[20];

    for(int i=0;i<10; i++)
    {
        vetor_agregado[contador_vetor_agregado++] = vetor1[i];    
        vetor_agregado[contador_vetor_agregado++] = vetor2[i];
    }

    printf("\nVETOR AGREGADO:\n");
    for(int i=0;i<contador_vetor_agregado;i++)
    {
        printf(" %d",vetor_agregado[i]);
    }

    int contador_uniao = 0;
    int uniao[contador_uniao];

    for(int i=0;i<contador_vetor_agregado;i++)
    {
        for(int j=0;j<contador_vetor_agregado;j++)
        {
            if(vetor_agregado[i] == vetor_agregado[j])
            {
                int repetido=0;
                int contador=0;
                while (contador != contador_uniao)
                {
                    if(vetor_agregado[i] == uniao[contador])
                    {
                        repetido = 1;
                        break;
                    }
                    contador++;
                }
                if(repetido == 0)
                {
                    uniao[contador_uniao++] = vetor_agregado[i];
                }
                
            }
        }
    }
    uniao[contador_uniao] = '\0';

    printf("\n\n");
    printf("UNIAO:\n");
    for(int i=0;i<contador_uniao;i++)
    {
        printf(" %d",uniao[i]);
    }
    return 0;
}