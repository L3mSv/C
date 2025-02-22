#include <stdio.h>

int main(){
    int a[6] ={1,0,5,-2,-5,7};
    int soma = a[0] + a[1] + a[5];
    printf("SOMA (a[0]+a[1]+a[5]):%d",soma);
    printf("\n");
    a[4] = 100;
    for(int i=0; i<6; i++){
        printf("a[%d]: %d\n",i,a[i]);
    }
    return 0;
}