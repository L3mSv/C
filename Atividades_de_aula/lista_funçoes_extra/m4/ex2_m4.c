#include <stdio.h>

int calcula_tempo(int seg, int *p_dias, int *p_horas, int *p_minutos, int *p_segundos);

int main(){
    int seg,dias,horas,minutos,segundos;
    int *p_dias=&dias;
    int *p_horas=&horas;
    int *p_minutos=&minutos;
    int *p_segundos=&segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &seg);

    calcula_tempo(seg, &dias, &horas, &minutos, &segundos);
    printf("Dias: %d\nHoras: %d\nMinutos: %d\nSegundos: %d\n", *p_dias, *p_horas, *p_minutos, *p_segundos);

    return 0;
}

int calcula_tempo(int seg, int *p_dias, int *p_horas, int *p_minutos, int *p_segundos){
    *p_dias = seg / 86400;
    seg = seg % 86400;
    *p_horas = seg / 3600;
    seg = seg % 3600;
    *p_minutos = seg / 60;
    *p_segundos = seg % 60;
}