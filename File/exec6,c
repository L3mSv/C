/*
Desenvolva um programa que leia o arquivo registro_alunos.txt e armazene
as informações em um vetor de uma struct Alunos composta pelos campos cpf,
turma, nome e nota. Após, imprima no terminal todos os elementos do vetor criado
no formato “CPF: <cpf>\nNome: <nome>\nTurma: <turma>\nNota em PC:
<nota>”.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Aluno
{
    int cpf;
    int turma;
    char nome[50];
    float nota;
};
typedef struct Aluno aluno;

void preencheRegistro(aluno* aluno){
    printf("Informe o nome: ");
    scanf("%s", aluno->nome[50]);

    printf("Informe o numero da turma:");
    scanf("%d", aluno->turma);

    printf("Informe o CPF: ");
    scanf("%d", aluno->cpf);

    printf("Informe a nota: ");
    scanf("%f", aluno->nota);
}

int main(){
    FILE* fptr;
    fptr = fopen("registro_alunos.txt", "w");

    int quant_alunos;
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quant_alunos);

    aluno registroAluno[quant_alunos];

    for(int i = 0; i < quant_alunos; i++){
        preencheRegistro(registroAluno);
    }
    return 0;
}
