#include<stdio.h>
int main(){
    int n,i,t,j;
    printf("Enter the List Size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    // INSERTION SORT!!!
    for ( i = 1; i <= n-1; i++)
    {
        t=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(t<a[j])
                a[j+1]=a[j];
            else
                break;
        }
        a[j+1]=t;
    }

    printf("Sorted Array: \n", n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}