#include <stdio.h>

void maior_menor(int *p_valor1,int *p_valor2){
    int guarda_p_valor1=*p_valor1;
    if(*p_valor1 < *p_valor2)
        *p_valor1 = *p_valor2;
    if(*p_valor2 > guarda_p_valor1)
        *p_valor2 = guarda_p_valor1;
}
int main(){
    int valor1,valor2;
    printf("Digite um valor: ");scanf(" %d",&valor1);
    printf("Digite outro valor: ");scanf(" %d",&valor2);
    maior_menor(&valor1,&valor2);
    printf("\n\n");
    printf("MAIOR VALOR: %d\n",valor1);
    printf("MENOR VALOR: %d",valor2);
    return 0;
}