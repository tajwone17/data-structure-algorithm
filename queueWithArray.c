#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int queue_arr[SIZE];
int front = -1 , rear = -1 ;

int isFull(){
    if(rear == SIZE - 1)
        return 1;
    else
        return 0;
}
int isEmpty(){
    if(front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}

void enqueue(int data){
    if(isFull()){
        printf("Overflow\n");
        exit(1);
    }
    if(front == -1){
        front = 0;
    }
    rear = rear + 1;
    queue_arr[rear] = data;
}

int dequeue(){
    if(isEmpty()){
        printf("Underflow\n");
        exit(1);
    }
    int data = queue_arr[front];
    front = front + 1;
    return data;
}




void print(){
     for(int i = front ; i <= rear ; i++){
        printf("%d\n",queue_arr[i]);
     }
}

int main(){
    enqueue(6);
    enqueue(16);
    enqueue(10);
    enqueue(20);
    dequeue();
    dequeue();
    enqueue(100);
    print();
}