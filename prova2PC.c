#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{

    char* nome;
    struct pessoa* proximo;
};
typedef struct  pessoa Pessoa;

Pessoa* criaPessoa(char *nome);
void insere(Pessoa** head, char *nome);
void insereNoFinal(Pessoa** head, char *nome);
void imprime(Pessoa* head);
void removeNoInicio(Pessoa** head);
void removeNoFinal(Pessoa** head);
void removePorNome(Pessoa** head, char* nome);


int main(){
    Pessoa* head = NULL;
    Pessoa* head2 = NULL;
    FILE* fptr;
    fptr = fopen("prova2PC.txt", "r");

    char nomes[100];
    while(fscanf(fptr, "%s", nomes) == 1){
        insere(&head, nomes);
        insereNoFinal(&head2, nomes);

    }
    imprime(head);
    printf("\n");
    imprime(head2);

    printf("\n\n");

    removeNoInicio(&head);
    imprime(head);
    printf("\n");

    removeNoFinal(&head2);
    imprime(head2);

    removePorNome(&head, "ana");
    printf("\n");
    imprime(head);


    fclose(fptr);
    return 0;
}

Pessoa* criaPessoa(char *nome){
    Pessoa* novaPessoa = (Pessoa*) malloc(sizeof(Pessoa));
    novaPessoa->nome = strdup(nome);
    novaPessoa->proximo = NULL;
    return novaPessoa;
}

void insere(Pessoa** head, char *nome){
    Pessoa* novaPessoa = criaPessoa(nome);
    novaPessoa->proximo = *head;
    *head = novaPessoa;
}

void insereNoFinal(Pessoa** head, char *nome){
    Pessoa* novaPessoa = criaPessoa(nome);
    if(*head == NULL){
        *head = novaPessoa;
        return;
    }
    Pessoa* temp = *head;
    while (temp->proximo != NULL)
    {
        temp = temp->proximo;
    }
    temp->proximo = novaPessoa;
}


void imprime(Pessoa* head){
    if(head == NULL){
        printf("Lista vazia! nada para imprimir");
        return;
    }
    Pessoa* temp = head;
    while (temp != NULL)
    {
        printf("%s -> ", temp->nome);
        temp = temp->proximo;
    }
    printf("NULL");
}

void removeNoInicio(Pessoa** head){
    if(*head == NULL){
        printf("Lista vazia! nada para retirar do inicio");
        return;
    }
    Pessoa* temp = *head;
    *head = temp->proximo;
    free(temp);
}

void removeNoFinal(Pessoa** head){
    if(*head == NULL){
        printf("Lista vazia! nada para retirar do final");
    }
    Pessoa* temp = *head;
    if(temp->proximo == NULL){
        free(temp);
        *head = NULL;
        return;
    }
    while(temp->proximo->proximo != NULL){
        temp = temp->proximo;
    }
    free(temp->proximo);
    temp->proximo = NULL;
}

void removePorNome(Pessoa** head, char* nome){

    if(strcmp((*head)->nome, nome) == 0){
        Pessoa* temp = *head;
        *head = temp->proximo;
        free(temp->nome); 
        free(temp);
        return;
    }

    Pessoa* anterior = *head;
    Pessoa* temp = anterior->proximo;

    while(temp){
        if(strcmp(temp->nome, nome) == 0){
            anterior->proximo = temp->proximo;

            free(temp);
            return;
        }
        anterior = temp;
        temp = temp->proximo;
    }

}