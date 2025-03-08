/*
Desenvolva uma função para encontrar o elemento do meio da lista encadeada
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
int MiddleElement(Node** head);
void print(Node* head);

int main(){
    Node* head = NULL;

    InsertElementAtFirst(&head, 10);
    InsertElementAtFirst(&head, 30);
    InsertElementAtFirst(&head, 20);
    InsertElementAtFirst(&head, 420);
    InsertElementAtFirst(&head, 3);
    print(head);
    printf("\n%d", MiddleElement(&head));

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

int MiddleElement(Node** head){
    int middleElement;
    Node* temp = *head;
    int position = 0;
    while(temp->next != NULL){
        position++;
        temp = temp->next;
    }
    position++;
    if(position%2 == 0){
        printf("\nList haven't a middle Element");
        return 0;
    }
    temp = *head;
    int count = 0;
    while(temp->next != NULL){
        if(count++ == (position/2)){
            middleElement = temp->value;
        }
        temp = temp->next;
    }
    return middleElement;
}