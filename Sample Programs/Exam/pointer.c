#include <stdio.h>
void main()
{
    int *p, *n=NULL, val[] = {5, 7, 78, 87};
    p = val;
    p = p + 10;
    printf("%u\n", val);
    printf("%u", n);
}