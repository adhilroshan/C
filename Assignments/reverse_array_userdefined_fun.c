#include <stdio.h>
#include <string.h>

char reverse(char *str, int right)
{
    char temp;
    for (int left = 0; left < right; left++)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        right--;
    }
}
void main()
{
    char str[50]; // define the size of str[] array
    int len;
    printf(" \n Display a reverse string in the C: \n");
    printf(" ----------------------- ");
    printf(" \n Enter a string to reverse order: ");
    gets(str);
    len = strlen(str);     // get the length of the string
    reverse(str, len - 1); // string and position on last letter
    // use reverse fucntion to reverse string
    printf(" The reverse of the original string is: %s ", str);
}
