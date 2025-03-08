#include <stdio.h>

#define TAMANHO 10
int main(){
    int vetor[TAMANHO];
    for(int i=0; i<10;i++){
        printf("Digite um numero: ");scanf(" %d",&vetor[i]);
    }
    printf("\n\n");
    int maior_elemento = vetor[0];
    int posicao_maior_elemento;
    for(int i=0; i<10;i++){
        printf("Vetor[%d]: %d\n",i,vetor[i]);
        if(vetor[i] > maior_elemento)
            posicao_maior_elemento = i;
            maior_elemento = vetor[i];
    }
    printf("MAIOR ELEMENTO: %d|POSICAO: %d",maior_elemento,posicao_maior_elemento);
    return 0;
}