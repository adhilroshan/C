#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d is largest", a);
    }
    else
    {
        printf("%d is largest", b);
    }
    return 0;
}