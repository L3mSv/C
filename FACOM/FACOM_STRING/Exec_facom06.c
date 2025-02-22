#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 100
int main()
{
    char nome[TAMANHO];
    char genero;
    int idade;

    printf("Informe o nome: ");fgets(nome,TAMANHO,stdin);
    printf("Informe o genero F[feminino] ou M[masculino]: ");
    scanf(" %c",&genero);
    printf("Informe a idade: ");scanf(" %d",&idade);
    printf("\n\n");
    if(genero == 'f' || genero == 'F' && idade < 25)
        printf("ACEITO");
    else
        printf("NAO ACEITO");
    return 0;
}