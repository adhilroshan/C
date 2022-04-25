#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,sum;
    printf("Enter 2 numbers");
    scanf("%d%d", &a, &b);
    // printf("%d%d", a,b);
    sum = a+b;
    printf("Sum =  %d ", sum);

    return EXIT_SUCCESS;
}