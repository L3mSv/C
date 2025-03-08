#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 100
int main()
{
    char nome[TAMANHO];
    printf("Digite um nome: ");fgets(nome,TAMANHO,stdin);
    printf("\n\n");
    printf("As 4 letras do nome sao:");
    for(int i=0;i<4;i++)
    {
        printf(" %c,",nome[i]);
    }

    return 0;
}