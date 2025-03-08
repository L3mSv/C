#include <stdio.h>

int main(){
    int x=0;
    int y=0;

    if(&x>&y)
        printf("O endereco de x -> %p e maior que o endereco de y -> %p",&x,&y);
    else
        printf("O endereco de y -> %p e maior que o endereco de x -> %p",&y,&x);
    return 0;
}