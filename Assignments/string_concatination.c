#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    puts("Enter 2 Names");
    gets(s1);
    gets(s2);
    strcat(s1, " ");
    strcat(s1, s2);
    puts(s1);
    return 0;
}