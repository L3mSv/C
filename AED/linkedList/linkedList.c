#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

void listInicialization(List* list){
    list->head = NULL;
    list->tail = NULL;
}

Node* createNode(char* name, int age, int registration){
    Node* newNode = (Node*) malloc(sizeof(Node)); 
    if(!newNode){
        printf("\nERROR: in locate memory to create node!\n");
        return NULL;
    }
    newNode->name = (char*) malloc(strlen(name) + 1); // +1 para o '\0'
    if(!newNode->name){
        printf("\nERROR: in locate memory to name!\n");
        free(newNode);
        return NULL;
    }
    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->registration = registration;
    newNode->next = NULL;
    newNode->ant = NULL;
    return newNode;
}

void insertAtBegin(List* list, char* name, int age, int registration){
    Node* newNode = createNode(name, age, registration);
    if(!newNode) return;

    newNode->next = list->head;
    if(list->head != NULL)
        list->head->ant = newNode;
    else
    {
        list->tail = newNode; //se a fila estiver vazia
    }
    list->head = newNode;

}

void insertAtEnd(List* list, char* name, int age, int registration){
    Node* newNode = createNode(name, age, registration);
    if(!newNode) return;

    if(list->head == NULL){
        list->head = newNode;
        list->tail = newNode;
    }else{
        newNode->ant = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void printList(List* list){
    if(isEmpty(list)){
        printf("\nERROR: list is void!\n");
        return;
    }

    printf("\nHEAD ->        (NULL) <- ");
    Node* temp = list->head;
    while(temp != NULL){

        printf("%s / %d / %d", temp->name, temp->age, temp->registration);
        if (temp->next != NULL)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> (NULL)        <- TAIL\n");
}

void removeAtEnd(List* list){
    if(isEmpty(list)){
        printf("\nERROR: list is void!\n");
        return;
    }

    Node* temp = list->tail;
    if(list->head == list->tail)
    {
        list->head = NULL;
        list->tail = NULL;
    }else{
        list->tail = temp->ant;
        list->tail->next = NULL;
    }
    free(temp);
}

int isEmpty(List* list){
    return (list == NULL || list->head == NULL);
}

void freeList(List* list){
    Node* current = list->head;
    while(current != NULL)
    {
        Node* next = current->next;
        free(current->name);
        free(current);
        current = next;
    }
    free(list);
}

void removeByIndex(List* list, int index){

    int size = sizeList(list);
    printf("SIZE: %d\n", size);

    if(index >= size || index < 0)
    {
        printf("\nINDEX: Out of bounds size!\n");
        return;
    }

    if(index == 0){
        removeAtBegin(list);
        return;
    }

    if(index == (size - 1)){
        removeAtEnd(list);
        return;
    }

    Node* temp = list->head;
    for(int i = 0; i < index; ++i){
        temp = temp->next;
    }

    // Ajusta os ponteiros dos vizinhos
    temp->ant->next = temp->next;
    temp->next->ant = temp->ant;

    free(temp->name);
    free(temp);
    
}

void insertByIndex(List* list, char* name, int age, int registration, int index){
    int size = sizeList(list);
    printf("SIZE: %d\n", size);

    if(index >= size || index < 0)
    {
        printf("\nINDEX: Out of bounds size!\n");
        return;
    }

    if(index == 0){
        insertAtBegin(list, name, age, registration);
        return;
    }

    if(index == size){
        insertAtEnd(list, name, age, registration);
        return;
    }

    Node* temp = list->head;
    for(int i = 0; i < index; ++i){
        temp = temp->next;
    }

    Node* newNode = createNode(name, age, registration);
    newNode->ant = temp->ant;
    newNode->next = temp;
    temp->ant->next = newNode;
    temp->ant = newNode;
}

void removeAtBegin(List* list){
    if(isEmpty(list)){
        printf("\nERROR: list is void!\n");
        return;
    }

    Node* temp = list->head;
    if(list->head == list->tail)
    {
        list->head = NULL;
        list->tail = NULL;
    }else{
        list->head = temp->next;
        list->head->ant = NULL;
    }
    free(temp);
}

int sizeList(List* list){
    if(isEmpty(list)){
        return 0; // lista vazia tem tamanho 0
    }

    Node* temp = list->head;
    int countSize = 0;

    while(temp != NULL){
        countSize++;
        temp = temp->next;
    }

    return countSize;
}


int main(){
    List* list = (List*) malloc(sizeof(List));
    listInicialization(list);

    insertAtBegin(list, "Lucas", 20, 24325434);
    insertAtBegin(list, "Amanda", 23, 22345545);
    insertAtBegin(list, "Mario", 87, 11223344);
    insertAtEnd(list, "Paulo", 49, 12344562);
    insertAtEnd(list, "Ana", 11, 54568798);

    printList(list);
    removeAtEnd(list);
    printList(list);
    removeAtBegin(list);
    printList(list);
    removeByIndex(list, 1);
    printList(list);

    insertByIndex(list, "Gabriel", 22, 24986734, 1);
    printList(list);

    freeList(list);
}