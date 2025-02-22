#include <stdio.h>

#define TAMANHO 50
int main()
{
    char string[TAMANHO];
    printf("Informe a string: ");fgets(string,TAMANHO,stdin);

    for(int i=0;string[i]!='\n';i++)
    {
        string[i] += 1;
    }
    printf("\n\n");
    printf(" %s",string);
    return 0;
}