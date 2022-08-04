/**
 * @file arrays.h
 * @author Aurghyadip Kundu (contact@aurghyadip.live)
 * @brief Header file for common array operations
 * @version 0.1
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief function to take input in an array
 * 
 * @param a array to take input to
 * @param n number of elements in the array
 */
void arrayInput(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

/**
 * @brief prints an array of size n
 * 
 * @param a array to be printed
 * @param n size of the array
 */
void printArray(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}

/**
 * @brief function to bubble sort an array of size n.
 * 
 * @param a array to be sorted
 * @param n size of the array
 */
void sortArray(int a[], int n)
{
    int i, j, temp; /* temporary variables */

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief function to search an element inside an array using linear search
 * 
 * @param a array to be searched
 * @param n number of elements in the array
 * @param item elemenet to be searched
 * @return int Index of the element or -1 if not found
 */
int linearSearch(int a[], int n, int item)
{
    int i;
    int flag = 0;
    
    for(i = 0; i < n; i++)
    {
        if(a[i] == item)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

/**
 * @brief inserts an element into the array provided
 * 
 * @param a array to insert the element into
 * @param n reference to the size of the array.
 */
void insertElement(int a[], int *n)
{
    int p, i, k;
    printf("Enter the position\n");
    scanf("%d", &p);
    printf("Enter the element to be entered\n");
    scanf("%d", &k);
    i = *n - 1;
    while(i >= p)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[p] = k;
    *n = *n + 1;
    printf("After insertion:");
    for(i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/**
 * @brief deletes an element from an array based on index
 * 
 * @param a array to delete the element from
 * @param n reference to the size of the array
 */
void deleteElement(int a[], int *n)
{
    int i, p, k;
    printf("\nEnter the index to be deleted\n");
    scanf("%d", &p);
    i = p;
    k = a[p];
    while(i < *n - 1)
    {
        a[i] = a[i + 1];
        i++;
    }
    *n = *n - 1;
    printf("After deletion\n");
    for(i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}