/*
Escreva uma função para encontrar a média dos elementos presentes na lista
encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* next;
};
typedef struct node Node;

Node* createNode(int value);
void insertElementAtFirst(Node** head, int value);
void print(Node* head);
float mediaDosElementos(Node** head);

int main(){
    
    Node* head = NULL;
    int media;

    insertElementAtFirst(&head, 20);
    insertElementAtFirst(&head, 40);
    insertElementAtFirst(&head, 30);
    printf("A MEDIA: %.2f\n", mediaDosElementos(&head));

    return 0;
}

Node* createNode(int value){
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void insertElementAtFirst(Node** head, int value){
    Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void print(Node* head){
    if(head == NULL){
        printf("List is empty!");
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("%d -> NULL\n", temp->value);
}

float mediaDosElementos(Node** head){
    Node* temp = *head;
    float media = 0;
    int contador = 0;
    while(temp->next != NULL){
        media += temp->value;
        contador++;

        temp = temp->next;
    }
    media += temp->value;
    contador++;
    printf("contador: %d\n", contador);
    printf("media: %.2f\n", media);
    
    media /= contador;
    return media;
}