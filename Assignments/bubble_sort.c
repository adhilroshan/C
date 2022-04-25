#include<stdio.h>

// Function to Swap 2 Numbers
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// Function to Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

// Function to print given array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main Function
int main()
{
    int limit,i;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter the values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}