#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    int matricula;
    char nome[50];
    int codigo_da_disciplina;
    float nota1;
    float nota2;
};
int main()
{
    struct aluno alunos[10];
    float medias_finais[10];
    for(int i=0;i<10;i++)
    {
        printf("Informe o nome do aluno: ");
        gets(alunos[i].nome);

        printf("Numero de matricula: ");scanf(" %d",&alunos[i].matricula);
        printf("Codigo da disciplina: ");scanf(" %d",&alunos[i].codigo_da_disciplina);
        printf("NOTA 1: ");scanf(" %f",&alunos[i].nota1);
        printf("NOTA 2: ");scanf(" %f",&alunos[i].nota2); 
        float media = ((alunos[i].nota1 * 1.0) + (alunos[i].nota2 * 2.0))/2;
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("ALUNO[%d]\n",i);
        printf("Nome: %s\n",alunos[i].nome);
        printf("Matricula: %d\n",alunos[i].matricula);
        printf("Codigo da disciplina: %d\n",alunos[i].codigo_da_disciplina);
        printf("NOTA 1: %f\n",alunos[i].nota1);
        printf("NOTA 2: %f\n\n",alunos[i].nota2);
        printf("MEDIA FINAL: %f\n",medias_finais[i]);
    }
    
    return 0;
}