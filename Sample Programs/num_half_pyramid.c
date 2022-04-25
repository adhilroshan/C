#include<stdio.h>
void main(){
    int i,j,row;
    printf("Enter the number of rows \n");
    scanf("%d", &row);
    for (i = 1; i <=row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}