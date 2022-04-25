#include <stdio.h>

int array[100], i, j, n, swap;
void main()
{
    printf("enter no of elements");
    scanf("%d", &n);

    printf("enter %d elements", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    printf("sorted elemets");
    for (i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
}