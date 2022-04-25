#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;
void push(int data){
    struct node* newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode==NULL)
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;

    newNode->next=top;
    top=newNode;
}
void pop(){
    if(top==NULL)
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    top=top->next;
}
void print(){
    struct node* temp;
    temp=top;
    printf("Stack elements are : \n");
    while(temp)
    {
        printf("\t %d \n",temp->data);
        temp=temp->next;
    }
}
int main(){
   int choice,data;
   while (1)
   {
       printf("(1) PUSH\n");
       printf("(2) POP\n");
       printf("(3) PRINT\n");
       printf("(4) QUIT\n");
       printf("Enter Your Choice : ");
       scanf("%d",&choice);
       switch (choice)
       {
        case 1:
            printf("Enter the element to be pushed : ");
            scanf("%d",&data);
            push(data);
           break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            exit(1);
       default:
            printf("WRONG INPUT!!\n");
           break;
       }
   }
   return 0;
   
}