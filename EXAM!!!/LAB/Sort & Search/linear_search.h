#include <stdio.h>
void linearSearch(int array[], int n,int key){
    int i,flag=0;
    for (i = 0; i < n; i++)
    {
        if (key == array[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is found @ %dth position\n", key, i + 1);
    }
    else
    {
        printf("%d is not found\n", key);
    }
}