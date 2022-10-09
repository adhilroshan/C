// C implementation of First - Fit algorithm
#include <stdio.h>
#include "modules/first_fit.h"
#include "modules/best-fit.h"
// #include "modules/worst_fit.h"
// Driver code
int main()
{
    int i;
    int blockCount;   // number of blocks in the memory
    int processCount; // number of processes in the input queue
    printf("Enter the no of blocks : ");
    scanf("%d", &blockCount);
    int blockSize[blockCount];
    printf("Enter block sizes : \n");
    for (i = 0; i < blockCount; i++)
    {
        scanf("%d", &blockSize[i]);
    }

    printf("Enter the no of processes : ");
    scanf("%d", &processCount);
    int processSize[processCount];
    printf("Enter process sizes : \n");
    for (i = 0; i < processCount; i++)
    {
        scanf("%d", &processSize[i]);
    }
    int choice = 0;
    while (choice != 4)
    {
        printf("Which Memory Allocation Algorithm are you wish to use?");
        printf("\n\t(1) First Fit\n\t(2) Best Fit\n\t(3) Worst Fit\n");
        printf(" Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            firstFit(blockSize, blockCount, processSize, processCount);
            break;
        case 2:
            bestFit(blockSize, blockCount, processSize, processCount);
            break;
        case 4:
            break;

        default:
            break;
        }
    }

    firstFit(blockSize, blockCount, processSize, processCount);
    return 0;
}