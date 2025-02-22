#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void data(int dia, int mes, int ano)
{
    printf("DATA: %d/%d/%d",dia,mes,ano);
}
int main()
{
    int dia,mes,ano;
    printf("Informe o dia: ");scanf(" %d",&dia);
    printf("Informe o mes: ");scanf(" %d",&mes);
    printf("Informe o ano: ");scanf(" %d",&ano);
    printf("\n\n");
    data(dia,mes,ano);
    return 0;
}