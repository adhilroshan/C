#include <stdio.h>
#include <stdlib.h>

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

void main()
{
    int i, remainder, rev = 0, choice, n, sum = 0;
    long f;
    while (choice != 3)
    {
        printf("\t === MENU === \n");
        printf("(1) Sum of n Natural Numbers\n");
        printf("(2) Reverse of a Number\n");
        printf("(3) Factorial of a Number\n");
        printf("(4) Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the limit\n");
            scanf("%d", &n);
            for (i = 1; i < n; i++)
            {
                sum += i;
            }
            printf("Sum of %d natural number is %d\n", n, sum);
            break;
        case 2:
            printf("Enter an integer: ");
            scanf("%d", &n);
            while (n != 0)
            {
                remainder = n % 10;
                rev = rev * 10 + remainder;
                n /= 10;
            }
            printf("Reversed number = %d\n", rev);
            break;
        case 3:
            printf("Enter the number\n");
            scanf("%d", &n);
            if (n < 0)
                printf("Factorial of negative integers isn't defined.\n");
            else
            {
                f = factorial(n);
                printf("%d! = %ld\n", n, f);
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong input!!!\n");
            break;
        }
    }
}