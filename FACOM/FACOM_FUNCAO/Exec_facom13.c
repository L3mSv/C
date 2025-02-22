#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int operacao_x_y(int x,int y,char operacao)
{
    if(operacao == '+')
        return x+y;
    else if(operacao == '-')
        return x-y;
    else if(operacao == '*')
        return x*y;
    else if(operacao == '/')
        return x/y;
    else
        printf("ERRO! caracter invalido");
        return 0;
}
int main()
{
    int x,y;
    char operacao;
    printf("Informe o valor X: ");scanf(" %d",&x);
    printf("Informe o valor Y: ");scanf(" %d",&y);
    printf("QUAL DAS OPERACORES [+]adicao, [-]subtracao, [/]divisao, [*]multiplicacao: ");scanf(" %c",&operacao);
    int operacao_efetivada = operacao_x_y(x,y,operacao);
    printf("\n\n");
    printf("%d %c %d  = %d",x,operacao,y,operacao_efetivada);
}