/*
Implemente um programa que busque o nome de um aluno em
registro_alunos.txt e imprima a sua situação (aprovado/reprovado) no terminal.
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
    strcpy(aluno->nome, toupper(temp_nome));

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

void buscaAluno(aluno* aluno, int quant_alunos){
    char nome_procurado[50];
    printf("Digite o nome do aluno desejado: ");
    scanf("%s", &nome_procurado);

    for(int i = 0; i < quant_alunos; i++)
    {
        if((toupper(nome_procurado) == aluno->nome) && (aluno->situacao == 0))
            printf("%s  Reprovado", aluno->nome);
        else if((toupper(nome_procurado) == aluno->nome) && (aluno->situacao >= 1))
            printf("%s  Aprovado", aluno->nome);
        if(i == (quant_alunos - 1))
            printf("O aluno %s nao esta registrado", nome_procurado);
    }
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

    int opcao = 1;
    do
    {
        printf("\nGostaria de pesquisar um aluno [1 - sim / 0 - nao]");
        scanf("%d", &opcao);

        if(opcao != 0)
            buscaAluno(registroAluno, quant_alunos);
    }
    while(opcao);
    

    fclose(fptr);
    fclose(fptr2);
    return 0;
}