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

int HiperFatorial(int n, int n_exponencial, int const_n, int fatorial_total)
{
    if(n == 1 && n_exponencial == 1)
    {
        return 1;
    }

    if(n_exponencial == 1)
    {
        fatorial_total = n;

        const_n--;

        return fatorial_total * HiperFatorial(n = const_n, n_exponencial = const_n, const_n, fatorial_total);
    }

    n *= const_n;
    return HiperFatorial(n, n_exponencial - 1, const_n, fatorial_total);
}

int main()
{
    int n = Verificao_N();

    printf("%d ",HiperFatorial(n, n, n, 0));
    return 0;
}