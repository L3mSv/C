/*
Escreva uma função para intercalar duas listas encadeadas em uma única lista.
*/

//! NAO TERMINADA 

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
};
typedef struct Node Node;

Node* createNode(int value);
void InsertElementAtFirst(Node** head, int value);
Node* MergeList(Node* head1, Node* head2);
void print(Node* head);

int main(){

    Node* head1 = NULL;
    Node* head2 = NULL;

    InsertElementAtFirst(&head1, 10);
    InsertElementAtFirst(&head1, 1430);
    InsertElementAtFirst(&head1, 530);
    print(head1);

    printf("\n");

    InsertElementAtFirst(&head2, 53);
    InsertElementAtFirst(&head2, 214);
    InsertElementAtFirst(&head2, 60);
    print(head2);

    printf("\n\n");

    Node* mergeHead = MergeList(head1, head2);
    print(mergeHead);

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

Node* MergeList(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp3 = NULL;

    while((temp1->next != NULL) || (temp2->next != NULL))
    {

        temp3->next = temp1;
        temp3 = temp3->next;
        temp3->next = temp2;
        temp3 = temp3->next;

        if(temp1->next != NULL){
            temp1 = temp1->next;
        }
        if(temp2->next != NULL){
            temp2 = temp2->next;
        }

    }

    return temp3;
}