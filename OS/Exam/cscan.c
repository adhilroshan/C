#include <stdio.h>
#include <stdlib.h>

int size = 8;
int main()
{
    int queue[size], head, track_count, i, j;
    int max_range, left = 0, left_arr[size], right = 0, right_arr[size];
    int temp, difference, seek = 0;
    float average_seek_time;
    // Max Range of Disk
    printf("Enter the maximum range of Disk : ");
    scanf("%d", &max_range);
    // Disk Access Requests
    printf("Enter the no of indexes of track requested :");
    scanf("%d", &track_count);
    // initial head position
    printf("Enter the initial head position :");
    scanf("%d", &head);
    printf("Enter the indexes of track as requested :\n");
    for (i = 0; i < track_count; i++)
    {
        scanf("%d", &temp);
        if (temp > head)
        {
            right_arr[right] = temp;
            right++;
        }
        else
        {
            left_arr[left] = temp;
            left++;
        }
    }
    // sorting the arrays
    // Right in Ascending

    for (i = 0; i < right - 1; i++)
    {
        for (j = 0; j < right - i - 1; j++)
        {
            // > asc
            // < desc
            if (right_arr[j] > right_arr[j + 1])
            {
                temp = right_arr[j];
                right_arr[j] = right_arr[j + 1];
                right_arr[j + 1] = temp;
            }
        }
    }
    // Left also in Ascending
    for (i = 0; i < left - 1; i++)
    {
        for (j = 0; j < left - i - 1; j++)
        {
            if (left_arr[j] > left_arr[j + 1])
            {
                temp = left_arr[j];
                left_arr[j] = left_arr[j + 1];
                left_arr[j + 1] = temp;
            }
        }
    }

    // Copy right to queue

    for (i = 1, j = 0; j < right; i++, j++)
    {
        queue[i] = right_arr[j];
    }
    // End
    queue[i] = max_range;
    queue[i + 1] = 0;
    for (i = right + 3, j = 0; j < left; i++, j++)
    {
        queue[i] = left_arr[j];
    }
    // Start

    // head

    queue[0] = head;

    for (j = 0; j <= track_count + 1; j++)
    {
        difference = abs(queue[j + 1] - queue[j]);
        // measure seek time by adding difference
        seek = seek + difference;

        printf("Disk head moves from %d to %d with seek %d \n", queue[j], queue[j + 1], difference);
    }

    average_seek_time = seek / (float)track_count;

    printf("Total seek time = %d\n", seek);
    printf("Average seek time = %f\n", average_seek_time);
}