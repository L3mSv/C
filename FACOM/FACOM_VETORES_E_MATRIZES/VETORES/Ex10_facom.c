#include <stdio.h>

#define NALUNOS 15
int main(){
    float notas[NALUNOS];
    float soma_notas =0,media_geral;
    for(int i=0;i<15;i++){
        printf("Insira a nota do aluno[%d]: ",i);scanf(" %f",&notas[i]);
        soma_notas += notas[i];
        media_geral = soma_notas/15;
    }
    printf("MEDIA GERAL: %.2f",media_geral);
    return 0;
}