#include <stdio.h>

#define TAMANHO 10
int main(){
    float soma_positivos=0,vetor[TAMANHO];
    int quantidade_negativos;
    for(int i=0;i<10;i++){
        printf("Digite um numero(float) qualquer: ");scanf(" %f",&vetor[i]);
        if(vetor[i] >= 0)
            soma_positivos += vetor[i];
        else    
            quantidade_negativos++;
    }
    printf("\n\n");
    printf("SOMA POSITIVOS: %.2f\n",soma_positivos);
    printf("QUANTIDADE NEGATIVOS: %d",quantidade_negativos);
    return 0;
}