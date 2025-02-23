#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node{
    int value;
    struct  node* link;
};
typedef struct node Node;

Node* createNode(int value);
void insertElementAtFirst(Node** head, int value);
void print(Node* head);
int secondBiggest(Node* head);

int main(){
    Node* head = NULL;

    insertElementAtFirst(&head, 530);
    insertElementAtFirst(&head, 53);
    insertElementAtFirst(&head, 214);
    insertElementAtFirst(&head, 60);
    print(head);
    printf("\n");
    printf("%d", secondBiggest(head));
    return 0;
}

Node* createNode(int value){
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->link = NULL;
    return newNode;
}

void insertElementAtFirst(Node** head, int value){
    Node* newNode = createNode(value);
    newNode->link = *head;
    *head = newNode;
}

void print(Node* head){
    if(head == NULL){
        printf("List is empty!");
        return;
    }
    Node* temp = head;
    while(temp->link != NULL){
        printf("%d -> ", temp->value);
        temp = temp->link;
    }
    printf("%d -> NULL", temp->value);
}

int secondBiggest(Node* head){
    Node* temp = head;
    int biggerNumber = INT_MIN;
    int secondBiggerNumber = INT_MIN;
    while(temp->link != NULL){
        if(temp->value >= biggerNumber)
            biggerNumber = temp->value;
        temp = temp->link;
    }
    temp = head;
    while(temp->link != NULL){
        if(temp->value >= secondBiggerNumber && temp->value != biggerNumber)
            secondBiggerNumber = temp->value;
        temp = temp->link;
    }
    
    return secondBiggerNumber;
}