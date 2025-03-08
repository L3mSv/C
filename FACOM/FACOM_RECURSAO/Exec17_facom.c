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

int Fatorial_Quadruplo(int n, int dobro_de_n, int fatorial_n, int fatorial_do_dobro_de_n)
{
    if(dobro_de_n == 1)
    {
        return fatorial_do_dobro_de_n/fatorial_n;
    }

    if(dobro_de_n <= n)
    {
        fatorial_n *= dobro_de_n;

    }

    fatorial_do_dobro_de_n *= dobro_de_n;
    return Fatorial_Quadruplo(n, dobro_de_n - 1, fatorial_n, fatorial_do_dobro_de_n);
}

int main()
{
    int n = Verificao_N();

    printf(" %d", Fatorial_Quadruplo(n, n*2, 1, 1));

    return 0;
}