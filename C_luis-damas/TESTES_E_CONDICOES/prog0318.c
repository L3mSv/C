#include <stdio.h>

int main()
{
    int ano;

    printf("Informe um ano: "); scanf("%d",&ano);

    int div_1,div_2;
    div_1 = ano%10;
    div_2 = div_1%10;

    if (div_2 == 00){
        if(ano%400 == 0){
            printf("O ano %d foi bissexto.",ano);
        }
        else{
            printf("O ano %d nao foi bissexto.",ano);
        }
    }
    else{
        if(div_2%4==0){
            printf("O ano %d foi bissexto.",ano);
        }
        else{
            printf("O ano %d nao foi bissexto.",ano);
        }
    }
    return 0;
}
