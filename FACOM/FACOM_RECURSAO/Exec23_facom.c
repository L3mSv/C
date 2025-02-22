#include <stdio.h>

int Soma_Elementos_Vetor(int *n, int posicoes)
{
    if(posicoes == 1)
    {
        return *n;
    }

    return *n + Soma_Elementos_Vetor(n + 1, posicoes - 1);
}

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d ", Soma_Elementos_Vetor(vetor, 10));
    return 0;
}