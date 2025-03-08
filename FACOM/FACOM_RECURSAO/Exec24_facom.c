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

int N_esimo_tribonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return 0;
    }

    if(n == 2)
    {
        return 1;
    }

    return N_esimo_tribonacci(n - 1) + N_esimo_tribonacci(n - 2) + N_esimo_tribonacci(n - 3);
}


int main()
{
    int n = Verificao_N();

    printf("%d ", N_esimo_tribonacci(n));
    return 0;
}