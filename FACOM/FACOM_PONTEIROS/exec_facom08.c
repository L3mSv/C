#include <stdio.h>

#define TAMANHO 10
int main(){
    float vetor[TAMANHO];
    for(int i=0;i<TAMANHO;i++){
        printf("Informe o valor[%d]: ",i);scanf(" %f",&vetor[i]);
    }
    printf("\n\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("ENDERECO[%d]: %p\n",i,&vetor[i]);
    }
    
    return 0;
}