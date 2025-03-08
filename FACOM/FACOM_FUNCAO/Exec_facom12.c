#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int soma_dos_algarismos(int valor)
{
    if(valor <= 0)
    {
        printf("ERRO! o valor deve ser maior que 0");
        return 0;
    }
    int soma = 0;
    int algarismo = valor/10;
    int resto = valor%10;
    soma += resto;
    while(algarismo != 0)
    {
        resto = algarismo%10;
        algarismo = algarismo/10;
        soma += resto;
    }
    return soma;
}
int main()
{
    int valor;
    printf("Informe um valor: ");scanf(" %d",&valor);
    int soma_algarismos = soma_dos_algarismos(valor);
    printf("A soma dos algarismos: %d",soma_algarismos);
    return 0;
}