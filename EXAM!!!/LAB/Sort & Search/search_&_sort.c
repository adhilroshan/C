#include <stdio.h>
#include <stdlib.h>
// #include "selection_sort.h"
// #include "bubble_sort.h"
// #include "linear_search.h"
#include "binery_search.h"
// #include "insertion_sort.h"
// #include "quick_sort.h"
#include "merge_sort.h"

int main()
{
    int n, i, key, flag = 0;
    printf("Enter the number of integers you want to type : \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the numbers :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // SORTING
    mergeSort(array, 0, n - 1);
    printf("After Sorting..\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    // SEARCHING
    printf("\nSearch Key: ");
    scanf("%d", &key);

    binarySearch(array, n, key);

    return 0;
}