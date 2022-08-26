#include <stdio.h>
#include "../headers/arrays.h"

/**
 * @brief implementation function of linear search algorithm
 * 
 * @param a array to be searched
 * @param n number of elements in the array
 * @param item item to be searched in the array
 */
void linear_search(int a[], int n, int item)
{
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            printf("Found at %d index\n", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Not Found");
    }
}

int main()
{
    int n, item;
    printf("Enter no of elements in the array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements\n");
    arrayInput(a, n);
    
    printf("Enter the element to be searched\n");
    scanf("%d", &item);
    linear_search(a, n, item);
    
    return 0;
}