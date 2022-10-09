#include <stdio.h>

int main()
{
    int i, limit, total = 0, x, counter = 0, time_quantum;
    int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10];
    float average_wait_time, average_turnaround_time;
    printf("\nEnter Total Number of Processes:\t");
    scanf("%d", &limit); // 4
    x = limit;           // x = 4
    for (i = 0; i < limit; i++)
    {
        printf("\nEnter Details of Process[%d]\n", i + 1); // 1 2 3 4

        printf("Arrival Time:\t");

        scanf("%d", &arrival_time[i]); // 0 1 2 3

        printf("Burst Time:\t");

        scanf("%d", &burst_time[i]); // 4 7 5 6

        temp[i] = burst_time[i]; // 4 7 5 6
    }

    printf("nEnter Time Quantum:\t");
    scanf("%d", &time_quantum); // 3
    printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
    for (total = 0, i = 0; x != 0;)
    {
        // 4 <= 3 ❌
        // 7 <= 3 ❌
        // 5 <= 3 ❌
        // 6 <= 3 ❌

        // 1 <=3 && 1 > 0✅
        // 4 <= 3 ❌
        // 2 <=3 && 2> 0✅
        if (temp[i] <= time_quantum && temp[i] > 0)
        {
            // total = 12+1=13
            // total = 16+2=18
            total = total + temp[i];
            //1=0
            // 2=0
            temp[i] = 0;
            counter = 1;
        }
        // 4 > 0 ✅
        // 7 > 0✅
        // 5> 0 ✅
        // 6>0 ✅

        // 4 > 0 ✅
        else if (temp[i] > 0)
        {
            // 4 = 4-3 = 1
            // 7 = 7-3 = 4
            // 5 = 5-3 = 2
            // 6 = 6-3 = 3

            // 4 = 4-3 = 1
            temp[i] = temp[i] - time_quantum;
            // total = 0 + 3 = 3
            // total = 3+3 =6
            // total = 6+3=9
            // total = 9+3 = 12

            // total = 13 + 3=16
            total = total + time_quantum;
        }
        // 4 == 0 ❌ counter==1 ❌
        // 7 ==0 ❌
        // 5 == 0❌
        // 6 ==0❌

        // 0 == 0 && counter ==1 ✅
        // 4 == 0 ❌ counter==1 ❌
        // 0 == 0 && counter ==1 ✅
        if (temp[i] == 0 && counter == 1)
        {
            //x=3
            //x=2
            x--;
            printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, burst_time[i], total - arrival_time[i], total - arrival_time[i] - burst_time[i]);
            wait_time = wait_time + total - arrival_time[i] - burst_time[i];
            turnaround_time = turnaround_time + total - arrival_time[i];
            counter = 0;
        }
        // 0 == 3❌
        // 1 == 3❌
        // 2 == 3❌
        // 3 == 3✅

        // 0 == 3❌
        // 1 == 3❌
        if (i == limit - 1)
        {
            // i=0
            i = 0;
        }
        // arrival_time[1] <= total = 1 <= 3 ✅
        // arrival_time[2] <= total = 2 <= 6 ✅
        // arrival_time[3] <= total = 3 <= 9 ✅
        
        // arrival_time[1] <= total = 1 <= 13 ✅
        // arrival_time[2] <= total = 2 <= 16 ✅
        else if (arrival_time[i + 1] <= total)
        {
            // i=1
            // i=2
            // i=3

            // i=1
            // i=2
            i++;
        }
        else
        {
            i = 0;
        }
    }

    average_wait_time = wait_time * 1.0 / limit;
    average_turnaround_time = turnaround_time * 1.0 / limit;
    printf("\n\nAverage Waiting Time:\t%f", average_wait_time);
    printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time);
    return 0;
}