#ifndef linkedList_H
#define linkedList_H

typedef struct node{
    char* name;
    int age, registration;
    struct node* next;
    struct node* ant;
}Node;

typedef struct list
{
    Node* head;
    Node* tail;
}List;


void listInicialization(List* list);
Node* createNode(char* name, int age, int registration);
void insertAtBegin(List* list, char* name, int age, int registration);
void insertAtEnd(List* list, char* name, int age, int registration);
void printList(List* list);
void removeAtBegin(List* list);
void removeAtEnd(List* list);
void removeByIndex(List* list, int index);
void insertByIndex(List* list, char* name, int age, int registration, int index);
int isEmpty(List* list);
void freeList(List* list);
int sizeList(List* list);

#endif 