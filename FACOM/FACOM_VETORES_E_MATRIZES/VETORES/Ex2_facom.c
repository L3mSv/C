#include <stdio.h>

int main(){
    int valores[6]={};
    for(int i=0;i<6;i++){
        printf("\nDigite um numero aleatorio: ");scanf(" %d",&valores[i]);
    }
    printf("\n\n");
    for(int i=0; i<6; i++){
        printf("Valores[%d]: %d\n",i,valores[i]);
    }
    return 0;
}