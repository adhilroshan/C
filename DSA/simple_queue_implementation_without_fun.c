#include <stdio.h>
#define maxsize 5
void main()
{
    int front = -1, rear = -1;
    int queue[maxsize];
    int choice;
    int item;
    while (choice != 4)
    {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n=================================================================\n");
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice ?");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element\n");
            scanf("\n%d", &item);
            if (rear == maxsize - 1)
            {
                printf("\nOVERFLOW\n");
                return;
            }
            if (front == -1 && rear == -1)
            {
                front = 0;
                rear = 0;
            }
            else
            {
                rear = rear + 1;
            }
            queue[rear] = item;
            printf("\nValue inserted ");
            break;
        case 2:
            if (front == -1 || front > rear)
            {
                printf("\nUNDERFLOW\n");
                return;
            }
            else
            {
                item = queue[front];
                if (front == rear)
                {
                    front = -1;
                    rear = -1;
                }
                else
                {
                    front = front + 1;
                }
                printf("\nvalue deleted ");
            }
            break;
        case 3:
            if (rear == -1)
            {
                printf("\nEmpty queue\n");
            }
            else
            {
                printf("\nprinting values .....\n");
                for (int i = front; i <= rear; i++)
                {
                    printf("%d\t", queue[i]);
                }
            }
            break;
        case 4:
            printf("Exiting...");
            break;
        default:
            printf("\nEnter valid choice??\n");
        }
    }
}