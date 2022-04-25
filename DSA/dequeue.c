#include <stdio.h>
#define MAX 10

int main()
{
    int deque[MAX];
    int left = -1,
        right = -1;
    int choice;
    char c;

    do
    {
        printf("\n1.Insert at right ");
        printf("\n2.Insert at left ");
        printf("\n3.Delete from right ");
        printf("\n4.Delete from left ");
        printf("\n5.Display ");
        printf("\n\nEnter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int val;
            printf("\nEnter the value to be added ");
            scanf("%d", &val);
            if ((left == 0 && right == MAX - 1) || (left == right + 1))
            {
                printf("\nOVERFLOW");
            }
            if (left == -1)
            {
                left = 0;
                right = 0;
            }
            else
            {
                if (right == MAX - 1)
                    right = 0;
                else
                    right = right + 1;
            }
            deque[right] = val;
        }
        break;
        case 2:
        {
            int val;
            printf("\nEnter the value to be added ");
            scanf("%d", &val);
            if ((left == 0 && right == MAX - 1) || (left == right + 1))
            {
                printf("\nOVERFLOW");
            }
            if (left == -1)
            {
                left = 0;
                right = 0;
            }
            else
            {
                if (left == 0)
                    left = MAX - 1;
                else
                    left = left - 1;
            }
            deque[left] = val;
        }
        break;
        case 3:
        {
            if (left == -1)
            {
                printf("\nUNDERFLOW");
                return 0;
            }
            printf("\nThe deleted element is %d\n", deque[right]);
            if (left == right)
            {
                left = -1;
                right = -1;
            }
            else
            {
                if (right == 0)
                    right = MAX - 1;
                else
                    right = right - 1;
            }
        }
        break;
        case 4:
        {
            if (left == -1)
            {
                printf("\nUNDERFLOW");
                return 0;
            }
            printf("\nThe deleted element is %d\n", deque[left]);
            if (left == right)
            {
                left = -1;
                right = -1;
            }
            else
            {
                if (left == MAX - 1)
                    left = 0;
                else
                    left = left + 1;
            }
        }

        break;
        case 5:
        {
            int front = left, rear = right;
            if (front == -1)
            {
                printf("\nQueue is Empty\n");
                return 0;
            }
            printf("\nThe elements in the queue are: ");
            if (front <= rear)
            {
                while (front <= rear)
                {
                    printf("%d\t", deque[front]);
                    front++;
                }
            }
            else
            {
                while (front <= MAX - 1)
                {
                    printf("%d\t", deque[front]);
                    front++;
                }
                front = 0;
                while (front <= rear)
                {
                    printf("%d\t", deque[front]);
                    front++;
                }
            }
            printf("\n");
        }
        break;
        }
        printf("do you want to continue:(y/n)");
        scanf(" %c", &c);
    } while (c == 'y');
    return 0;
}