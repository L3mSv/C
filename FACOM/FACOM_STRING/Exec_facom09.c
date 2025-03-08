#include <stdio.h>

#define TAMANHO 100
int main()
{
    char bits[TAMANHO];
    printf("Escreva um numero em binario: \n");fgets(bits,TAMANHO,stdin);
    printf("\n\n");
    printf("ORIGINAL: %s",bits);
    for(int i=0;bits[i]!='\n';i++)
    {
        if(bits[i] == '0')
        {
            bits[i] = '1';
        }
    }
    printf("ALTERADO: %s",bits);
    return 0;
}