#include <stdio.h>
#pragma pack(1)
struct structure_padding
{
    char a;
    char b;
    int c;
};

int main()
{
    struct structure_padding var;
    printf("%d bytes\n", sizeof(var));
    printf("%p \n", &(var.a));
    printf("%p \n", &(var.b));
    printf("%p \n", &(var.c));
    return 0;
}