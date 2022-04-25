#include<stdio.h>
void sum(){
    int a,b,c=0;
    printf("\nEnter 2 Numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("SUM = %d",c);
}

int main(){
    sum();
    sum();
    return 0;
}