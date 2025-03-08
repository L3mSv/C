#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 100
int main()
{
    char nome[TAMANHO];
    printf("Informe um nome: ");fgets(nome,TAMANHO,stdin);
    int quantidade_letras=0,contador=0;
    while(nome[contador] != '\0')
    {
        if(!isspace(nome[contador]))
        {
            quantidade_letras++;
        }
        contador++;
    }
    printf("\n\n");
    printf("Quantidade de letras: %d",quantidade_letras);
    return 0;
}