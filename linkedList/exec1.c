/*
Desenvolva uma função para inserir um elemento no final da lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node* next;

};

struct node* createNode(int data){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

void print(struct node* head);
void insertAtEnd(struct node** head, int data);

int main(){

    struct node* head = NULL;
    
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 32);
    print(head);

    return 0;
}

void insertAtEnd(struct node** head, int data){
    struct node* newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    struct node* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(struct node* head){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}