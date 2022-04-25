#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("File1","a");
    char str[150],str2[250];
    printf("Enter The Details\n");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    fp = fopen("File1","r");
    fgets(str2,250,fp);
    puts(str2);
    fclose(fp);
    return 0;
}