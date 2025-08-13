/*
Implemente uma função para encontrar o penúltimo elemento da lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
};
typedef struct Node Node;

Node* createNode(int value);
void InsertElementAtFirst(Node** head, int value);
int LastButOneElement(Node** head);
void print(Node* head);

int main(){

    Node* head = NULL;

    InsertElementAtFirst(&head, 10);
    InsertElementAtFirst(&head, 30);
    InsertElementAtFirst(&head, 20);
    InsertElementAtFirst(&head, 420);
    print(head);
    printf("\n%d", LastButOneElement(&head));

    return 0;
}

Node* createNode(int value){
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void InsertElementAtFirst(Node** head, int value){
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
    printf("%d -> NULL", temp->value);
}

int LastButOneElement(Node** head){
    int lastButOne;
    Node* temp = *head;
    int position = 0;
    while(temp->next != NULL){
        position++;
        temp = temp->next;
    }
    position++;
    printf("\n%d\n", position);
    Node* temp2 = *head;
    int counter = 0;
    while(temp2->next != NULL){
        counter++;
        lastButOne = temp2->value;
        temp2 = temp2->next;
    }
    printf("%d\n", counter);
    return lastButOne;
}