// BREAK
#include<stdio.h>
void Break(){
    printf("\n===Break===\n");
    for(int i;i<10;i++){
        printf("Hi\n");
        if (i==5)
        { break;}
        printf("Hello\n");
    }
    printf("\nFinished!!");
}

// Continue
#include <stdio.h>
void Continue()
{
    printf("\n===Continue===\n");
    for (int i; i < 10; i++)
    {
        printf("Hi\n");
        if (i == 5)
        {
            continue;
        }
        printf("Hello\n");
    }
    printf("\nFinished!!");
}

void main(){
    Break();
    Continue();
}
// Find it Yourself 😎😎