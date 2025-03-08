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

int Sequencia(int n)
{
    if(n == 1)
    {
        return 1;
    }

    if(n == 2)
    {
        return 2;
    }

    return 2 * Sequencia(n - 1) + 3 * Sequencia(n - 2);
}

int main()
{
    int n = Verificao_N();

    printf("%d ", Sequencia(n));
    return 0;
}