#include <stdio.h>
int main()
{
    int i=0, j=0;
    char s1[20], s2[20],s3[40];
    printf("Enter The String\n");
    gets(s1);
    gets(s2);
    while(s1[i]!='\0'){
        s3[j]=s1[i];
        i++;
        j++;
    }
    i=0;
    while (s2[i]!='\0')
    {
        s3[j]=s2[i];
        i++;
        j++;
    }
    s3[j]='\0';

    printf("\nConcatenated String = %s",s3);
    return 0;
}