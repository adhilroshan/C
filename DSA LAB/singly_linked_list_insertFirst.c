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
    int c;
    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for new node: ");
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
        printf("If you want to continue Press 1 ELse press any other numer");
        scanf("%d", &c);
    } while (c == 1);
    
    printf("SinglyLinked List Created!!\n\n");
    printf("Inserting new node @ the begin..\n");
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for new node:");
    scanf("%d", &new->data);
    new->next = NULL;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head = new;
    }
    printf("Displaying Linked List..\n");
    if (head == NULL)
    {
        printf("Linkedlist-Empty");
    }
    else
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    }
}
