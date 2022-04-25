/* 
Write a program to find the number of even numbers in an array
 */

#include<stdio.h>
void main(){
    int limit,i,evenNos=0;
    printf("Enter the size of an array:\n");
    scanf("%d",&limit);
    int values[limit];
    printf("Enter the values of array:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d",&values[i]);
    }
    // Searching for Even Numbers
    for (i = 0; i < limit; i++)
    {
        if (values[i]%2 == 0)
        {
            evenNos=evenNos+1;
        }
    }
    if (evenNos!=0)
    {
        printf("%d even numbers found",evenNos);
    }
    else{
        printf("No Even Numbers Found");
    }
    
        
}