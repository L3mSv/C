#include <stdio.h>
#include <ctype.h>

#define TAMANHO 999
int main()
{
    char string[TAMANHO];
    printf("Informe a string: ");fgets(string,TAMANHO,stdin);

    int contador_de_espacos = 0;

    for(int i=0;string[i]!='\n';i++)
    {
        if(isspace(string[i]))
        {
            contador_de_espacos++;
        }
    }
    printf("\n\n");
    printf(" %s",string);
    printf("\nQuant.espacos: %d",contador_de_espacos);
    return 0;
}