#include <stdio.h>

#define TAMANHO 1000
struct horario
{
    int hora;
    int minuto;
    int segundos;
};

struct data
{
    int dia;
    int mes;
    int ano;
};

struct compromisso
{
    char texto[TAMANHO];
    struct horario horario_compromisso;
    struct data data_compromisso;
};

int main(){
    struct compromisso info_compromisso;
    printf("Informe qual era o seu compromisso e como foi:");fgets(info_compromisso.texto,TAMANHO,stdin);
    printf("\nInforme o horario do seu compromisso no formato HORA MES SEGUNDOS ");scanf("%d%d%d",&info_compromisso.horario_compromisso.hora,&info_compromisso.horario_compromisso.minuto,&info_compromisso.horario_compromisso.segundos);
    printf("\nInforme a data do seu compromisso no formato DIA MES ANO ");scanf("%d%d%d",&info_compromisso.data_compromisso.dia,&info_compromisso.data_compromisso.mes,&info_compromisso.data_compromisso.ano);

    printf("\n\n");


    printf("\nDATA: %d/%d/%d",info_compromisso.data_compromisso.dia,info_compromisso.data_compromisso.mes,info_compromisso.data_compromisso.ano);
    printf("\nHORARIO: %d:%d:%d\n",info_compromisso.horario_compromisso.hora,info_compromisso.horario_compromisso.minuto,info_compromisso.horario_compromisso.segundos);
    printf("\nCOMENTARIO: %s\n",info_compromisso.texto);
    return 0;
}