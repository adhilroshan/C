/* Using structure,read and print details of employee */

#include <stdio.h>
struct employee
{
    int ID;
    int salary;
    char name[20];
    char job[20];
};

int main()
{
    struct employee e;
    printf("\n  Enter Employee Details: \n");
    printf(" -------------------------");
    printf("\n Employee ID: ");
    scanf("%d", &e.ID);
    printf(" Name: ");
    scanf("%s", &e.name);
    printf(" Job: ");
    scanf("%s", &e.job);
    printf(" Salary: ");
    scanf("%d", &e.salary);

    printf("\n  Entered Employee Details: \n");
    printf(" ---------------------------");
    printf("\n Employee ID: %d", e.ID);
    printf("\n Name: %s", e.name);
    printf("\n Job: %s", e.job);
    printf("\n Salary: %d\n", e.salary);
    return 0;
}
