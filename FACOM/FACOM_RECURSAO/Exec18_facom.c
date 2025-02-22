#include <stdio.h>

int Verificao_N(void)
{

    int n = 0;
    int verificacao_n = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf(" %d", &verificacao_n);

    while(verificacao_n <= 0)
    {
        printf("\nErro! O numero nao e um inteiro positivo\n");
        printf("Digite um numero inteiro positivo: ");
        scanf(" %d", &verificacao_n);
    }
    
    n = verificacao_n;

    return n;
}

int Super_Fatorial(int n, int contador_do_n, int proximo_fatorial, int fatorial_total)
{
    if(n == 1 && proximo_fatorial == 1)
    {
        return 1;
    }

    if(n == 1)
    {
        fatorial_total = contador_do_n;
        contador_do_n = 1;

        proximo_fatorial --;

        n = proximo_fatorial;

        return fatorial_total * Super_Fatorial(n, contador_do_n, proximo_fatorial, fatorial_total);
    }

    contador_do_n *= n;

    return Super_Fatorial(n - 1, contador_do_n, proximo_fatorial, fatorial_total);
}

int main()
{
    int n = Verificao_N();

    printf("sf(%d) = %d", n, Super_Fatorial(n-1, n, n, n));

    return 0;
}