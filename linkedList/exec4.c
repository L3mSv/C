#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node{
    int value; 
    struct Node* next;
};
typedef struct Node Node;


Node* createNode(int value);
void insertElementAtFirst(Node** head, int value);
void print(Node* head);
int highestValue(Node** head);



int main(){

    Node* head = NULL;

    insertElementAtFirst(&head, 10);
    insertElementAtFirst(&head, 3);
    insertElementAtFirst(&head, 142);
    insertElementAtFirst(&head, 432);
    insertElementAtFirst(&head, 23);
    print(head);

    printf("\nHighest Value: %d", highestValue(&head));

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
    printf("%d -> NULL", temp->value);
}

int highestValue(Node** head){
    if(*head == NULL){
        printf("List is empty!");
        return 0;
    }
    Node* temp = *head;
    int highestValue = INT_MIN;
    while(temp->next != NULL){
        if(temp->value >= highestValue)
            highestValue = temp->value;
        temp = temp->next;
    }   
    return highestValue;
}

