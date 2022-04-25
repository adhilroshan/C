#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file2","w");
    int x,y;
    printf("Enter the Value\n");
    scanf("%d",&x);
    fprintf(fp,"%d",x);
    fclose(fp);
    fp=fopen("file2","r");
    fscanf(fp,"%d",&y);
    y=y+20;
    printf("%d",y);
    fclose(fp);
    return 0;
}
