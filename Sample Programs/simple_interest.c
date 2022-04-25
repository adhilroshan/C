#include <stdio.h>
int main(){
    printf("=== SIMPLE INTEREST ===\n");
    int P,R,n;
    float SI;
    printf("Enter P,R,n repectively\n");
    scanf("%d%d%d",&P,&R,&n);
    printf("\n [P = %d],\n [R = %d],\n [n = %d] \n\n",P,R,n);
    printf(" --- EQUATION [SI = (PRn)/100] --- \n\n");
    SI = (P*R*n)/100;
    printf(" => SI = %f", SI);
    return 0;
}