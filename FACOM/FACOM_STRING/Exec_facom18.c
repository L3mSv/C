#include <stdio.h>

#define TAMANHO 999
int main()
{
    char string[TAMANHO];
    printf("Informe a string: ");fgets(string,TAMANHO,stdin);

    char l1;
    printf("Escreva a letra da string a ser substituida: ");scanf(" %c",&l1);

    char l2;
    printf("Digite a letra que ira substituir: ");scanf(" %c",&l2);

    for(int i=0;string[i]!='\n';i++)
    {
        if(string[i] == l1)
        {
            string[i] = l2;
        }
    }
    printf("\n\n");
    printf(" %s",string);
    return 0;
}