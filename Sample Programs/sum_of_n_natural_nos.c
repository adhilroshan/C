#include<stdio.h>
int main(){
    int i,n,sum;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of %d natural nos is %d ",n,sum);
    return 0;
}