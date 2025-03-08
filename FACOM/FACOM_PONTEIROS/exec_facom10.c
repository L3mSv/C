#include <stdio.h>

#define TAMANHO 5
int main(){
    int vetor[TAMANHO];
    for(int i=0;i<TAMANHO;i++){
        printf("Insira um valor: ");scanf(" %d",&vetor[i]);
        int *valor = &vetor[i];
        *valor *= 2;
        printf(" %d\n",*valor);
    }
    return 0;
}