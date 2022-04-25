#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff,pow;
    struct node* next;
};

struct node* create(struct node* head, int coeff,int pow)
{
    struct node *temp,*flag;
    if (head==NULL) //make head node
    {
        temp=(struct node*) malloc(sizeof(struct node));
        temp->coeff=coeff;
        temp->pow=pow;
        temp->next=NULL;
        head=temp;
    }
    else //goto last node and append
    {
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        flag=(struct node*)malloc(sizeof(struct node));
        flag->coeff=coeff;
        flag->pow=pow;
        flag->next=NULL;
        temp->next=flag;
    }
    return head;
}

struct node* polyAdd(str)