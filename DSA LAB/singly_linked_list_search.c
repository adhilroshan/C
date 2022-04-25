#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *ptr = NULL, *new;

void main()
{
    int c, item, f = 0;
    printf("SINGLY LINKLIST CREATION\n");
    printf("------------------------\n");

    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for new node:");
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = ptr = new;
        }
        else
        {
            ptr->next = new;
            ptr = new;
        }
        printf("If you want to continue Press 1 Else Press any other number: ");
        scanf("%d", &c);
    } while (c == 1);
    printf("\nSingly Link List Created!!!\n\n");

    printf("DISPLAYING LINKED LIST......\n");
    if (head == NULL)
        printf("Linked List- Empty");
    else
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("Enter the data value to be searched:");
    scanf("%d", &item);
    ptr = head;
    int count=0;
    while (ptr != NULL)
    {
        count++;
        if (ptr->data == item)
        {
            f = 1;
            break;
        }
        ptr = ptr->next;
    }

    if (f == 1)
        printf("Item found @ %dth position !!!",count);
    else
        printf("Not Found!!!");
}