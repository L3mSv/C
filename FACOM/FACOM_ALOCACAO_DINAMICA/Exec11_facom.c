#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_STRING 50

struct Cadastro{

    char sobrenome[TAMANHO_STRING];
    int matricula;
    int ano_nascimento;
};

int main()
{
    struct Cadastro aluno;
    int quant_alunos = 0;

    printf("Informe a quantidade de alunos a serem armazenados: ");
    scanf(" %d", &quant_alunos);

    printf("\n");

    char **vetor_sobrenome;
    int *vetor_matricula;
    int *vetor_nascimento;

    vetor_sobrenome = calloc(quant_alunos, sizeof(char));
    vetor_matricula = calloc(quant_alunos, sizeof(int));
    vetor_nascimento = calloc(quant_alunos, sizeof(int));

    for(int i = 0; i < quant_alunos; i++)
    {
        vetor_sobrenome[i] = calloc(TAMANHO_STRING, sizeof(char));
    }

    for(int i = 0; i < quant_alunos; i++)
    {
        getchar();
        printf("\nInforme o sobrenome: ");
        fgets(vetor_sobrenome[i], TAMANHO_STRING, stdin);

        printf("Digite a matricula: ");
        scanf(" %d", &vetor_matricula[i]);

        printf("Informe o ano de nascimento: ");
        scanf(" %d", &vetor_nascimento[i]);
    }

    printf("\n\n");

    for(int i = 0; i < quant_alunos; i++)
    {
        printf("ALUNO %d\n", i+1);
        printf("Sobrenome: %s", vetor_sobrenome[i]);
        printf("Matricula: %d\n", vetor_matricula[i]);
        printf("Ano de Nascimento: %d\n", vetor_nascimento[i]);
        printf("\n");
    }

    free(vetor_sobrenome);
    free(vetor_matricula);
    free(vetor_nascimento);

    return 0;
}