#include <stdio.h>

int main()
{
    int dia,mes,ano;

    printf("Digite uma data no formato aaaa-mm-dd:\n");
    scanf("%d-%d-%d",&ano,&mes,&dia);
    printf("\nA data anterior no estilo brasileiro: %d/%d/%d",dia,mes,ano);
    return 0;
}
