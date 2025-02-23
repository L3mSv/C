/*
Modifique a função desenvolvida na questão 3 para remover o último elemento da lista encadeada.
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
void deleteFromEnd(node** head);


int main(){

    node* head = NULL;

    insertElementAtFirst(&head, 30);
    insertElementAtFirst(&head, 24);
    insertElementAtFirst(&head, 27);
    print(head);
    deleteFromEnd(&head);
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

void deleteFromEnd(node** head){
    if(*head == NULL){
        printf("List is Empty\n");
        return;
    }

    node* temp = *head;
    if(temp->next == NULL){
        free(temp);
        *head = NULL;
        return;
    }
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}