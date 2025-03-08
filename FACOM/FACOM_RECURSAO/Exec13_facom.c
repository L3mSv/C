#include <stdio.h>

int SomaSerie(int i, int j, int k)
{
    if(i == j)
    {
        return i + k;
    }

    return i + k + SomaSerie(i + 1, j, k);
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

    printf(" %d", SomaSerie(i,j,k));

    return 0;
}