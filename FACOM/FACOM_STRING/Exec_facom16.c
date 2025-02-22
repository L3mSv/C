#include <stdio.h>

#define TAMANHO 999
int main()
{
    char string[TAMANHO];
    printf("Informe a string: ");fgets(string,TAMANHO,stdin);

    for(int i=0;string[i]!='\n';i++)
    {
        if(string[i] <= 122 && string[i] >= 97)
        {
            string[i] -= 32;
        }
    }
    printf("\n\n");
    printf(" %s",string);
    return 0;
}