#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode = NULL, *top = NULL;

int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
int isFULL()
{
    if (newnode == NULL)
        return 1;
    else
        return 0;
}
int pop()
{
    struct node *temp;
    temp = top;
    if (isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    top = top->next;
 
    temp = NULL;
}
void push(int data)
{

    newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (isFULL())
    {
        printf("Stack Overflow");
        exit(1);
    }
    newnode->next = top;
    top = newnode;
}
void print()
{

    if (isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    while (top != NULL)
    {
        printf("%d->", top->data);
        top = top->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    print();
    printf("\n");
}