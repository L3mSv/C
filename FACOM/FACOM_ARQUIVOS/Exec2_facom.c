#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_STRING 30

int main()
{
    FILE *f = fopen("arq.txt", "w");
    if(f == NULL)
    {
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    char **strings;
    strings = malloc(sizeof(char*));
    if(strings == NULL)
    {
        printf("A memoria nao foi alocada\n");
        exit(0);
    }
    else
    {
        printf("Memoria alocada usando malloc\n");
    }

    char buffer[TAMANHO_STRING];
    int flag = 0;
    int comprimento_string = 0;
    int contador = 1;

    do
    {
        for(int i = (contador - 1); i < contador; i++)
        {
            fgets(buffer, TAMANHO_STRING, stdin);
            getchar();

            comprimento_string = strlen(buffer);
            buffer[comprimento_string - 1] = '\0';
            strings[i] = malloc(comprimento_string * sizeof(char));
            strcpy(strings[i], buffer);
        }

        char string_minuscula[comprimento_string];
        for(int i = 0; i < comprimento_string; i++)
        {
            string_minuscula[i] = buffer[i];
            string_minuscula[i] = tolower(string_minuscula[i]);
        }

        int verifica_flag = strcmp(string_minuscula, "sair");
        if(verifica_flag == 0)
        {
            flag = 1;
        }

        if(flag == 0)
        {
            strings = realloc(strings, sizeof(char));
            contador ++;
        }

    }while(flag == 0);
    
    fclose(f);


    return 0;
}