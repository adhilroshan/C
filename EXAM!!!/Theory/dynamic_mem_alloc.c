#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i, n;
    printf("ENter then number of integers : ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not available");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        // printf("%p", ptr + i);
        printf(" Enter an integer : ");
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}