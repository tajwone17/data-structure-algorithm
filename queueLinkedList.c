#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *newNode=NULL,*front=NULL,*rear=NULL;
int isFull()
{
    if(newNode==NULL)
    return 1;
    else 
    return 0;

}
int isEmpty()
{
if(front==NULL)
    return 1;
    else return 0;
}

void enqueue(int data){
    newNode=malloc(sizeof(struct node));
    if(isFull()){
        printf("Overflow\n");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    if(rear==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
int dequeue()
{
    if (isEmpty())
    {
        printf("Underflow\n");
        exit(1);
    }
    struct node *temp;
    temp=front;
    int data;
    data=temp->data;

    front=front->next;
    free(temp);
    temp=NULL;
    return data;

}


void print(){
    struct node *temp;
    temp=front;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;    }
}
int main()
{
enqueue(10);
enqueue(20);
enqueue(60);
enqueue(50);
dequeue();

print();
}