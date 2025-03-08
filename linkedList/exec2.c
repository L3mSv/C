/*
Escreva uma função que remova o primeiro elemento da lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node node;

node* createNode(int data);
void insertElementAtFirst(node** head, int data);
void print(node* head);
void deleteElementAtFirst(node** head);

int main(){

    node* head = NULL;

    insertElementAtFirst(&head, 10);
    insertElementAtFirst(&head, 20);
    insertElementAtFirst(&head, 30);
    deleteElementAtFirst(&head);
    print(head);
    return 0;
}

node* createNode(int data){
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertElementAtFirst(node** head, int data){
    node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void deleteElementAtFirst(node** head){
    if(*head == NULL){
        printf("List is empty\n");
        return;
    }
    node* temp = *head;
    *head = temp->next;
    free(temp);
}