#include <stdio.h> 

#define TAMANHO 10
int main(){
    int vetor[TAMANHO];
    int pares = 0;
    for(int i=1; i<=10;i++){
        printf("\nInforme um numero: ");scanf(" %d",&vetor[i]);
        if(vetor[i]%2==0)
            pares++;
    }
    printf("\n\n");
    if(pares >=1)
        printf("O vetor possui %d par(es)",pares);
    else
        printf("O vetor nao possui numeros pares");
    return 0;
}