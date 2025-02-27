/*
Leia o arquivo notas.txt e apresente no terminal quantos alunos tiraram o
conceito A+, A, B, C e D conforme a tabela abaixo.

Nota                 Conceito

De 0,0 à 5,0            D
Acima de 5,0 até 7,0    C
Acima de 7,0 até 9,0    B
Acima de 9,0 até 9,5    A
Acima de 9,5 até 10,0   A+
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudante
{
    char nome[50];
    float nota;
    char conceito;
};
typedef struct Estudante estudante;


int main(){

    FILE* fptr;
    fptr = fopen("notas.txt", "w");
    int quant_alunos;

    printf("Informe o numero de alunos: ");
    scanf("%d", &quant_alunos);

    estudante turma[quant_alunos];

    for(int i = 0; i < quant_alunos; i++){

        char temp_nome[50];
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf("%s", temp_nome);
        strcpy(turma[i].nome, temp_nome);

        printf("Digite a nota: ");
        scanf("%f", &turma[i].nota);


        if(turma[i].nota <= 5.0) turma[i].conceito = 'D';
        else if(turma[i].nota > 5.0 && turma[i].nota <= 7.0) turma[i].conceito = 'C';
        else if(turma[i].nota > 7.0 && turma[i].nota <= 9.0) turma[i].conceito = 'B';
        else if(turma[i].nota > 9.0 && turma[i].nota <= 9.5) turma[i].conceito = 'A';
        else  turma[i].conceito = 'S';

        fprintf(fptr, "%s       %.2f      %c\n", turma[i].nome, turma[i].nota, turma[i].conceito);

    }

    return 0;
}