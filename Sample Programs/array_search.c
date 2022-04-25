#include<stdio.h>
void main(){
    int limit,searchKey,i,flag;
    printf("Enter the Count of NUmbers:\n");
    scanf("%d",&limit);
    int values[limit];
    printf("Enter the values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d",&values[i]);
    }
    printf("Search : ");
    scanf("%d",&searchKey);
    for (i = 0; i < limit; i++)
    {
        if (searchKey == values[i])
        {
            flag=1;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("\n\t%d found at postion %d", searchKey, i + 1);
    }
    else{
        printf("\n\t%d not found in the given list",searchKey);
    }
    
    
}