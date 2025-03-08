/*
Escreva uma função para encontrar o 𝑘-ésimo elemento a partir do início da lista
encadeada.
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
void print(Node* head);
int kElementAtFirst(Node* head);

int main(){
    Node* head = NULL;

    InsertElementAtFirst(&head, 10);
    InsertElementAtFirst(&head, 30);
    InsertElementAtFirst(&head, 20);
    InsertElementAtFirst(&head, 420);
    InsertElementAtFirst(&head, 3);
    print(head);
    printf("\n\nkElement: %d", kElementAtFirst(head));
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

int kElementAtFirst(Node* head){
    int position;
    int kElement;
    int count = 0;
    Node* temp = head;
    printf("\nElement position: ");
    scanf("%d", &position);
    while (temp->next != NULL)
    {
        count++;
        if(count == position)
            kElement = temp->value;
        temp = temp->next;
    }
    return kElement;

}