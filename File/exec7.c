/*
Modifique a struct do exercício anterior de forma a conter um campo situação com valor 1 para aqueles alunos que tiraram média superior ou igual 7,0 e 0 para alunos com média abaixo de 7,0. Após, crie um arquivo de saída chamado divulgação_resultados.txt contendo o nome de cada aluno, sua nota e a sua
situação (aprovado/reprovado).
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
    int situacao;
};
typedef struct Aluno aluno;

void preencheRegistro(aluno* aluno){
    char temp_nome[50];
    printf("\nInforme o nome: ");
    scanf("%s", &temp_nome);
    strcpy(aluno->nome, temp_nome);

    printf("Informe o numero da turma:");
    scanf("%d", &aluno->turma);

    printf("Informe o CPF: ");
    scanf("%d", &aluno->cpf);

    printf("Informe a nota: ");
    scanf("%f", &aluno->nota);
}

void resultadoSituacao(aluno* aluno, FILE** fptr2){
    if(aluno->situacao  == 0)
        fprintf(*fptr2, "Nome:      %s      Situacao:   Aprovado\n", aluno->nome);
    else
        fprintf(*fptr2, "Nome:      %s       Situacao:  Reprovado\n", aluno->nome);
}

int main(){
    FILE* fptr;
    FILE* fptr2;
    fptr = fopen("registro_alunos.txt", "w");
    fptr2 = fopen("divulgacao_resultados.txt", "w");

    int quant_alunos;
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quant_alunos);

    aluno registroAluno[quant_alunos];

    for(int i = 0; i < quant_alunos; i++){
        preencheRegistro((registroAluno + i));
        fprintf(fptr, "\n%s       %d      %d      %.2f", (registroAluno + i)->nome, (registroAluno + i)->turma, (registroAluno + i)->cpf, (registroAluno + i)->nota);
    }

    for(int i = 0; i < quant_alunos; i++){
        printf("\nCPF: %d\n", (registroAluno + i)->cpf);
        printf("Nome: %s\n", (registroAluno + i)->nome);
        printf("Turma: %d\n", (registroAluno + i)->turma);
        printf("Nota em PC: %.2f\n", (registroAluno + i )->nota);
        resultadoSituacao(registroAluno, &fptr2);
    }

    fclose(fptr);
    fclose(fptr2);
    return 0;
}