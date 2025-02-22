#include <stdio.h>
#include <limits.h>
#include <math.h>

int MAIOR_FATOR_PRIMO(int valor)
{

}

int main()
{
    int valor=-1;
    while(valor == -1)
    {
        int possivel_valor = 0;
        printf("\nInforme um valor (positivo e diferente de 1): ");scanf(" %d",&possivel_valor);
        if(possivel_valor > 1)
        {
            valor = possivel_valor;
        }
        else
            printf("ERRO! valor igual a um ou negativo");
    }
    int maior_fator_primo = MAIOR_FATOR_PRIMO(valor);
    printf("\nMaior Fator Primo: %d",maior_fator_primo);
    return 0;
}