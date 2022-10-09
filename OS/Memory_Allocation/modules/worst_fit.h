void firstFit(int blockSize[], int blockCount, int processSize[], int processCount)
{
    int i, j;
    // Stores block id of the
    // block allocated to a process
    int allocation[processCount];

    // Initially no block is assigned to any process
    for (i = 0; i < processCount; i++)
    {
        allocation[i] = -1;
    }

    // pick each process and find suitable blocks
    // according to its size ad assign to it
    for (i = 0; i < processCount; i++) // here, n -> number of processes
    {
        // Find the best fit block for current process
        int wstIdx = -1;
        for (j = 0; j < blockCount; j++) // here, m -> number of blocks
        {
            if (blockSize[j] >= processSize[i])
            {
                if (wstIdx == -1)
                    wstIdx = j;
                else if (blockSize[wstIdx] < blockSize[j])
                    wstIdx = j;
            }
        }
        // If we could find a block for current process
        if (wstIdx != -1)
        {
            // allocate block j to p[i] process
            allocation[i] = wstIdx;

            // Reduce available memory in this block.
            blockSize[wstIdx] -= processSize[i];
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < processCount; i++)
    {
        printf(" %i\t\t", i + 1);
        printf("%i\t\t\t", processSize[i]);
        if (allocation[i] != -1)
            printf("%i", allocation[i] + 1);
        else
            printf("Not Allocated");
        printf("\n");
    }
}