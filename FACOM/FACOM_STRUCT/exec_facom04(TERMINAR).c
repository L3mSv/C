#include <stdio.h>

#define TAMANHO 1000
#define NALUNOS 5

struct aluno
{
    char nome[TAMANHO];
    float nota_primeira_prova;
    float nota_segunda_prova;
    float nota_terceira_prova;
};

int main()
{
    struct aluno alunos[NALUNOS];
    float medias_alunos[NALUNOS];
    for(int i=0; i<NALUNOS; i++){
        printf("Informe o nome do aluno: ");
        fgets(alunos[i].nome,TAMANHO,stdin);

        printf("Nota PROVA1: ");
        scanf(" %f",&alunos[i].nota_primeira_prova);

        printf("Nota PROVA2: ");
        scanf(" %f",&alunos[i].nota_segunda_prova);

        printf("Nota PROVA3: ");
        scanf(" %f",&alunos[i].nota_terceira_prova);

        medias_alunos[i] = (alunos[i].nota_primeira_prova + alunos[i].nota_segunda_prova + alunos[i].nota_terceira_prova)/3; 
        printf("\nMedia_aluno: %.2f",medias_alunos[i]);
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

#define TAMANHO_CURSO 1000
#define TAMANHO_NOME 1000
#define NALUNOS 5

struct aluno{
    char nome[TAMANHO_NOME];
    char curso[TAMANHO_CURSO]; 
    int matricula;
};

int main(){
    struct aluno alunos[NALUNOS];
    for(int i=0; i<NALUNOS;i++){
        if(getchar()!='\0')
        printf("\nInforme o nome do aluno: ");fgets(alunos[i].nome,TAMANHO_NOME,stdin);
        printf("Informe o curso do aluno: ");fgets(alunos[i].curso,TAMANHO_CURSO,stdin);
        printf("Informe a matricula do aluno: ");scanf(" %d",&alunos[i].matricula);
    }
    printf("\n\n");
    for(int i=0; i<NALUNOS;i++){
        printf("ALUNO[%d]",i);
        printf("Nome: %s",alunos[i].nome);
        printf("Curso: %s",alunos[i].curso);
        printf("Matricula: %d",alunos[i].matricula);
        printf("\n");
    }
    return 0;
}
