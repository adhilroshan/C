#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, sum = 0;
    int aRow, aCol;
    int bRow, bCol;
    printf("Enter rows and columns of Matrix A\n");
    scanf("%d%d", &aRow, &aCol);
    int a[aRow][aCol];
    printf("Enter Elements of Matrix A\n");
    for (i = 0; i < aRow; i++)
    {
        for (j = 0; j < aCol; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter rows and columns of Matrix B\n");
    scanf("%d%d", &bRow, &bCol);
    int b[bRow][bCol];
    if (aCol != bRow)
    {
        printf("Multiplecation not possible bcoz Cols of A not Equal to Rows of B");
        exit(0);
    }
    else
    {
        printf("Enter Elements of Matrix B\n");
        for (i = 0; i < aRow; i++)
        {
            for (j = 0; j < aCol; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }
    int result[aRow][bCol];
    // Calculation: multiplecation of matrices
    for (i = 0; i < aRow; i++)
    {
        for (j = 0; j < bCol; j++)
        {
            for (k = 0; k < bRow; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("Matrix A\n");
    for (i = 0; i < aRow; i++)
    {
        for (j = 0; j < aCol; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B\n");
    for (i = 0; i < bRow; i++)
    {
        for (j = 0; j < bCol; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    printf("Resultant Matrix\n");
    for (i = 0; i < aRow; i++)
    {
        for (j = 0; j < bCol; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
}