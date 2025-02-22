#include <stdio.h>

#define TAMANHO 100
int main()
{
    char string1[TAMANHO];
    char string2[TAMANHO];

    printf("Digite alguma frase: ");
    fgets(string1,TAMANHO,stdin);

    printf("Digite outra frase: ");
    fgets(string2,TAMANHO,stdin);

    for(int i=0;string1[i]!='\n' && string2[i]!='\n';i++)
    {
        if(string1[i] != string2[i])
        {
            printf("\nAs strings sao DIFERENTES!");
            return 1;
        }
    }
    printf("\nAs strings sao IGUAIS!");
    return 0;

}