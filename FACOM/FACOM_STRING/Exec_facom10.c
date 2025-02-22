#include <stdio.h>

#define TAMANHO 100
int main()
{
    char string[TAMANHO];
    char string_inversa[TAMANHO];

    printf("Informe a string: ");fgets(string,TAMANHO,stdin);

    int contador=0;
    for(int i=0;string[i]!='\n' && string[i]!='\0';i++)
    {
        contador++;
    }
    printf("Quant.caracteres: %d",contador);
    printf("\n\n");
    int contador_menos_um = contador-1;
    for(int i=0;i<contador;i++)
    {
        string_inversa[i] = string[contador_menos_um];
        contador_menos_um--;
    }
    string_inversa[contador]='\0';
    printf("ORIGINAL: %s",string);
    printf("INVERSA: %s",string_inversa);
    return 0;
}