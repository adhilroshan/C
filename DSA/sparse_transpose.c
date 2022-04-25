#include <stdio.h>

int main()
{
    int b1[20][3], b2[20][3], m, n, t, i, j, k;
    printf("Enter the size of matrix (rows,columns):");
    scanf("%d%d", &m, &n);
    b1[0][0] = m;
    b1[0][1] = n;
    printf("\nEnter no. of non-zero elements:");
    scanf("%d", &t);
    b1[0][2] = t;
    for (i = 1; i <= t; i++)
    {
        printf("\nEnter the next triple(row,column,value):");
        scanf("%d%d%d", &b1[i][0], &b1[i][1], &b1[i][2]);
    }
    b2[0][0] = b1[0][1];
    b2[0][1] = b1[0][0];
    b2[0][2] = b1[0][2];
    k = 1;
    n = b1[0][2];
    for (i = 0; i < b1[0][1]; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // if a column number of current triple==i then insert the current triple in b2
            if (i == b1[j][1])
            {
                b2[k][0] = i;
                b2[k][1] = b1[j][0];
                b2[k][2] = b1[j][2];
                k++;
            }
        }
    }
    n = b2[0][2]; // no of 3-triples
    printf("\nAfter Transpose:\n");
    printf("\nrow\t\tcolumn\t\tvalue\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t\t%d\t\t%d\n", b2[i][0], b2[i][1], b2[i][2]);
    }
}
