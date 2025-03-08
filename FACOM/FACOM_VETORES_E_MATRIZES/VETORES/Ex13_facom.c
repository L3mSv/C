#include <stdio.h>

#define TAMANHO 5
int main(){
    int vetor[TAMANHO];
    for(int i=0; i<5;i++){
        printf("Digite um valor: ");scanf(" %d",&vetor[i]);
    }
    printf("\n\n");
    int maior_valor=vetor[0],menor_valor=vetor[0];
    int posicao_maior = 0,posicao_menor = 0;
    for(int i=0; i<5;i++){
        if(vetor[i] > maior_valor){
            posicao_maior = i;
            maior_valor = vetor[i];
        }
        if(vetor[i] < menor_valor){
            posicao_menor = i;
            menor_valor = vetor[i];
        }
    }
    printf("MAIOR VALOR: %d|POSICAO: %d\n",maior_valor,posicao_maior);
    printf("MENOR VALOR: %d|POSICAO: %d",menor_valor,posicao_menor);
    return 0;
}