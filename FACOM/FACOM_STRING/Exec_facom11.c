#include <stdio.h>
#include <ctype.h>

#define TAMANHO 100
int main()
{
    char string[TAMANHO];
    char string_sem_vogal[TAMANHO];

    printf("Informe uma string: ");
    fgets(string,TAMANHO,stdin);

    int i=0;
    int x=0;
    while(string[i] != '\0')
    {
        if(tolower(string[i]) == 'a' || tolower(string[i]) == 'e' || tolower(string[i]) == 'i' || tolower(string[i]) == 'o' || tolower(string[i]) == 'u')
        {
            i++;
            continue;
        }
        else
        {
            if(string[i] != ' ')
            {
                string_sem_vogal[x++] = string[i];
            }
        }
        i++;
    }
    string_sem_vogal[x]='\0';
    printf("\n");
    printf(" %s",string_sem_vogal);
    return 0;
}