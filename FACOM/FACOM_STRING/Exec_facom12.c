#include <stdio.h>
#include <ctype.h>

#define TAMANHO 999
int main()
{
    char string[TAMANHO];
    printf("Informe a string: ");fgets(string,TAMANHO,stdin);

    char caracter_de_substituicao;
    printf("Digite o caracter que ira substituir as vogais da string: ");scanf(" %c",&caracter_de_substituicao);

    int i = 0;
    while(string[i] != '\0')
    {
        if(tolower(string[i]) == 'a' || tolower(string[i]) == 'e' || tolower(string[i]) == 'i' || tolower(string[i]) == 'o' || tolower(string[i]) == 'u')
        {
            string[i] = caracter_de_substituicao;
        }
        i++;
    }
    printf("\n\n");
    printf(" %s",string);
    return 0;
}