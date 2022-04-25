#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("myfile.txt","w+");
    fputs("This is new",fp);
    fseek(fp,7,SEEK_SET);
    fputs(" eduline",fp);
    fclose(fp);
}