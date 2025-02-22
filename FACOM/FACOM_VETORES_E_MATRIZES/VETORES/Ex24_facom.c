#include <stdio.h>
#include <limits.h>

int main()
{
    int conjunto1[2]={0};
    printf("Informe o numero do aluno1: ");scanf(" %d",&conjunto1[0]);
    printf("Informe a altura (em m) do aluno1: ");scanf(" %d",&conjunto1[1]);

    printf("\n");

    int conjunto2[2]={0};
    printf("Informe o numero do aluno2: ");scanf(" %d",&conjunto2[0]);
    printf("Informe a altura (em m) do aluno2: ");scanf(" %d",&conjunto2[1]);

    printf("\n");

    int conjunto3[2]={0};
    printf("Informe o numero do aluno3: ");scanf(" %d",&conjunto3[0]);
    printf("Informe a altura (em m) do aluno3: ");scanf(" %d",&conjunto3[1]);

    printf("\n");

    int conjunto4[2]={0};
    printf("Informe o numero do aluno4: ");scanf(" %d",&conjunto4[0]);
    printf("Informe a altura (em m) do aluno4: ");scanf(" %d",&conjunto4[1]);

    printf("\n");

    int conjunto5[2]={0};
    printf("Informe o numero do aluno5: ");scanf(" %d",&conjunto5[0]);
    printf("Informe a altura (em m) do aluno5: ");scanf(" %d",&conjunto5[1]);

    printf("\n");

    int conjunto6[2]={0};
    printf("Informe o numero do aluno6: ");scanf(" %d",&conjunto6[0]);
    printf("Informe a altura (em m) do aluno6: ");scanf(" %d",&conjunto6[1]);

    printf("\n");

    int conjunto7[2]={0};
    printf("Informe o numero do aluno7: ");scanf(" %d",&conjunto7[0]);
    printf("Informe a altura (em m) do aluno7: ");scanf(" %d",&conjunto7[1]);

    printf("\n");

    int conjunto8[2]={0};
    printf("Informe o numero do aluno8: ");scanf(" %d",&conjunto8[0]);
    printf("Informe a altura (em m) do aluno8: ");scanf(" %d",&conjunto8[1]);

    printf("\n");

    int conjunto9[2]={0};
    printf("Informe o numero do aluno9: ");scanf(" %d",&conjunto9[0]);
    printf("Informe a altura (em m) do aluno9: ");scanf(" %d",&conjunto9[1]);

    printf("\n");

    int conjunto10[2]={0};
    printf("Informe o numero do aluno10: ");scanf(" %d",&conjunto10[0]);
    printf("Informe a altura (em m) do aluno10: ");scanf(" %d",&conjunto10[1]);

    int aluno_de_maior_altura = INT_MIN;
    int numero_aluno_de_maior_altura = 0;

    int aluno_de_menor_altura = INT_MAX;
    int numero_aluno_de_menor_altura = 0;

    if(conjunto1[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto1[1];
        numero_aluno_de_maior_altura = conjunto1[0];
    }
    if(conjunto2[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto2[1];
        numero_aluno_de_maior_altura = conjunto2[0];
    }
    if(conjunto3[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto3[1];
        numero_aluno_de_maior_altura = conjunto3[0];
    }
    if(conjunto4[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto4[1];
        numero_aluno_de_maior_altura = conjunto4[0];
    }
    if(conjunto5[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto5[1];
        numero_aluno_de_maior_altura = conjunto5[0];
    }
    if(conjunto6[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto6[1];
        numero_aluno_de_maior_altura = conjunto6[0];
    }
    if(conjunto7[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto7[1];
        numero_aluno_de_maior_altura = conjunto7[0];
    }
    if(conjunto8[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto8[1];
        numero_aluno_de_maior_altura = conjunto8[0];
    }
    if(conjunto9[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto9[1];
        numero_aluno_de_maior_altura = conjunto9[0];
    }
    if(conjunto10[1] > aluno_de_maior_altura)
    {
        aluno_de_maior_altura = conjunto10[1];
        numero_aluno_de_maior_altura = conjunto10[0];
    }

    if(conjunto1[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto1[1];
        numero_aluno_de_menor_altura = conjunto1[0];
    }
    if(conjunto2[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto2[1];
        numero_aluno_de_menor_altura = conjunto2[0];
    }
    if(conjunto3[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto3[1];
        numero_aluno_de_menor_altura = conjunto3[0];
    }
    if(conjunto4[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto4[1];
        numero_aluno_de_menor_altura = conjunto4[0];
    }
    if(conjunto5[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto5[1];
        numero_aluno_de_menor_altura = conjunto5[0];
    }
    if(conjunto6[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto6[1];
        numero_aluno_de_menor_altura = conjunto6[0];
    }
    if(conjunto7[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto7[1];
        numero_aluno_de_menor_altura = conjunto7[0];
    }
    if(conjunto8[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto8[1];
        numero_aluno_de_menor_altura = conjunto8[0];
    }
    if(conjunto9[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto9[1];
        numero_aluno_de_menor_altura = conjunto9[0];
    }
    if(conjunto10[1] < aluno_de_menor_altura)
    {
        aluno_de_menor_altura = conjunto10[1];
        numero_aluno_de_menor_altura = conjunto10[0];
    }

    printf("\n\n");
    printf("ALUNO MAIS ALTO:");
    printf("\nNUMERO: %d|ALTURA: %dM",numero_aluno_de_maior_altura,aluno_de_maior_altura);

    printf("\n");
    printf("ALUNO MAIS BAIXO:");
    printf("\nNUMERO: %d|ALTURA: %dM",numero_aluno_de_menor_altura,aluno_de_menor_altura);
    return 0;
}

/* ATE O TINHOSO TREME EM TER QUE MEXER NESSE CODIGO 👿👿👿*/