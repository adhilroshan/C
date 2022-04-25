#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char another='Y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    fp=fopen("EMPLOYEE.DAT","w");
    if (fp==NULL)
    {
        puts("Cannot open file");
        exit(0);
    }
    while (another=='Y')
    {
        printf("\nENter name,age and basic salary: ");
        scanf("%s%d%f",e.name,&e.age,&e.bs);
        fprintf(fp,"%s%d%f",e.name,e.age,e.bs);
        printf("Add Another Record (Y/N) ");
        fflush(stdin);
        scanf("%c",&another);
    }
    fclose(fp); 
}