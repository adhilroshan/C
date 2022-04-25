/* Write a menu driven program for performing matrix addition, multiplication and finding the transpose.
Use functions to (i) read a matrix, (ii) find the sum of two matrices, (iii) find the product of two matrices,
(i) find the transpose of a matrix and (v) display a matrix. */

#include <stdio.h>
#include <stdlib.h>

// function to read 3x3 matrix
void read(int m[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
}

// function to add two 3x3 matrix
void add(int m[3][3], int n[3][3], int sum[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = m[i][j] + n[i][j];
}

// function to multiply two 3x3 matrix
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            // find product
            for (int k = 0; k < 3; k++)
                result[i][j] += m[i][k] * n[k][j];
        }
    }
}

// function to find transpose of a 3x3 matrix
void transpose(int matrix[3][3], int trans[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            trans[i][j] = matrix[j][i];
}

// function to display 3x3 matrix
void display(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);

        printf("\n");
    }
}

// main function
int main()
{
    // matrix
    int a[3][3];
    int b[3][3];
    int c[3][3];

    // matrix insertion
    printf("Enter First Matrix(3x3)\n");
    read(a);
    printf("Enter Second Matrix(3x3)\n");
    read(b);

    // print both matrix
    printf("First Matrix:\n");
    display(a);
    printf("Second Matrix:\n");
    display(b);

    // variable to take choice
    int choice;

    // menu-driven
    do
    {
        // menu to choose the operation
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Transpose\n");
        printf("4. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add(a, b, c);
            printf("Sum of matrix: \n");
            display(c);
            break;
        case 2:
            multiply(a, b, c);
            printf("Multiplication of matrix: \n");
            display(c);
            break;
        case 3:
            printf("Transpose of the first matrix: \n");
            transpose(a, c);
            display(c);
            printf("Transpose of the second matrix: \n");
            transpose(b, c);
            display(c);
            break;
        case 4:
            printf("Thank You.\n");
            printf("Adhil Roshan.\n");
            break;
        default:
            printf("Invalid input.\n");
            printf("Please enter the correct input.\n");
        }
    } while (choice != 4);

    return 0;
}
