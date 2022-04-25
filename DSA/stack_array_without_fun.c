#include <stdio.h>

void main()
{
    int stack[100], i, j, choice, n, top = -1, val;
    printf("Enter the Number of Elements in the Stack : ");
    scanf("%d", &n);
    do
    {
        printf("\n\t\tSTACK");
        printf("\n\t=====================\n");
        printf("\nChoose one from the below options...\n");
        printf("\n\t(1) Push\n\t(2) Pop\n\t(3) Show\n\t(4) Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            if (top == n - 1)
                printf("\nOverflow\n");
            else
            {
                printf("Enter the value?\n");
                scanf("%d", &val);
                top = top + 1;
                stack[top] = val;
            }

            break;
        }
        case 2:
        {
            if (top == -1)
                printf("\nUnderflow\n");
            else
                top = top - 1;
            break;
        }
        case 3:
        {
            for (i = top; i >= 0; i--)
            {
                printf("%d\n", stack[i]);
            }
            if (top == -1)
            {
                printf("\nStack is empty\n");
            }
            break;
        }
        case 4:
        {
            printf("Exiting....");
            break;
        }
        default:
        {
            printf("Please Enter valid choice!!! ");
        }
        };
    } while (choice != 4);
}