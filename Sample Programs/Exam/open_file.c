#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("file", "r");
    char str[152];
    while (fgets(str, 152, fp) != NULL)
    {   
        puts(str);
    }   
    fclose(fp);
}