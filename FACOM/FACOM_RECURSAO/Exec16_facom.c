#include <stdio.h>

int Fatorial_Duplo(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n * Fatorial_Duplo(n - 2);
}

int main()
{
    int n = 0;
    int verificacao_n = 0;

    printf("Digite um numero inteiro positivo impar: ");
    scanf(" %d", &verificacao_n);

    while(verificacao_n % 2 == 0 || verificacao_n < 0)
    {
        printf("\nErro! O numero nao e um inteiro positivo impar \n");
        printf("Digite um numero inteiro positivo impar: ");
        scanf(" %d", &verificacao_n);
    }
    
    n = verificacao_n;

    printf(" %d", Fatorial_Duplo(n));

    return 0;
}