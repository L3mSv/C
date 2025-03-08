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
        printf("\nInforme o nome do aluno: ");
        if(getchar()!='\0'){
            fgets(alunos[i].nome,TAMANHO_NOME,stdin);
        }
        printf("Informe o curso do aluno: ");fgets(alunos[i].curso,TAMANHO_CURSO,stdin);
        printf("Informe a matricula do aluno: ");scanf(" %d",&alunos[i].matricula);
    }
    printf("\n\n");
    for(int i=0; i<NALUNOS;i++){
        printf("\nALUNO[%d]\n",i);
        printf("Nome: %s",alunos[i].nome);
        printf("Curso: %s",alunos[i].curso);
        printf("Matricula: %d",alunos[i].matricula);
    }
    return 0;
}

/*REVISAR O CODIGO PORQUE O LACO PRINTF CURSO BUGA E NAO DA PARA COLOCAR O VALOR*/