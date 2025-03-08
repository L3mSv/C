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

int Fatorial_Exponencial(int n,
                        int const_potencia,
                        int const_n, 
                        int contador_de_expoentes, 
                        int potencia_n)
{
    if(contador_de_expoentes == 1 || contador_de_expoentes == 0)
    {
        return n;
    }

    if(potencia_n == 1)
    {
        const_potencia --;
        contador_de_expoentes --;

        return Fatorial_Exponencial(
            n, 
            const_potencia, 
            const_n = n, 
            contador_de_expoentes, 
            potencia_n = const_potencia);
    }

    n *= const_n;
    return Fatorial_Exponencial(
        n,
        const_potencia,
        const_n, 
        contador_de_expoentes,
        potencia_n - 1);
}

int main()
{
    int n = Verificao_N();

    printf(" %d", Fatorial_Exponencial(n, n - 1, n, n - 1, n - 1));
    return 0;
}