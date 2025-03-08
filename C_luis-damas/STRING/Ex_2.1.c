#include <stdio.h>
#include <string.h>

#define  TAMANHO 25
int main()
{
    char texto[TAMANHO];
    int n_caracteres=0;
    fgets(texto,TAMANHO,stdin);

    for(int i=0; i!='\0';i++){
        if (i > 65 && i < 90){
            n_caracteres++;
        }
        if (i >97 && i <122){
            n_caracteres++;
        }
    }
    printf("O numero de caracteres e: %d",n_caracteres);
    return 0;
}
