/**
 * @file question_1.c
 * @author Aurghyadip Kundu (contact@aurghyadip.live)
 * @brief C program to sort an array, insert an element into array, and
 * delete an element from an array using index.
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include "../headers/arrays.h"

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
    printArray(a, n);

    insertElement(a, &n);
    deleteElement(a, &n);
    
    return 0;
}