/*
 * C program to reverse and search the elements of an array. 
 */

#include<stdio.h>
#include "../headers/arrays.h"

int main()
{
    int n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements\n");
    arrayInput(a, n);
    
    sortArray(a, n);
    printf("After sort\n");
    printArray(a, n);

    printf("Array in reversed order:\n");
    for(int i = n - 1  ; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    int item;
    printf("Enter the element to be searched\n");
    scanf("%d",&item);
    int index = linearSearch(a, n, item);
    if(index == -1)
    {
        printf("Value not found inside the array.\n");
    }
    else
    {
        printf("Value found at index = %d\n", index);
    }
    return 0;
}