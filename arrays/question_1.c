/*
 * C program to sort an array, insert an element into array, and
 * delete an element from an array using index.
 */

#include<stdio.h>
#include "arrays.h"

int main()
{
    int i, j; /* temp variables */
    int n; /* number of elements in the array */
    
    printf("Enter no. of elements\n");
    scanf("%d", &n);
    
    int a[n]; /* declaring an array of size n */

    printf("Enter the elements\n");
    arrayInput(a, n);
    
    sortArray(a, n);

    printf("After sort\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    insertElement(a, &n);
    deleteElement(a, &n);
    
    return 0;
}