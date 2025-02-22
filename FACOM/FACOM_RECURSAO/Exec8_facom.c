#include <stdio.h>

int Naturais_Decrescente(int n)
{
    if(n == 0)
    {
        printf("%d ", n);
        return 0;
    }
    printf("%d, ", n);
    return Naturais_Decrescente(n - 1);


}

int main()
{
    int n = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf(" %d", &n);

    Naturais_Decrescente(n);
    return 0;
}