
#include <stdio.h>
#include <string.h>
#define C_SIZE 50
union Address
{
    int pin;
    char name[C_SIZE];
};
int main()
{
    union Address record1;

    printf("Enter name:");
    scanf("%s", record1.name);
    // printf("Enter pin:");
    // scanf("%d", record1.pin);

    printf("Union record1 values ....\n");
    printf(" Name: %s \n", record1.name);
    printf(" Pin : %d \n\n", record1.pin);
    return 0;
}