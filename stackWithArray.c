#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int top = -1;
int stack_arr[SIZE];
int isFULL()
{
    if (top == SIZE - 1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void push(int data)
{   if(isFULL()){
    printf("overflow");
    return;
}
    top = top + 1;
    stack_arr[top] = data;
}
void pop()
{   if(isEmpty()){
    printf("underflow");
}
    int deleted_data = stack_arr[top];
    top = top - 1;
}
void print()
{
    int i;
    for (i = top; i >=0; i--)
    {
        printf("%d", stack_arr[i]);
    }
}
int main()
{
    push(3);
    push(33);
    push(34);
    pop();
    pop();
    print();
    return 0;
}