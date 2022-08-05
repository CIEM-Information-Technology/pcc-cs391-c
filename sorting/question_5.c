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
    int n, f, l, pos;
    printf("Enter no. of elements\n");
    scanf("%d", &n);
    int a[n];
    l = n - 1;
    printf("Enter the elements\n");
    arrayInput(a, n);

    quick(a, f, l);
    printf("After sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}