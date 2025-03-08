#include <stdio.h>
#include <stdlib.h>

# define Nome_produto 30

typedef struct 
{

    char nome_produto[Nome_produto];
    int codigo_produto;
    float preco;

}Registro;

int main()
{
    int *vetor;
    vetor = malloc(256 * sizeof(int));

    int *matriz;
    matriz = calloc(10, sizeof(int));
    for(int i = 0; i < 10; i++)
    {
        matriz = calloc(10, sizeof(int));
    }

    Registro *vetor_registro;
    vetor_registro = calloc(50, sizeof(Registro));

    char **texto;
    texto = calloc(100, sizeof(char));
    for(int i = 0; i < 100; i++)
    {
        texto = calloc(80, sizeof(char));
    }


    return 0;
}