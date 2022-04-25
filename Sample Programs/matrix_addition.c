#include<stdio.h>
void main(){
    int i,j,m,n;
    printf("Enter the size of Matrix:\n");
    scanf("%d%d",&m,&n);
    int mat1[m][n],mat2[m][n],sum[m][n];
    printf("Enter Matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&mat1[i][j]);
        }        
    }
    printf("Enter Matrix B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nMATIRIX A\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMATIRIX B\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    //Addtion of A+B
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }

    printf("\nSUM OF MATRIX A + B :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}