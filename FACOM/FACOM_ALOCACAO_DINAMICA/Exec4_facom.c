#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string;
    int tamanho_string = 0;

    printf("Informe o tamanho da string: ");
    scanf(" %d", &tamanho_string);

    string = malloc(tamanho_string * sizeof(char));

    printf("Digite o conteudo da string: ");
    fgets(string, tamanho_string, stdin);

    for(int i = 0; i < tamanho_string; i++)
    {
        if(string[i] != 'a' || string[i] != 'e' || string[i] != 'i' || string[i] != 'o' || string[i] != 'u')
        {
                    if(string[i] != 'A' || string[i] != 'E' || string[i] != 'I' || string[i] != 'O' || string[i] != 'U')
                    {
                        printf(" %s", string[i]);
                    }
        }
    }

    return 0;
}