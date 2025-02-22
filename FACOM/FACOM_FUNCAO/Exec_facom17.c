#include <stdio.h>

int Soma_do_Intervalo(int valor1,int valor2)
{
    int soma = 0;
    for(int i=valor1+1;i<valor2;i++)
    {
        soma += i;
    }
    return soma;
}
int main()
{
    int valor1,valor2;
    printf("Insira um valor: "); scanf(" %d",&valor1);
    printf("Insira outro valor: ");scanf(" %d",&valor2);

    int valor_da_soma = Soma_do_Intervalo(valor1,valor2);
    printf("\n\n");
    printf("Soma do Intervalo: %d",valor_da_soma);
    return 0;
}