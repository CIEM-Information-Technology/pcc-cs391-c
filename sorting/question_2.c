/**
 * @file question_2.c
 * @author Aurghyadip Kundu
 * @brief C Program to implement selection sort.
 * @version 0.1
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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
