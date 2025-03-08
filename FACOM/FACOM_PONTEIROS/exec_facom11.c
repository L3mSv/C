#include <stdio.h>

#define TAMANHO 5
int main(){
    int quantidade_pares=0,vetor[TAMANHO];
    while(quantidade_pares != 5){
        printf("Informe um valor: ");scanf(" %d",&vetor[quantidade_pares]);
        if(vetor[quantidade_pares]%2==0)
            quantidade_pares++;
        else    
            printf("ERRO! O VALOR NAO E PAR\n");
    }
    printf("\n\n");
    for(int i=0;i<TAMANHO;i++){
        printf("ENDERECO[%d]: %p\n",i,vetor[i]);
    }
    return 0;
}