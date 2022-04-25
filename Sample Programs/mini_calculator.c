// Sample of Else If Ladder
#include<stdio.h>
int main(){
    int num1,num2,choice,ans;
    printf("Enter 2 Numbers\n");
    scanf("%d%d",&num1,&num2);
    while (choice != 5)
    {
        printf("\n\n Press 1 for Addition\n Press 2 for Substraction\n Press 3 for Multiplecation\n Press 4 for Division\n Press 5 to Exit");
        printf("\n=== ENTER YOUR CHOICE ===\n");
        scanf("%d",&choice);
        if (choice == 1)
        {
            ans = num1 + num2;
            printf("\n\t %d + %d = %d", num1, num2, ans);
        }
        else if (choice == 2)
        {
            ans = num1 -num2;
            printf("\n\t %d - %d = %d", num1, num2, ans);
        }
        else if (choice == 3)
        {
            ans = num1 * num2;
            printf("\n\t %d x %d = %d", num1, num2, ans);
        }
        else if (choice == 4)
        {
            ans = num1 / num2;
            printf("\n\t %d / %d = %d", num1, num2, ans);
        }
    }
    return 0;
}