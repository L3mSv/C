#include <stdio.h>

int Pares_Decrescente(int n)
{
    if(n == 0)
    {
        printf("%d ", n);
        return 0;
    }
    printf("%d, ", n);
    return Pares_Decrescente(n - 2);


}

int main()
{
    int n = 0;
    int verificacao_n = 0;

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

    Pares_Decrescente(n);

    return 0;
}