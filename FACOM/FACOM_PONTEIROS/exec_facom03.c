#include <stdio.h>

int main(){
    int x,y;
    printf("Digite um valor para X: ");scanf(" %d",&x);
    printf("Digite um valor para Y: ");scanf(" %d",&y);
    printf("\n\n");
    if(&x >= &y)
        printf("VALOR: %d|ENDERECO: %p",x,&x);
    else
        printf("VALOR: %d|ENDERECO: %p",y,&y);
    return 0;
}