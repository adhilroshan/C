#include <stdio.h>
#define SIZE 5
int items[SIZE], front = -1, rear = -1;

int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        return 1;
    return 0;
}

int isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}

void enQueue(int element)
{
    if (isFull())
        printf("\nQueue is Full!! \n");
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\n Inserted -> %d \n",element);
    }
}

int deQueue(){
    int element;
    if(isEmpty()){
        printf("\nQueue is Empty!!\n");
        return -1;
    }else {
        element = items[front];
        if(front == rear){
            front = rear = -1;
        }
        // Q has only one element, so we reset the
        // queue after dequeing it. ?
        else{
            front = (front + 1)%SIZE;
        }
        printf("\n Deleted element -> %d\n", element);
        return element;
    }
}

void display(){
    int i;
    if(isEmpty())
        printf("\nEmpty queue\n");
    else{
        printf("\n Front -> %d\n",front);
        printf("\n Items -> ");
        for ( i = front; i != rear; i=(i+1)%SIZE)
        {
            printf("%d ",items[i]);
        }
        printf("%d", items[i]);
        printf("\n Rear -> %d\n",rear);

    }
}