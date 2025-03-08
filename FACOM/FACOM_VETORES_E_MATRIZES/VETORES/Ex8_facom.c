#include <stdio.h>

#define TAMANHO 6
int main(){
    int vetor[TAMANHO];
    for(int i=0;i<6;i++){
        printf("Digite um numero: ");scanf(" %d",&vetor[i]);
    }
    printf("\n\n");
    for(int i=0;i<6;i++){
        printf("Vetor[%d]= %d\n",5-i,vetor[5-i]);
    }
    return 0;
}