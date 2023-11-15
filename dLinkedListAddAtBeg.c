#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *addAtBeg(struct Node *head, int data)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
void print(struct Node *a)
{
    while (a != NULL)
    {
        printf("%d\n", a->data);
        a = a->next;
    }
}
int main()
{
    struct Node *a;
    struct Node *b;
    struct Node *c;

    a = malloc(sizeof(struct Node));
    b = malloc(sizeof(struct Node));
    c = malloc(sizeof(struct Node));
    a->prev = NULL;
    b->prev = a;
    c->prev = b;

    a->data = 21;
    b->data = 23;
    c->data = 34;

    a->next = b;
    b->next = c;
    c->next = NULL;
    print(a);

    printf("After Insert\n");

    a = addAtBeg(a, 50);
    print(a);
}
