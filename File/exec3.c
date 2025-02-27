/*
Implemente um programa que, para cada execução, imprima a palavra “PC” em um arquivo de texto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fptr;
    fptr = fopen("pc.txt", "w");

    fprintf(fptr, "PC\n");

    return 0;
}