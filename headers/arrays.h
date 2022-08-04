#include<stdio.h>
/*
 * Function: arrayInput
 * take input in an array of size n
 * 
 * a[]: array to be operated on
 * n: size of the array
 */
void arrayInput(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

/*
 * Function: printArray
 * prints an array of size n
 * 
 * a[]: array to be printed
 * n: size of the array
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

/*
 * Function: sortArray
 * function to bubble sort an array of size n.
 * a[]: array to be sorted
 * n: number of elements inside the array.
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

/*
 * Function: linearSearch
 * function to search an element inside an array using linear search
 * 
 * a[]: array to be searched
 * n: number of elements inside the array
 * e: element to be searched
 * 
 * returns: int (index of the element)
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

/*
 * Function: insertElement
 * inserts an element into the array provided
 * a[]: array to be opearted on
 * *n: reference to the size of the array
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

/*
 * Function: deleteElement
 * deletes an element from an array based on index
 * a[]: array to be opearted on
 * *n: reference to the size of n
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