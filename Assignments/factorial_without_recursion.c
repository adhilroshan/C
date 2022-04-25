#include <stdio.h>
long factorial(int);

int main()
{
    int n;

    printf("Enter a number to calculate its factorial\n");
    scanf("%d", &n);

    printf("%d! = %ld\n", n, factorial(n));

    return 0;
}

long factorial(int n)
{
    int c;
    long r = 1;

    for (c = 1; c <= n; c++)
        r = r * c;

    return r;
}