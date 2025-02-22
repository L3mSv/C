#include <stdio.h>

void soma_do_dobro(int *p_a,int *p_b){
    *p_a *= *p_a;
    *p_b *= *p_b;
}
int main(){
    int a,b;
    printf("Digite um valor para A: ");scanf(" %d",&a);
    printf("Digite um valor para B: ");scanf(" %d",&b);
    int guarda_a=a,guarda_b=b;
    soma_do_dobro(&a,&b);
    printf("\n\n");
    int soma = a + b;
    printf("A soma do dobro de A=%d e B=%d -> %d",guarda_a,guarda_b,soma);
    return 0;
}