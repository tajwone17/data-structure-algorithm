#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insertAfter(struct node *last, struct node *add)
{
    add->next = last->next;
    last->next = add;
}

void travel(struct node *head)
{

    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main()
{

    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *last =malloc(sizeof(struct node));
    struct node *new = malloc(sizeof(struct node));
    struct node *new2 = malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = last;

    last->data = 30;
    last->next = NULL;

    new->data = 70;
    new2->data = 100;

    travel(head);

    insertAfter(last, new);
    insertAfter(new, new2);

    printf("After insertion:\n");

    travel(head);

    return 0;
}