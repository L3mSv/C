#include <stdio.h>

#define TAMANHO 1000
struct dados_pessoais{
    char nome[TAMANHO];
    char endereco[TAMANHO];
    int idade;
};

int main(){
    struct dados_pessoais pessoa;
    printf("Informe o seu nome: ");fgets(pessoa.nome,TAMANHO,stdin);
    printf("Informe o seu endereco: ");fgets(pessoa.endereco,TAMANHO,stdin);
    printf("Informe a sua idade: ");scanf("%d",&pessoa.idade);
    printf("\n\n");
    printf("MEMORIA dados_pessoais.nome: %s",pessoa.nome);
    printf("MEMORIA dados_pessoais.endereco: %s",pessoa.endereco);
    printf("MEMORIA dados_pessoais.idade: %d",pessoa.idade);
    return 0;
}