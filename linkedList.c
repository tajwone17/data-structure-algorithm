#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// struct Node *addToBeginning(struct Node *new, struct Node *head);

void travel(struct Node *a);
// int pop()
// {
//     struct node *temp;
//     temp = a;
    // if (isEmpty())
    // {
    //     printf("Stack underflow");
    //     exit(1);
    // }
    // a = a->next;
   
    // temp = NULL;
// }

int main()
{
    struct Node *a;
    struct Node *b;
    struct Node *c;
    a = malloc(sizeof(struct Node));
    b = malloc(sizeof(struct Node));
    c = malloc(sizeof(struct Node));
    a->data = 10; // head
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;
    // print or traverse
    travel(a);
    // adding new node
    // struct Node *new;

    // new =malloc(sizeof(struct Node));
    // new->data = 5;
    // printf("\n After insertion\n");
    // addToBeginning(new,a);
    // travel(new);
}
void travel(struct Node *a)
{
    while (a != NULL)
    {
        printf("%d\n", a->data);
        a = a->next;
    }
}
// void addToBeginning(struct Node *new, struct Node *head)
// {
//     new->next = head;
//     head=new;
//    
// }