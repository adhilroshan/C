#include <stdio.h>
void main()
{
    int limit, i, j;
    printf("Enter the limit:\n");
    scanf("%d", &limit);
    int values[limit], temp;
    printf("ENter the Values:\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &values[i]);
    }
    for (i = 0; i < limit - 1; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (values[i] < values[j])
            {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }
    printf("Sorted Array :\n");
    for (i = 0; i < limit; i++)
    {
        printf("\t%d", values[i]);
    }
}