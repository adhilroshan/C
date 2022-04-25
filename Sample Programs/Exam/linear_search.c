#include <stdio.h>
int main()
{
    int n, i, key, a[10], flag = 0;
    printf("Enter the limit");
    scanf("%d", &n);
    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements are \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the key to be searched\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag++;
        }
    }
    if (flag == 1)
    {
        printf("Element found @ %dth position", i + 1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}