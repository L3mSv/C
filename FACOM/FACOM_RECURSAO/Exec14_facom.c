#include <stdio.h>

int ImprimeSerie(int i, int j, int k)
{
    if(i == j)
    {
        printf("%d ", i + k);
        return 0;
    }

    printf("%d, ", i + k);
    return ImprimeSerie(i + 1, j, k);
}

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Digite um valor inteiro para i: ");
    scanf(" %d", &i);

    printf("Digite outro valor inteiro para j: ");
    scanf(" %d", &j);

    printf("Por fim, escolha o valor inteiro do incremento k: ");
    scanf(" %d", &k);

    ImprimeSerie(i, j, k);

    return 0;
}