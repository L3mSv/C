#include <stdio.h>

float SerieS(float n)
{
    if(n == 0.0)
    {
        return 0.0;
    }

    return ((1 + n*n)/n) + SerieS(n - 1);

}

int main()
{
    float n = 0.0;
    float verifica_n = 0.0;

    printf("Digite um valor inteiro positivo (maior que 0): ");
    scanf(" %f", &verifica_n);
    
    while(verifica_n <= 0.0)
    {
        printf("Erro! O valor nao e inteiro positivo\n");
        printf("Digite um valor inteiro positivo (maior que 0): ");  
        scanf(" %f", &verifica_n);     
    }

    n = verifica_n;

    printf(" %.2f", SerieS(n));

    return 0;
}