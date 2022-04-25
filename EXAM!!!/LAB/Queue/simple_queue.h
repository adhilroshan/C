#include <stdio.h>
#define SIZE 5
int items[SIZE], front = -1, rear = -1;
void enQueue(int value)
{
    if (rear == SIZE - 1)
        printf("\nQueue is Full!!");
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nInserted value -> %d\n", value);
    }
}

void deQueue()
{
    if (front == -1)
        printf("\nQueue is Empty!!");
    else
    {
        printf("\nDeleted value -> %d\n", items[front]);
        front++; // front
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display(){
    if (rear == -1)
        printf("\nQueue is Empty!!");
    else{
        int i;
        printf("\n Queue elements are : \n");
        for (i = front; i <= rear; i++)
            printf("%d ",items[i]);
    }
    printf("\n");
    
}