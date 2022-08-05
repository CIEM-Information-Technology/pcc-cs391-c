/**
 * @file question_3.c
 * @author Aurghyadip Kundu (contact@aurghyadip.live)
 * @brief C Program to implement merge sort algorithm
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "../headers/arrays.h"
#include "../headers/sorting.h"

int main()
{
    int n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    arrayInput(a, n);
    
    mergeSort(a,0,n-1);
    printf("\nList after sorting\n");
    printArray(a, n);
    
    return 0;
}