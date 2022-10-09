#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*ptr=NULL,*new;

void main(){
    int c;
    printf("Singly Linked list creation\n");
    printf("\n---------------------------------\n");

    do
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data dor new node: ");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=ptr=new;
        }
        else{
            ptr->next=new;
            ptr=new;
        }
        printf("If you want to continue press 1");
        scanf("%d",&c);
    } while (c==1);
    printf("\nSingly Link List Created!!!\n\n");
    printf("INSERTING NEW NODE AT END......\n");
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d",&new->data);
    new->next=NULL;

    if(head==NULL)
    {
        head=new;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
    }
    printf("DISPLAYING LINKED LIST......\n");
    if (head == NULL)
        printf("Linked List- Empty");
    else
    {
        ptr=head;
        while (ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
        
    }
}