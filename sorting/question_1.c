#include<stdio.h>
#include "../headers/arrays.h"
#include "../headers/sorting.h"

int main()
{
    int n;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements\n");
    arrayInput(a, n);
    
    insertionSort(a, n);
    printf("\nArray after sorting\n");
    printArray(a, n);
    
    return 0;
}