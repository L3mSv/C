#include <stdio.h>

#define TAMANHO 5
int main(){
    int vetor[TAMANHO];
    int soma_valores=0;
    for(int i=0; i<5;i++){
        printf("Digite um valor: ");scanf(" %d",&vetor[i]);
        soma_valores += vetor[i];
    }
    printf("\n\n");
    int maior_valor=vetor[0],menor_valor=vetor[0],media;
    for(int i=0; i<5;i++){
        if(maior_valor < vetor[i])
            maior_valor = vetor[i];
        if(menor_valor > vetor[i])
            menor_valor = vetor[i];
        printf("Vetor[%d]: %d\n",i,vetor[i]);
    }
    media = soma_valores/5;
    printf("MAIOR VALOR: %d\n",maior_valor);
    printf("MENOR VALOR: %d\n",menor_valor);
    printf("MEDIA: %d",media);
    return 0;
}