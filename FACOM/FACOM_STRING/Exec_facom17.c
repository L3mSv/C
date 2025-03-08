#include <stdio.h>
#include <ctype.h>

#define TAMANHO 999
int main()
{
    char string[TAMANHO];
    char string_sem_espacos[TAMANHO];

    printf("Informe a string: ");fgets(string,TAMANHO,stdin);

    int i=0;
    int x=0;
    while (string[i] != '\0')
    {
        if(!(isspace(string[i])))
        {
            string_sem_espacos[x++] = string[i]; 
        }
        i++;
    }
    string_sem_espacos[x] = '\0';
    printf("\n\n");
    printf(" %s",string_sem_espacos);
    return 0;
}