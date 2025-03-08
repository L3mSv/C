#include <stdio.h>

#define TAMANHO 100

int Verificacao_de_String(char modelo[], int tamanho_modelo, char verificado[], int tamanho_verificado)
{        
    int posicoes_i = 0;
    for(int i = 0; i < tamanho_modelo; i++)
    {
        if(*(modelo + i) == *(verificado + posicoes_i))
        {
            posicoes_i ++;
            if(*(verificado + posicoes_i) != *(modelo + i))
            {
                posicoes_i = 0;
            }

            if(*(verificado + posicoes_i) == tamanho_verificado)
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    char string_1[TAMANHO];
    char string_2[TAMANHO];

    printf("Digite uma frase qualquer: ");
    fgets(string_1, TAMANHO, stdin);
    
    printf("Digite outra frase qualquer: ");
    fgets(string_2, TAMANHO, stdin);

    Verificacao_de_String(string_1, TAMANHO, string_2, TAMANHO);

    if(1)
    {
        printf("As strings sao semelhantes !");
    }
    else
        printf("As strings sao diferentes !");

    return 0;
}