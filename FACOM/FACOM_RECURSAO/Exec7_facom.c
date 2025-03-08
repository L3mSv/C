#include <stdio.h>

int Naturais_Crescente(int n, int n_inverso)
{
    if(n == 0)
    {
        printf("%d", n_inverso);
        return 0;
    }

    printf("%d, ", n_inverso-n);
    return Naturais_Crescente(n - 1, n_inverso);
}

void main()
{
    int n = 0;
    int n_inverso = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf(" %d", &n);
    n_inverso = n;

    Naturais_Crescente(n, n_inverso);
}