#include<stdio.h>
#include "../headers/arrays.h"
#include "../headers/sorting.h"

int main()
{
    int n;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements\n");
    arrayInput(a, n);

    selectionSort(a,n);
    printf("After sorting\n");
    printArray(a, n);

    return 0;
}
