#include <stdio.h>

int Pares_Crescente(int n, int n_inverso)
{
    if(n == 0)
    {
        printf("%d", n_inverso);
        return 0;
    }

    printf("%d, ", n_inverso-n);
    return Pares_Crescente(n - 2, n_inverso);
}

void main()
{
    int n = 0;
    int verificacao_n = 0;
    int n_inverso = 0;

    printf("Digite um numero par positivo: ");
    scanf(" %d", &verificacao_n);
    if(verificacao_n % 2 == 0)
    {
        n = verificacao_n; 
    }
    else
    {
        while(verificacao_n % 2 != 0)
        {
            printf("\nErro! O numero nao e um par positivo \n");
            printf("Digite um numero par positivo: ");
            scanf(" %d", &verificacao_n);
            if(verificacao_n % 2 == 0)
                n = verificacao_n;


        }
    }
    n_inverso = n;

    Pares_Crescente(n, n_inverso);
}


