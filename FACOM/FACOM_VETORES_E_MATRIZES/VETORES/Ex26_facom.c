#include <stdio.h>
#include <math.h>

int main()
{
    int n = 3;
    float vetor[n];
    float media_do_vetor = 0.0;

    float desvio_padrao = 0.0;

    for(int i=0;i<n;i++)
    {
        printf("Informe o valor da posicao %d do vetor: ",i+1);
        scanf(" %f",&vetor[i]);

        media_do_vetor += vetor[i];
    }

    media_do_vetor /= 3;

    for(int i=0; i<n; i++)
    {
        desvio_padrao += pow((vetor[i] - media_do_vetor),2);
    }
    desvio_padrao = sqrt((desvio_padrao/n));
    printf("\nMEDIA DO VETOR: %.2f",media_do_vetor);
    printf("\nDESVIO PADRAO: %.4f",desvio_padrao);
    return 0;
}

/* COMO N TEM UM EXEMPLO PRA VER SE TA CERTO NA FOLHA DE EXECS
EU ME ORIENTEI PELA FORMULA DO DESVIO PADRADO DO SITE TODA MATERIA*/