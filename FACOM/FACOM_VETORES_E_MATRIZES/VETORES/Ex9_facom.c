#include <stdio.h>

#define TAMANHO 6
int main(){
    int vetor[TAMANHO];
    int n_pares = 0;
    while(n_pares != 6){
        int num;
        printf("Digite um numero: ");scanf(" %d",&num);
        if(num%2==0){
            vetor[n_pares] = num;
            n_pares ++;
            printf("NUM PAR ADICIONADO|TOTAL: %d\n",n_pares);
        }
        else{
            printf("O numero deve ser par!\n");
        }
    }
    printf("\n\n");
    for(int i=0;i<6;i++){
        printf("Vetor[%d]= %d\n",5-i,vetor[5-i]);
    }
    return 0;
}