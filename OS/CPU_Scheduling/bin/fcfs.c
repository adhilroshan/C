// C program for implementation of FCFS
// scheduling
#include <stdio.h>
// Function to find the waiting time for all
// processes
void findWaitingTime(int processes[], int processCount, int bt[], int wt[])
{
    // waiting time for first process is 0
    wt[0] = 0;

    // calculating waiting time
    for (int i = 1; i < processCount; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
}

// Function to calculate turn around time
void findTurnAroundTime(int processes[], int processCount,
                        int bt[], int wt[], int tat[])
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < processCount; i++)
        tat[i] = bt[i] + wt[i];
}

// Function to calculate average time
void findAvgTime(int processes[], int processCount, int bt[])
{
    int wt[processCount], tat[processCount], total_wt = 0, total_tat = 0;

    // Function to find waiting time of all processes
    findWaitingTime(processes, processCount, bt, wt);

    // Function to find turn around time for all processes
    findTurnAroundTime(processes, processCount, bt, wt, tat);

    // Display processes along with all details
    printf("Processes Burst time Waiting time Turn around time\processCount");

    // Calculate total waiting time and total turn
    // around time
    for (int i = 0; i < processCount; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf(" %d ", (i + 1));
        printf("	 %d ", bt[i]);
        printf("	 %d", wt[i]);
        printf("	 %d\processCount", tat[i]);
    }
    int s = (float)total_wt / (float)processCount;
    int t = (float)total_tat / (float)processCount;
    printf("Average waiting time = %d", s);
    printf("\processCount");
    printf("Average turn around time = %d ", t);
}

// Driver code
int main()
{
    // process id's
    int processCount;
    printf("Enter the no of processes: ");
    scanf("%d", &processCount);
    int processes[processCount];

    // Burst time of all processes
    int burst_time[processCount];
    findAvgTime(processes, processCount, burst_time);
    return 0;
}
