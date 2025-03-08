#include <stdio.h>

void soma_a_b(int *p_a,int *p_b){
    *p_a += *p_b;
}
int main(){
    int a,b;
    printf("Digite um valor para A: ");scanf(" %d",&a);
    printf("Digite um valor para B: ");scanf(" %d",&b);
    soma_a_b(&a,&b);
    printf("\n\n");
    printf("A: %d\n",a);
    printf("B: %d",b);
    return 0;
}