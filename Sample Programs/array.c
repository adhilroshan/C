#include <stdio.h>
void main(){
    int limit,i;
    printf("Enter the Array Limit\n");
    scanf("%d",&limit);
    int a[limit];
    printf("Enter the values\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered Values are :\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}