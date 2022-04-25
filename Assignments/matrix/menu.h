#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

void menu(int a[3][3], int b[3][3], int c[3][3]){
    
    int choice;
    // menu-driven
    do
    {
        // menu to choose the operation
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Exit\n");
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
            subtract(a, b, c);
            printf("Subtraction of matrix: \n");
            display(c);
            break;
        case 3:
            multiply(a, b, c);
            printf("Multiplication of matrix: \n");
            display(c);
            break;
        case 4:
            printf("Transpose of the first matrix: \n");
            transpose(a, c);
            display(c);
            printf("Transpose of the second matrix: \n");
            transpose(b, c);
            display(c);
            break;
        case 5:
            printf("Thank You.\n");
            break;
        default:
            printf("Invalid input.\n");
            printf("Please enter the correct input.\n");
        }
    } while (choice != 5);
}