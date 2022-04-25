#include <stdio.h>
int main()
{
    int i, count = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("%d is not a prime number\n", n);
    }
    else if (n == 1 || n == 0)
    {
        printf("%d is neither a prime number nor a composite\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }
    return 0;
}