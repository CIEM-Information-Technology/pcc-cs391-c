/**
 * @file question_4.c
 * @author Aurghyadip Kundu (contact@aurghyadip.live)
 * @brief C program to implement heap sort
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
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements: \n");
    arrayInput(a, n);

    heapSort(a, n);
    printf("Sorted array\n");
    printArray(a, n);

    return 0;
}