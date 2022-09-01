#include<stdio.h>
#include<stdlib.h>
#include "../headers/arrays.h"

void mergeSort(int *, int);
void merge(int *, int, int *, int);

int main()
{
    int n;
    int *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    arrayInput(arr, n);

    mergeSort(arr, n);
    printArray(arr, n);
    
    return 0;
}

/**
 * @brief Merge sort function
 * 
 * @param arr pointer to the array to be sorted
 * @param size size of the array
 */
void mergeSort(int *arr, int size)
{
    int mid = 0;
    if(size > 1)
    {
        mid = size / 2;
        mergeSort(arr, mid);
        mergeSort(arr + mid, size - mid);
        merge(arr, mid, arr + mid, size - mid);
    }
}

/**
 * @brief merge function for the merge sort
 * 
 * @param a pointer to the left half of the array
 * @param size1 size of the first half (left -> mid)
 * @param b pointer to the right half of the array
 * @param size2 size of the second half (mid -> right)
 */
void merge(int *a, int size1, int *b, int size2)
{
    int *temp;
    int i = 0, j = 0, k = 0;
    temp = (int *)malloc((size1+size2) * sizeof(int)); // dynamic array

    // merge the small leaves
    while (i < size1 && j < size2)
    {
        // check if elements in left array are less than 
        // right array
        if(a[i] < b[j])
        {
            temp[k] = a[i];
            k++; i++;
        }
        // if there are elements that are less than left array in
        // right array
        else
        {
            temp[k] = b[j];
            k++; j++;
        }
    }
    // copy the remaining elements of left array
    while(i < size1)
    {
        temp[k] = a[i];
        k++; i++;
    }
    //copy the remaining elements of right array
    while(j < size2)
    {
        temp[k] = b[j];
        k++; j++;
    }
    
    // copy temp into a
    for (i = 0; i < k; i++)
    {
        a[i] = temp[i];
    }

    free(temp);
}