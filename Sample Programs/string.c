#include<stdio.h>
void main(){
    char name[20];
    printf("Enter Ur Name : ");
    // scanf("%s",name);
    gets(name);
    printf("\tEntered Name is %s",name);
}