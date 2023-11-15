#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
void print(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}
struct Node *addToEmpty(struct Node *head, int data)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
int main()
{
    struct Node *head = NULL;
    head = addToEmpty(head, 45);
    print(head);
}