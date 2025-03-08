#include <stdio.h>

#define TAMANHO 8
int main(){
    int valores[TAMANHO]; 
    int x=0,y=0;
    for(int i=0;i<TAMANHO;i++){
        printf("\nDigite um numero: ");scanf(" %d",&valores[i]);
    }
    printf("\n\n");
    printf("\nEscolha uma das 8 posicoes do vetor para ser armazenada em X: ");scanf(" %d",&x);
    printf("\nEscolha uma das 8 posicoes do vetor para ser armazenada em Y: ");scanf(" %d",&y);
    
    int soma = valores[x] + valores[y];
    printf("\n\n");
    printf("A soma entre valores[%d]->%d e valores[%d]->%d = %d",x,valores[x],y,valores[y],soma); 
    return 0;
}