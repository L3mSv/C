#include <stdio.h>

void simplifica(int *p_num, int *p_deno){
    if(*p_num < *p_deno){
        for(int i=*p_num;i>0;i--){
            if(*p_num%i==0 && *p_deno%i==0){
                *p_num = *p_num/i;
                *p_deno= *p_deno/i;
            }

        }
    }
    else
    {
        for(int i=*p_deno;i>0;i--){
            if(*p_num%i==0 && *p_deno%i==0){
                *p_num = *p_num/i;
                *p_deno= *p_deno/i;
            }
        }
    }
    return;
}

int main(){
    int num,deno;
    printf("Digite um numerador: ");scanf(" %d",&num);
    printf("Digite um denominador:");scanf(" %d",&deno);

    int *p_num = &num;
    int *p_deno = &deno;
    simplifica(&num,&deno);

    printf("%d/%d", *p_num,*p_deno);
    return 0;
}