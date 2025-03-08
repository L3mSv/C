#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void segundos_em_outras_grandezas(int horas,int minutos,int segundos)
{
    int horas_em_segundos = horas*3600;
    int minutos_em_segundos = minutos*60;
    printf("HORAS: %d|SEGUNDOS: %d\n",horas,horas_em_segundos);
    printf("MINUTOS: %d|SEGUNDOS: %d\n",minutos,minutos_em_segundos);
    printf("SEGUNDOS: %d",segundos);
}
int main()
{
    int horas,minutos,segundos;
    printf("Informe as horas: ");scanf(" %d",&horas);
    printf("Informe os minutos: ");scanf(" %d",&minutos);
    printf("Informe os segundos: ");scanf(" %d",&segundos);
    printf("\n\n");
    segundos_em_outras_grandezas(horas,minutos,segundos);
    return 0;
}