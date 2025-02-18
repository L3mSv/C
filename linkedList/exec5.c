/* 
Implemente uma função para remover todos os elementos duplicados da lista encadeada.
*/


#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* next;
};
typedef struct node Node;

Node* createNode(int value);
void insertElementAtEnd(Node** head, int value);
void print(Node* head);
Node* removeDuplicates(Node* head);


int main(){

    Node* head = NULL;

    insertElementAtEnd(&head, 10);
    insertElementAtEnd(&head, 3);
    insertElementAtEnd(&head, 142);
    insertElementAtEnd(&head, 3);
    insertElementAtEnd(&head, 3);
    insertElementAtEnd(&head, 3);
    insertElementAtEnd(&head, 3);
    print(head);
    removeDuplicates(head);
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

Node* removeDuplicates(Node* head){
    Node* temp1 = head;

    while(temp1 != NULL){
        Node* temp2 = temp1;

        while(temp2->next != NULL){

            if(temp2->next->value == temp1->value){
                Node* duplicate = temp2->next;
                temp2->next = temp2->next->next;

                free(duplicate);
            }
            else{
                temp2 = temp2->next;
            }
        }
        temp1 = temp1->next;
    }

    return head;
}

