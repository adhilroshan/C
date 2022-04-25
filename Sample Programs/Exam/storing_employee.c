#include<stdio.h>
void main(){
    FILE *fp;
    int id;
    char name[30];
    float salary;
    fp=fopen("emp.txt","w+");
    printf("ENter the id\n");
    scanf("%d",&id);
    fprintf(fp,"Id = %d\n",id);
    printf("ENter the name\n");
    scanf("%s",name);
    fprintf(fp,"Name = %s\n",name);
    printf("Enter the salary\n");
    scanf("%f",&salary);
    fprintf(fp,"Salary = %2f\n",salary);
    fclose(fp);
}