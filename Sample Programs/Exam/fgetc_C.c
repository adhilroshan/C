#include<stdio.h>
void main(){
    char c;
    FILE *fp1,*fp2;
    fp1=fopen("file1","r");
    fp2=fopen("file2","w");
    while ((c=fgetc(fp1))!=EOF)
    {
        if(c!=','){
            printf("%c",c);
            fputc(c,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
}