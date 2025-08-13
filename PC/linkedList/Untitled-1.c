#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Pessoa{
   char* nome;
   char* cpf; // alocar 15
   int idade;
   struct Pessoa* proxima;

}Pessoa;

Pessoa* criaPessoa(char* nome, char* cpf, int idade){
    Pessoa* nova = malloc(sizeof(Pessoa));
    
    nova->nome = nome;
    nova->idade = idade;
    nova->cpf = cpf;
    nova->proxima = NULL;

    return nova;
}


void insereNoFinal(Pessoa* lista, Pessoa* inserir){
    Pessoa* aux = lista->proxima;

    if (!aux)    {
       lista->proxima = inserir;
       inserir->proxima = NULL;
       return;
    }


    while (aux->proxima) {
      aux = aux->proxima;
    }
    
    aux->proxima = inserir;
}

void insere(Pessoa* lista, Pessoa* inserir){
    Pessoa* aux = lista->proxima;

    if(lista){
        lista->proxima = inserir;
        inserir->proxima = aux;
    }
}


void imprime(Pessoa* lista){
    Pessoa* aux = lista;
    
    while (aux) {
        printf("Nome: %s CPF: %s Idade: %d\n", aux->nome, aux->cpf, aux->idade);

        aux = aux->proxima;
    }
}


Pessoa* pegaPessoaArquivo(FILE * arquivo){
    char primeiroNome[100];
    char SegundoNome[100];
    char cpf[15];
    int idade;
    Pessoa* nova = malloc(sizeof(Pessoa));

    if(fscanf(arquivo,"%s", primeiroNome) == EOF){
        return NULL;
    }
    fscanf(arquivo,"%s", SegundoNome);

    strcat(primeiroNome, " ");
    strcat(primeiroNome, SegundoNome);
  

    fscanf(arquivo,"%s", cpf);
    fscanf(arquivo,"%d", &idade);


    nova->nome = malloc(strlen(primeiroNome));
    nova->cpf = malloc(strlen(cpf));

    strcpy(nova->nome, primeiroNome);
    strcpy(nova->cpf, cpf);

    nova->idade = idade;
    nova->proxima = NULL;
    
    return nova;    
}


void removePorCPF( Pessoa* head, char *cpf){

   Pessoa* aux = head->proxima;    
   Pessoa* anterior = head;
   while (aux) {      
        if(strcmp(aux->cpf, cpf) == 0){
            anterior->proxima = aux->proxima;

            free(aux);
            break;
        }

       anterior =  aux;
       aux = aux->proxima;
   }
}

Pessoa* inserirRecursivo(Pessoa* head, char* nome, char* cpf, int idade) {
    if (head == NULL) { // Caso base: lista vazia ou chegou no final
        Pessoa* nova = malloc(sizeof(Pessoa));
    
        nova->nome = nome;
        nova->idade = idade;
        nova->cpf = cpf;
        nova->proxima = NULL;
    
        return nova; // Retorna o novo nó para ser ligado ao anterior
    }
    
    head->proxima = inserirRecursivo(head->proxima, nome, cpf, idade); // Chamada recursiva
    return head; // Retorna o ponteiro atualizado
}



int main(){
    FILE *fp = fopen("Entrada", "r+");
    Pessoa* nova = NULL;
    Pessoa* head = pegaPessoaArquivo(fp);
   
   
    while (nova = pegaPessoaArquivo(fp)){      
        insere(head,nova);
       
    }


 
   removePorCPF(&head, "453.762.810-38");
   imprime(head);  

   
    



}