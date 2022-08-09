/**
 * @file question_5.c
 * @author Aurghyadip Kundu (contact@aurghyadip.live)
 * @brief C Prorgam to implement quick sort.
 * @version 0.1
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
    printf("Enter no. of elements\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements\n");
    arrayInput(a, n);

    quickSort(a, 0, n - 1);
    printf("After sorting\n");
    printArray(a, n);

    return 0;
}