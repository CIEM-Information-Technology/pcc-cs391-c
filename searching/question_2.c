#include <stdio.h>
#include "../headers/arrays.h"
#include "../headers/sorting.h"

/**
 * @brief Function to implement binary search algorithm
 * 
 * @param arr array to be searched
 * @param max maximum number of elements
 * @param element element to be searched
 * @return int index of the element. -1 if not found
 */
int binarySearch(int arr[], int max, int element)
{
    int low = 0, high = max - 1, middle;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (element > arr[middle])
            low = middle + 1;
        else if (element < arr[middle])
            high = middle - 1;
        else
            return middle;
    }
    return -1;
}

int main()
{
    int element, limit;
    printf("Enter the number of elements in array: ");
    scanf("%d", &limit);
    int arr[limit];
    
    printf("Enter %d Elements in Array: \n", limit);
    arrayInput(arr, limit);
    sortArray(arr, limit);
    printf("Sorted array: ");
    printArray(arr, limit);

    printf("Enter Element To Search: ");
    scanf("%d", &element);

    int position = binarySearch(arr, limit, element);
    if (position == -1)
    {
        printf("Element %d Not Found\n", element);
    }
    else
    {
        printf("Element %d Found at Position %d\n", element, position + 1);
    }

    return 0;
}