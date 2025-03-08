#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[1000];
    fgets(texto,1000,stdin);
    printf(" %s",texto);
    return 0;
}