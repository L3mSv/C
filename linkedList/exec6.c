#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* next;
};
typedef struct node Node;

Node* createNode(int value);
void insertElementAtEnd(Node** head, int value);
void insertElementAtFirst(Node** head, int value);
void print(Node* head);
Node* invertList(Node* head);

int main()
{
    Node* head = NULL;

    insertElementAtFirst(&head, 10);
    insertElementAtFirst(&head, 20);
    insertElementAtFirst(&head, 30);
    print(head);
    head = invertList(head);
    printf("\n");
    print(head);
    return 0;
}

Node* createNode(int value){
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void insertElementAtEnd(Node** head, int value){
    Node* newNode = createNode(value);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
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

void insertElementAtFirst(Node** head, int value){
    Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

Node* invertList(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next;

    while(curr != NULL){
        next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;

    }

    return prev;
}