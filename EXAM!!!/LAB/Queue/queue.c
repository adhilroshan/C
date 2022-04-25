#include <stdio.h>
#include <stdlib.h>
// #include "simple_queue.h"
// #include "circular_queue.h"
#include "priority_queue.h"

int main(){
    int choice,val;
    while (1)
    {
        printf("\t1.EnQueue\n");
        printf("\t2.DeQueue\n");
        printf("\t3.Print\n");
        printf("\t4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the number : ");
            scanf("%d",&val);
            insert_element(val);
            break;
            case 2:
                printf("\nEnter element to delete : ");
                scanf("%d", &val);
                delete_element(val);
                break;
            case 3: display();
            break;
            case 4: exit(1);
            default:printf("Wrong Input\n");
        }
    }
    
}