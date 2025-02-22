#include <stdio.h>

#define TAMANHO 100
int main()
{
    char texto[TAMANHO];
    int contador=0;
    printf("Informe um texto:\n");fgets(texto,TAMANHO,stdin);
    for(int i=0;texto[i]!='\n';i++)
    {
        if(texto[i] == '1')
            contador++;
    }
    printf("\n\n");
    printf("Quantidade de 1: %d",contador);
    return 0;
}