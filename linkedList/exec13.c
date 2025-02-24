/*
Modifique a questão 15 para encontrar o 𝑘-ésimo elemento a partir do final da
lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;


Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int data)
{
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}


void printListForward(Node* head)
{
    Node* temp = head;
    while (temp->next != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d -> NULL\n", temp->data);
}

int kElementAtEnd(Node *head){
    Node* temp = head;
    int kElement;
    int position;
    int count = 0;
    while(temp->next != NULL){
        count++;
        temp = temp->next;
    }
    printf("\nCount: %d", count);
    count = 0;
    printf("\nElement position: ");
    scanf("%d", &position);
    while(temp != NULL){
        if(count++ == position)
            kElement = temp->data;
        temp = temp->prev;
    }
    return kElement;
}

int main()
{
    Node* head = NULL;

    insertAtBeginning(&head, 325);
    insertAtBeginning(&head, 45);
    insertAtBeginning(&head, 5435);
    printListForward(head);
    printf("\n\nK element: %d", kElementAtEnd(head));

    return 0;
}
