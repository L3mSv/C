#include <stdio.h>

void inverte_valor(int *p_a, int *p_b);

int main(){
    int a,b;
    printf("Digite um valor para A: ");scanf(" %d",&a);
    printf("Digite um valor para B: ");scanf(" %d",&b);
    inverte_valor(&a,&b);
    printf("\n\n");
    printf("A: %d\n",a);
    printf("B: %d",b); 
    return 0;
}
void inverte_valor(int *p_a, int *p_b){
    int guarda_a=*p_a;
    *p_a = *p_b;
    *p_b = guarda_a;

}