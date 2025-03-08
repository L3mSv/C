#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 1000
int main()
{
    char texto[TAMANHO];
    int quantidade_de_caracteres=0;
    fgets(texto,TAMANHO,stdin);
    while(texto[quantidade_de_caracteres] != '\0')
    {
        quantidade_de_caracteres++;
    }
    quantidade_de_caracteres -= 1;
    printf("\n\n");
    printf(" %s",texto);
    printf(" %d",quantidade_de_caracteres);
    return 0;
}