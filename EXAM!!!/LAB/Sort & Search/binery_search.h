#include <stdio.h>

int binarySearchIterative(int array[], int key, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == key)
        {
            return mid;
        }

        if (array[mid] < key)
        {
            start = mid + 1;
        }

        if (array[mid] > key)
        {
            end = mid - 1;
        }
    }
    return -1;
}
int binarySearchRecursive(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        // If found at mid, then return it
        if (array[mid] == x)
            return mid;

        // Search the left half
        if (array[mid] > x)
            return binarySearchRecursive(array, x, low, mid - 1);

        // Search the right half
        return binarySearchRecursive(array, x, mid + 1, high);
    }

    return -1;
}
void binarySearch(int array[], int n, int key)
{

    int result = binarySearchRecursive(array, key, 0, n - 1);

    if (result == -1)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("Found @ %d", result + 1);
    }
}
