#include <stdio.h>

#define TAMANHO 10
int main(){
    int valores[TAMANHO];
    int valores_quadrado[TAMANHO];
    for(int i=0;i<TAMANHO;i++){
        printf("Digite um numero: ");scanf(" %d",&valores[i]);
    }
    printf("\n\n");
    for(int i=0;i<TAMANHO;i++){
        valores_quadrado[i] = valores[i] * valores[i];
        printf("\nValores[%d]: %d",i,valores[i]);
    }
    printf("\n\n");
    for(int i=0;i<TAMANHO;i++){
        printf("\nValores_quadrado[%d]: %d",i,valores_quadrado[i]);
    }
    
    return 0;
}