#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to turn a string into lowercase
void toLower(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char a[100], b[100];

    printf("Enter a string to check if it's a palindrome\n");
    gets(a);

    toLower(a);
    strcpy(b, a); // Copying input string
    strrev(b);    // Reversing the string

    if (strcmp(a, b) == 0) // Comparing input string with the reverse string
        printf("The string is a palindrome.\n");
    else
        printf("The string isn't a palindrome.\n");

    return 0;
}

/*  
ref:https://stackoverflow.com/questions/37037165/return-makes-integer-from-pointer-without-a-cast-wint-conversion-return-candi?rq=1
ref2:https://stackoverflow.com/questions/35292863/return-makes-integer-from-pointer-without-a-cast-simple-for-loop

Your local variable candidate is an array of char. When you say

\\return candidate;//code

you return a pointer to char. (This is due to the very close relationship between arrays and pointers in C, which you will have to learn about if you don't know yet.) But you've stated that your function getkey returns a char, not a pointer-to-char.

You need to make the function's return value match its type. You might want change the return statement so it returns a single char. If you want to have the function return a whole string, you could change its declaration to char *getkey(), but in that case you'll also have to take care of the allocation of the candidate array.

Here's what the warning means. You tried to return a pointer. The function is supposed to return a character, which is represented as a small integer. The compile is willing to try to convert the pointer to an integer, in case that's what you really want to do, but since that's not usually a good idea, it warns you. Indeed, in this case the warning tells you that you probably made a mistake. */