#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Nodo{
    char* name;
    char* cpf;
    int age;
    struct Nodo* next;
}nodo;

nodo* CreateNodo(char* name, char* cpf, int age);
void insertNodo(nodo** head, char* name,char* cpf, int age);
void insertNodoAtEnd(nodo** head, char* name, char* cpf, int age);
void print(nodo* head);


int main()
{
    nodo* head = NULL;
    
    FILE* fptr = fopen("Entrada", "r");

    char temp_name[100];
    char temp_sobrenome[100];
    char temp_cpf[20];
    int temp_age;
    while(fscanf(fptr,"%s", temp_name) != EOF)
    {
        fscanf(fptr,"%s", temp_sobrenome);
        fscanf(fptr,"%s", temp_cpf);
        fscanf(fptr,"%d", &temp_age);

        char* nome_completo = malloc(strlen(temp_name) + strlen(temp_sobrenome) + 2);
        strcpy(nome_completo, temp_name);
        strcat(nome_completo, " ");
        strcat(nome_completo, temp_sobrenome);

        insertNodo(&head, nome_completo, temp_cpf, temp_age);

    }
    

    print(head);



    return 0;
}

nodo* CreateNodo(char* name, char* cpf, int age)
{
    nodo* newNodo = malloc(sizeof(nodo));
    newNodo->name = malloc(strlen(name) + 1);
    strcpy(newNodo->name, name);
    newNodo->cpf = malloc(strlen(cpf) + 1);
    strcpy(newNodo->cpf, cpf);
    newNodo->age = age;
    newNodo->next = NULL;
    return newNodo;
}

void insertNodo(nodo** head, char* name, char* cpf, int age)
{
    nodo* newNodo = CreateNodo(name, cpf, age);
    newNodo->next = *head;
    *head = newNodo;
}

void print(nodo* head)
{
    if(head == NULL)
    {
        printf("\nThe list is empty!\n");
        return;
    }

    nodo* temp = head;
    while(temp != NULL)
    {
        printf(" %s      %s      %d \n",temp->name, temp->cpf, temp->age);
        temp = temp->next;
    }
}