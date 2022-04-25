// /* Write a menu driven program for performing matrix addition, multiplication and finding the transpose. Use functions to (i) read a matrix, (ii) find the sum of two matrices, (iii) find the product of two matrices, (i) find the transpose of a matrix and (v) display a matrix. */

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "menu.h"

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

    // menu-driven
    menu(a,b,c);
    
    return 0;
}