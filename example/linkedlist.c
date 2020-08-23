#include <stdio.h>
#include <stdlib.h>
typedef struct _Node
{
    int data;
    struct _Node *next;
} Node;

void printList(Node *head)
{
    Node *cursor = head;
    printf("Linked list: ");

    while (cursor != NULL)
    {
        printf("%d ", cursor->data);
        cursor = cursor->next;
    }
    printf("\n");
}

void insertFront(Node **head, int value)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = value;
    new->next = *head;
    *head = new;
}

void deleteFront(Node **head)
{
    if (*head != NULL)
        *head = (*head)->next;
}

void insertBack(Node **head, int value)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = value;
    new->next = NULL;

    if (*head == NULL)
        insertFront(head, value);
    else
    {
        Node *cursor = *head;
        while (cursor->next != NULL)
            cursor = cursor->next;

        cursor->next = new;
    }
}
void deleteBack(Node **head)
{
    if (*head != NULL)
    {
        Node **cursor = head;
        while ((*cursor)->next != NULL)
            cursor = &(*cursor)->next;

        *cursor = NULL;
    }
}

int main()
{
    Node *head = NULL;
    insertBack(&head, 6);
    insertBack(&head, 9);
    insertBack(&head, 7);
    insertBack(&head, 9);
    insertBack(&head, 8);
    insertBack(&head, 9);
    deleteBack(&head);
    deleteBack(&head);
    printList(head);
    return 0;
}