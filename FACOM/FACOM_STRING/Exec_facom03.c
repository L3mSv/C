#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 100
int main()
{
    char nome[TAMANHO];
    printf("Escreva um nome iniciando com a letra 'a': ");
    fgets(nome,TAMANHO,stdin);
    printf("\n\n");
    if(nome[0] != 'a' && nome[0] != 'A')
    {
        printf("ERRO! o nome deve iniciar com a letra [A] ou [a]");
    }
    printf(" %s",nome);
    return 0;
}
