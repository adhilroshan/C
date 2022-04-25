// Switch Sample
#include<stdio.h>
int main(){
    int choice;
    printf("=== MENU ===");
    printf("\n Press 1 For Porotta");
    printf("\n Press 2 For Biriyani");
    printf("\n Press 3 For Kuzhi Mandhi");
    printf("\n Press 4 For Alfahm");
    printf("\n Press 5 For Kabsa");
    printf("\n== ENTER UR CHOICE ==\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You have selected Porotta");
        break;
    case 2:
        printf("You have selected Biriyani");
        break;
    case 3:
        printf("You have selected Kuzhi Mandhi");
        break;
    case 4:
        printf("You have selected Alfahm");
        break;
    case 5:
        printf("You have selected Kabsa");
        break;
    default:
        printf("U idiot!,that is not even an option!!😡😡");
        break;
    }
    return 0;
}