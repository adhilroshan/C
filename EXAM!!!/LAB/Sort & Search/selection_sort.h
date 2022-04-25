#include "swap.h"
void selectionSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (array[i] > array[j])
                swap(&array[i], &array[j]);
}