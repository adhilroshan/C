#include <stdio.h>
void main()
{
    int limit, i, sum = 0;
    printf("Enter the required value count:\n");
    scanf("%d", &limit);
    int values[limit];
    printf("Enter the Values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &values[i]);
    }
    for (i = 0; i < limit; i++)
    {
        sum = sum + values[i];
    }
    printf("Sum of numbers is %d", sum);
}