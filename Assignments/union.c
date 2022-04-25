/* Declare a union containing 5 string variables(Name, House Name, City Name, State and Pin Code code)
 each with a length of C_SIZE(user defined constant).
 Then, read and display the address of a person using a variable of the union. */

 #include <stdio.h>
 union address
 {
     char name[20];
     char house_name[20];
     char city_name[20];
     char state[20];
     int pin_code;
 };
 
 void main(){
     union address a;
     printf("\n  Enter Your Details: \n");
     printf(" -------------------------");
     printf("\n Name: ");
     scanf("%s", a.name);
     printf(" House Name: ");
     scanf("%s", a.house_name);
     printf(" City: ");
     scanf("%s", a.city_name);
     printf(" State: ");
     scanf("%s", a.city_name);
     printf(" Pin Code: ");
     scanf("%d",&a.pin_code);

     printf("\n  Entered Employee Details: \n");
     printf(" ---------------------------");
     printf("\n Name: %s", a.name);
     printf("\n House Name: %s", a.house_name);
     printf("\n City Name: %s", a.city_name);
     printf("\n State: %s", a.state);
     printf("\n Pin Code: %d\n", a.pin_code);
 }