/*
*
* *
* * *       PATTERN PRINTING
* * * *
* * * * *
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the Limit \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*

* * * * *
* * * *
* * *       
* *
*

    FOR THIS PATTERN

for(i=5;i>0;i--){
        for ( j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");       
    }

 */
