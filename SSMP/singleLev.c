#include <stdio.h>
#include <string.h>
void main()
{
    int nf = 0, i = 0, j = 0, ch;
    char mdname[10], fname[10][10], name[10];
    printf("Enter the directory name:");
    scanf("%s", mdname);
    printf("Enter the number of files:");
    scanf("%d", &nf);
    do
    {
        printf("Enter file name to be created:");
        scanf("%s", name);
        for (i = 0; i < nf; i++)
        {
            if (!strcmp(name, fname[i]))
                break;
        }
        if (i == nf)
        {
            strcpy(fname[j++], name);
            nf++;
        }
        else
            printf("There is already %s\n", name);
        printf("Do you want to enter another file(yes - 1 or no - 0):");
        scanf("%d", &ch);
    } while (ch == 1);
    printf("Directory name is:%s\n", mdname);
    printf("Files names are:");
    for (i = 0; i < j; i++)
        printf("\n%s", fname[i]);
}

/*
    * Algorithm

Step 1:Start
Step 2: Initialize values gd=DETECT,gm,count,i,j,mid,cir_x;
Initialize character array fname[10][20];
Step 3: Initialize graph function as
Initgraph(& gd, &gm," c:/tc/bgi");
Clear device();
Step 4:set back ground color with setbkcolor();
Step 5:read number of files in variable count.
Step 6:if check i<count
Step 7: for i=0 & i<count
i increment;
Cleardevice();
setbkcolor(GREEN);
read file name;
setfillstyle(1,MAGENTA);
Step 8: mid=640/count;
cir_x=mid/3;
bar3d(270,100,370,150,0,0);
settextstyle(2,0,4);
settextstyle(1,1);
outtextxy(320,125,"rootdirectory");
setcolor(BLUE);
i++;
Step 9:for j=0&&j<=i&&cir_x+=mid
j increment;
line(320,150,cir_x,250);
fillellipse(cir_x,250,30,30);
outtextxy(cir_x,250,fname[i]);
Step 10: End
*/