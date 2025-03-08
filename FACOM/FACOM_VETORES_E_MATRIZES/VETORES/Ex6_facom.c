#include<stdio.h>

#define TAMANHO 10
int main(){
    int vetor[TAMANHO];
    for(int i=0; i<TAMANHO;i++){
        printf("Digite um numero: ");scanf(" %d",&vetor[i]);
    }
    int menor_valor=vetor[0],maior_valor=vetor[0];
    for(int i=0; i<TAMANHO;i++){
        if(vetor[i] > maior_valor)
            maior_valor = vetor[i];
        if(vetor[i] < menor_valor)
            menor_valor = vetor[i];
    }
    printf("\n\n");
    printf("MAIOR VALOR: %d",maior_valor);
    printf("\nMENOR VALOR: %d",menor_valor);
    
    return 0;
}